#include "handmade.h"

global Game_State* global_game_state;

// Drawing blue-green gradient
static void
Render_Gradient(Game_Back_Buffer* buffer)
{
    u8* row = (u8*)(buffer->bitmap);
    for (s32 y = 0; y < buffer->height; y++) {
        u32* pixel = (u32*)row;

        for (s32 x = 0; x < buffer->width; x++) {
            u8 blue_channel = (u8)(x + global_game_state->blue_offset);
            u8 green_channel = (u8)(y + global_game_state->green_offset);

            // @note Little-endian RGB: GB|AR
            *pixel++ = (green_channel << 8) | blue_channel;
        }
        row += buffer->pitch;
    }
}

//  Play sin wave sounds
internal void
Output_Sound(Game_Sound_Buffer* buffer)
{
    const s16 tone_volume = 3000;
    // @note Samples-per-circle = samples-per-second / frequency
    s32 wave_period = buffer->samples_per_second / global_game_state->tone_hz;

    s16* write_cursor = buffer->samples;

    for (s32 i = 0; i < buffer->sample_count; i++) {
        float sine_val = sinf((real32)(global_game_state->t_sine));
        s16 sample_val = (s16)(tone_volume * sine_val);
        *write_cursor++ = sample_val; // Left
        *write_cursor++ = sample_val; // Right

        global_game_state->t_sine +=
          (real32)(2.0f * PI32 * (1.0f / (real32)wave_period));
        if (global_game_state->t_sine > 2.0f * PI32) {
            global_game_state->t_sine -= (real32)(2.0f * PI32);
        }
    }
}

internal void
Handle_Controller_Input(Game_Controller_Input* input)
{
    if (input->is_analog) {
        global_game_state->tone_hz =
          256 + (s32)(128.0f * input->stick_average_x);
        global_game_state->blue_offset += (s32)(4.0f * input->stick_average_x);
    }

    if (input->move_down.ended_down) {
        global_game_state->green_offset -= 1;
    }
    if (input->move_up.ended_down) {
        global_game_state->green_offset += 1;
    }
    if (input->move_left.ended_down) {
        global_game_state->blue_offset += 1;
    }
    if (input->move_right.ended_down) {
        global_game_state->blue_offset -= 1;
    }
}

// @note Function signare is define in handmade.h
extern "C" GAME_UPDATE(Game_Update)
{
    global_game_state = (Game_State*)memory->permanent_storage;
    if (!memory->is_initialized) {
        global_game_state->tone_hz = 256;
        global_game_state->t_sine = 0;

        memory->is_initialized = true;
    }

    Handle_Controller_Input(&input->controllers[0]);
    Render_Gradient(back_buffer);
    Output_Sound(sound_buffer);
}