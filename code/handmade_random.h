global u32 random_numbers[] = {
    6,   86,  98,  44,  22,  97, 5,   69,  7,   93, 97,  88,  23,  60,  16,  39,
    90,  52,  37,  71,  36,  12, 9,   52,  74,  79, 53,  72,  28,  10,  79,  51,
    25,  72,  13,  29,  82,  47, 45,  12,  43,  51, 29,  77,  35,  33,  34,  28,
    63,  37,  74,  20,  94,  25, 33,  80,  24,  97, 33,  53,  14,  58,  31,  73,
    24,  67,  36,  44,  96,  39, 5,   73,  65,  38, 35,  51,  2,   85,  86,  91,
    53,  14,  44,  51,  33,  97, 55,  28,  25,  99, 50,  86,  86,  61,  75,  18,
    100, 78,  48,  28,  79,  88, 57,  50,  95,  84, 63,  55,  41,  93,  67,  13,
    44,  55,  27,  7,   64,  33, 39,  30,  40,  79, 4,   55,  78,  13,  45,  60,
    71,  99,  50,  95,  8,   85, 5,   39,  67,  72, 83,  62,  33,  36,  42,  86,
    60,  39,  6,   100, 61,  82, 54,  98,  91,  9,  51,  82,  42,  63,  92,  96,
    68,  87,  86,  35,  36,  31, 99,  15,  45,  8,  71,  32,  49,  85,  12,  73,
    2,   13,  30,  1,   53,  92, 99,  93,  59,  61, 78,  38,  11,  5,   23,  72,
    28,  43,  95,  2,   40,  64, 87,  23,  63,  51, 30,  15,  67,  20,  28,  37,
    9,   34,  95,  16,  43,  97, 24,  32,  67,  5,  4,   60,  64,  80,  96,  53,
    36,  78,  23,  18,  82,  66, 2,   4,   19,  68, 58,  24,  90,  45,  89,  48,
    11,  32,  13,  8,   40,  86, 39,  94,  41,  2,  30,  45,  85,  28,  76,  62,
    91,  93,  82,  13,  9,   57, 28,  85,  91,  93, 24,  57,  7,   46,  59,  22,
    17,  49,  59,  9,   56,  7,  17,  74,  45,  53, 15,  92,  7,   25,  27,  12,
    100, 97,  35,  78,  96,  3,  13,  25,  19,  99, 7,   83,  36,  40,  45,  8,
    72,  96,  69,  29,  87,  83, 83,  66,  36,  78, 76,  47,  65,  76,  99,  10,
    46,  92,  20,  14,  40,  80, 24,  81,  93,  22, 51,  28,  70,  47,  7,   94,
    82,  6,   77,  7,   75,  52, 10,  62,  80,  29, 96,  52,  8,   71,  41,  68,
    73,  1,   51,  22,  73,  52, 37,  39,  10,  17, 55,  12,  83,  75,  13,  7,
    14,  99,  86,  73,  52,  83, 32,  90,  63,  92, 41,  38,  12,  67,  83,  9,
    5,   74,  47,  81,  20,  42, 94,  82,  63,  69, 71,  77,  77,  37,  38,  70,
    16,  60,  88,  92,  98,  39, 23,  39,  73,  46, 58,  35,  40,  62,  100, 32,
    79,  93,  40,  23,  60,  69, 35,  26,  48,  84, 75,  48,  78,  76,  74,  14,
    30,  55,  1,   86,  42,  25, 8,   39,  95,  22, 69,  3,   100, 55,  61,  15,
    89,  38,  20,  80,  20,  27, 24,  89,  69,  63, 74,  39,  88,  10,  19,  73,
    76,  88,  85,  97,  70,  96, 90,  58,  29,  95, 54,  18,  84,  32,  63,  57,
    97,  47,  57,  89,  40,  76, 47,  68,  65,  46, 100, 32,  76,  58,  7,   79,
    88,  52,  4,   80,  62,  93, 86,  96,  50,  67, 10,  10,  69,  71,  60,  59,
    90,  91,  80,  33,  12,  64, 41,  93,  80,  64, 3,   6,   41,  68,  26,  23,
    5,   80,  36,  72,  19,  37, 62,  41,  71,  8,  68,  40,  53,  1,   57,  86,
    26,  99,  38,  50,  16,  86, 38,  89,  51,  41, 24,  61,  73,  69,  5,   45,
    91,  10,  55,  35,  100, 93, 52,  71,  51,  4,  32,  12,  8,   70,  36,  18,
    5,   75,  62,  19,  11,  10, 89,  69,  94,  33, 59,  39,  66,  38,  77,  16,
    2,   70,  27,  87,  40,  63, 18,  38,  55,  81, 84,  43,  69,  99,  18,  88,
    53,  65,  2,   97,  40,  56, 82,  99,  21,  5,  10,  66,  33,  27,  17,  48,
    3,   71,  53,  71,  55,  42, 1,   63,  17,  28, 44,  79,  70,  56,  43,  6,
    11,  97,  6,   10,  60,  84, 27,  93,  61,  65, 32,  15,  38,  84,  32,  2,
    38,  63,  72,  23,  17,  74, 11,  97,  19,  80, 84,  77,  23,  51,  1,   76,
    88,  72,  86,  9,   50,  81, 80,  70,  5,   73, 64,  36,  84,  41,  67,  73,
    81,  99,  12,  31,  54,  78, 11,  66,  98,  49, 45,  13,  45,  72,  59,  71,
    91,  76,  92,  19,  56,  13, 61,  36,  48,  6,  28,  21,  61,  10,  24,  30,
    17,  35,  75,  58,  57,  72, 80,  64,  51,  83, 28,  4,   62,  69,  68,  26,
    13,  50,  97,  24,  17,  39, 14,  4,   42,  41, 51,  52,  90,  91,  43,  94,
    22,  10,  25,  10,  31,  55, 4,   13,  90,  35, 26,  28,  90,  76,  27,  39,
    40,  6,   47,  27,  75,  38, 38,  32,  76,  56, 58,  21,  35,  21,  53,  59,
    96,  93,  86,  100, 60,  59, 98,  49,  23,  95, 18,  18,  74,  35,  14,  12,
    77,  26,  86,  60,  60,  35, 61,  53,  83,  64, 84,  78,  27,  100, 96,  89,
    28,  72,  26,  79,  12,  36, 72,  86,  14,  65, 42,  56,  70,  73,  72,  82,
    40,  60,  84,  91,  76,  27, 53,  55,  99,  92, 76,  97,  39,  9,   91,  17,
    51,  94,  51,  37,  22,  92, 97,  4,   52,  44, 84,  51,  76,  28,  62,  24,
    44,  91,  60,  37,  7,   95, 7,   82,  77,  44, 30,  95,  87,  19,  37,  25,
    34,  71,  86,  13,  2,   5,  68,  100, 11,  39, 50,  51,  17,  80,  19,  52,
    32,  34,  58,  37,  17,  73, 16,  40,  3,   60, 84,  82,  80,  46,  64,  19,
    7,   20,  62,  68,  2,   80, 69,  62,  45,  18, 69,  47,  38,  16,  87,  92,
    68,  27,  53,  52,  85,  69, 75,  46,  62,  57, 69,  84,  67,  34,  91,  14,
    66,  4,   31,  87,  25,  3,  58,  96,  44,  62, 82,  24,  63,  42,  78,  12,
    87,  96,  18,  56,  44,  49, 44,  93,  78,  66, 54,  71,  32,  18,  69,  28,
    63,  29,  94,  21,  26,  89, 42,  48,  83,  75, 29,  95,  44,  61,  19,  58,
    8,   64,  11,  7,   12,  67, 39,  14,  44,  91, 59,  6,   100, 23,  59,  17,
    62,  85,  8,   59,  57,  73, 91,  40,  37,  58, 25,  44,  24,  7,   90,  87,
    56,  2,   4,   53,  54,  76, 38,  84,  72,  86, 64,  29,  4,   69,  86,  69,
    59,  34,  68,  47,  38,  83, 22,  43,  40,  87, 27,  75,  78,  74,  93,  80,
    92,  77,  1,   20,  9,   82, 49,  31,  26,  40, 30,  54,  55,  63,  87,  78,
    57,  93,  5,   81,  7,   81, 98,  54,  45,  32, 67,  70,  6,   91,  94,  76,
    36,  79,  14,  81,  91,  58, 21,  44,  37,  19, 61,  15,  73,  58,  88,  56,
    85,  52,  96,  100, 86,  81, 83,  72,  85,  15, 51,  96,  70,  59,  84,  88,
    72,  50,  57,  36,  37,  88, 24,  57,  46,  99, 72,  47,  64,  94,  84,  66,
    42,  2,   91,  90,  96,  99, 61,  51,  76,  80, 89,  48,  73,  24,  90,  61,
    21,  64,  14,  54,  66,  28, 39,  27,  29,  5,  77,  34,  31,  10,  59,  74,
    23,  22,  79,  67,  95,  33, 62,  61,  91,  89, 92,  7,   70,  75,  80,  83,
    50,  87,  36,  47,  91,  85, 100, 21,  74,  38, 65,  1,   59,  90,  84,  1,
    76,  44,  96,  65,  79,  65, 67,  20,  33,  27, 13,  82,  88,  21,  75,  81,
    70,  51,  22,  36,  37,  34, 92,  14,  83,  17, 26,  82,  81,  71,  56,  3,
    97,  53,  2,   63,  53,  67, 31,  5,   89,  87, 56,  75,  73,  82,  95,  18,
    65,  20,  89,  8,   17,  72, 19,  46,  22,  87, 9,   21,  62,  20,  31,  72,
    47,  10,  28,  57,  43,  94, 97,  98,  3,   56, 39,  42,  24,  5,   18,  77,
    20,  81,  52,  24,  22,  90, 14,  41,  67,  85, 12,  26,  48,  41,  52,  56,
    54,  10,  9,   75,  28,  82, 79,  46,  94,  20, 72,  30,  52,  98,  89,  24,
    59,  43,  58,  100, 16,  5,  90,  23,  99,  91, 64,  100, 72,  7,   1,   23,
    50,  8,   72,  14,  89,  32, 48,  38,  98,  82, 45,  80,  29,  31,  15,  58,
    11,  65,  21,  88,  72,  63, 30,  62,  61,  65, 37,  73,  43,  61,  60,  19,
    71,  38,  2,   100, 6,   4,  19,  45,  77,  29, 15,  51,  76,  97,  22,  58,
    31,  34,  53,  47,  48,  25, 6,   25,  86,  35, 21,  37,  93,  87,  56,  70,
    39,  36,  94,  46,  97,  87, 5,   3,   3,   82, 74,  93,  65,  25,  47,  40,
    84,  81,  23,  8,   74,  96, 72,  47,  33,  81, 36,  57,  58,  7,   41,  86,
    97,  92,  66,  89,  53,  35, 16,  60,  30,  82, 48,  16,  20,  31,  7,   52,
    53,  38,  19,  14,  60,  86, 82,  51,  29,  9,  48,  37,  29,  4,   27,  3,
    27,  12,  35,  60,  53,  62, 29,  33,  79,  88, 81,  17,  97,  31,  73,  3,
    30,  47,  56,  72,  91,  31, 29,  59,  93,  47, 86,  64,  98,  61,  79,  4,
    7,   24,  80,  70,  100, 39, 77,  87,  44,  46, 20,  57,  40,  63,  98,  41,
    5,   2,   76,  6,   4,   37, 89,  100, 18,  12, 82,  100, 92,  75,  97,  76,
    10,  17,  95,  97,  33,  78, 43,  30,  13,  17, 50,  88,  44,  53,  47,  48,
    68,  83,  20,  11,  28,  79, 90,  6,   76,  76, 35,  43,  20,  48,  60,  41,
    9,   5,   93,  19,  79,  72, 52,  58,  72,  2,  97,  17,  57,  99,  1,   55,
    32,  15,  98,  58,  61,  18, 47,  61,  100, 55, 19,  32,  31,  100, 1,   98,
    72,  18,  12,  25,  99,  78, 25,  33,  26,  70, 99,  51,  86,  4,   75,  69,
    69,  40,  79,  89,  15,  9,  94,  4,   19,  16, 23,  30,  81,  54,  78,  62,
    47,  10,  69,  39,  69,  85, 93,  67,  85,  20, 2,   38,  92,  38,  39,  23,
    87,  1,   46,  93,  12,  97, 6,   11,  35,  77, 87,  97,  16,  75,  52,  35,
    53,  77,  5,   87,  1,   92, 47,  69,  28,  14, 36,  3,   3,   39,  14,  38,
    13,  23,  93,  22,  30,  38, 23,  22,  79,  28, 76,  31,  48,  73,  18,  30,
    60,  2,   6,   62,  89,  45, 66,  95,  59,  57, 66,  57,  86,  65,  74,  60,
    54,  3,   36,  42,  12,  91, 58,  61,  47,  56, 28,  90,  33,  40,  37,  25,
    60,  53,  46,  75,  67,  99, 39,  18,  65,  65, 53,  87,  14,  89,  92,  91,
    94,  5,   12,  1,   48,  81, 24,  86,  71,  41, 96,  47,  73,  49,  47,  94,
    18,  77,  42,  94,  15,  46, 33,  52,  15,  36, 13,  18,  29,  15,  95,  18,
    34,  75,  60,  69,  63,  98, 82,  13,  61,  53, 49,  5,   29,  47,  84,  19,
    21,  97,  60,  39,  66,  49, 37,  94,  64,  37, 46,  76,  29,  5,   25,  53,
    81,  47,  62,  65,  23,  97, 33,  85,  32,  99, 74,  35,  14,  10,  40,  54,
    2,   67,  4,   54,  22,  6,  15,  93,  26,  32, 25,  93,  41,  72,  6,   47,
    48,  67,  75,  15,  53,  88, 49,  37,  67,  16, 82,  96,  14,  52,  37,  40,
    89,  75,  35,  100, 98,  33, 91,  22,  77,  45, 24,  72,  42,  13,  39,  40,
    23,  34,  69,  84,  18,  17, 13,  74,  49,  1,  85,  97,  19,  19,  17,  60,
    60,  65,  27,  77,  5,   19, 47,  9,   18,  42, 7,   25,  95,  29,  6,   47,
    94,  35,  58,  31,  53,  16, 27,  38,  85,  69, 72,  36,  5,   30,  5,   49,
    60,  32,  91,  26,  96,  25, 23,  41,  68,  82, 13,  75,  33,  3,   69,  22,
    23,  61,  65,  70,  46,  35, 31,  56,  38,  32, 39,  83,  55,  17,  2,   29,
    83,  62,  33,  29,  35,  38, 95,  62,  72,  19, 6,   19,  13,  45,  82,  17,
    71,  2,   78,  93,  8,   9,  85,  93,  26,  87, 69,  34,  89,  59,  38,  8,
    31,  70,  66,  90,  46,  91, 47,  80,  12,  92, 61,  15,  25,  100, 67,  74,
    84,  36,  99,  91,  17,  4,  45,  58,  89,  3,  81,  61,  61,  11,  85,  36,
    33,  85,  43,  23,  27,  5,  21,  57,  9,   97, 9,   58,  52,  51,  41,  36,
    15,  75,  89,  71,  35,  47, 68,  73,  53,  33, 38,  6,   100, 23,  69,  23,
    46,  72,  7,   45,  92,  75, 84,  88,  18,  65, 14,  33,  16,  47,  41,  78,
    71,  32,  62,  28,  75,  25, 17,  43,  94,  97, 29,  72,  12,  22,  81,  65,
    96,  72,  67,  96,  4,   54, 86,  84,  21,  72, 55,  73,  33,  44,  34,  14,
    76,  58,  17,  97,  49,  92, 34,  19,  27,  65, 65,  39,  19,  43,  31,  86,
    67,  67,  41,  100, 51,  84, 30,  62,  37,  73, 43,  82,  89,  67,  19,  60,
    30,  55,  13,  47,  62,  51, 32,  51,  98,  34, 46,  20,  18,  59,  82,  78,
    79,  32,  1,   67,  94,  68, 47,  96,  69,  24, 100, 22,  79,  68,  27,  29,
    42,  9,   50,  56,  2,   91, 40,  26,  25,  24, 77,  17,  40,  93,  68,  59,
    28,  61,  48,  60,  1,   54, 56,  4,   33,  99, 29,  45,  60,  62,  49,  91,
    26,  8,   20,  60,  95,  73, 63,  97,  95,  96, 79,  31,  28,  33,  55,  3,
    81,  70,  28,  95,  28,  88, 9,   6,   43,  66, 12,  79,  51,  80,  86,  99,
    51,  10,  58,  57,  51,  96, 39,  18,  52,  62, 76,  22,  84,  77,  26,  55,
    34,  14,  28,  45,  57,  40, 62,  5,   12,  91, 93,  32,  54,  87,  12,  26,
    49,  17,  75,  77,  32,  73, 23,  28,  97,  52, 70,  46,  29,  62,  56,  31,
    14,  99,  9,   41,  65,  54, 64,  15,  55,  64, 62,  53,  55,  10,  100, 44,
    22,  9,   27,  49,  23,  63, 66,  90,  15,  22, 82,  59,  5,   52,  75,  51,
    48,  100, 7,   53,  92,  27, 40,  73,  58,  58, 50,  35,  14,  55,  66,  46,
    23,  55,  16,  7,   32,  46, 49,  59,  68,  6,  4,   78,  76,  92,  37,  21,
    87,  91,  76,  85,  30,  70, 76,  58,  10,  14, 31,  15,  71,  62,  35,  62,
    30,  46,  50,  36,  52,  91, 86,  55,  40,  66, 29,  86,  12,  79,  8,   93,
    39,  60,  65,  60,  52,  45, 53,  84,  82,  90, 57,  18,  10,  36,  100, 58,
    4,   67,  59,  75,  16,  51, 21,  94,  12,  34, 21,  68,  20,  64,  10,  68,
    12,  15,  69,  26,  35,  7,  41,  99,  75,  45, 99,  40,  45,  59,  59,  31,
    17,  15,  46,  27,  28,  88, 53,  66,  50,  98, 55,  34,  94,  99,  87,  19,
    35,  58,  62,  63,  77,  39, 77,  82,  46,  99, 64,  3,   73,  58,  21,  5,
    27,  68,  4,   73,  83,  44, 10,  93,  3,   87, 93,  32,  85,  37,  87,  99,
    5,   17,  46,  73,  78,  23, 74,  3,   96,  66, 66,  59,  41,  69,  9,   91,
    46,  55,  100, 81,  53,  58, 54,  89,  72,  76, 100, 50,  40,  9,   58,  33,
    9,   38,  7,   57,  69,  68, 57,  2,   86,  32, 12,  32,  16,  50,  29,  61,
    53,  82,  54,  80,  99,  99, 100, 67,  33,  14, 74,  78,  80,  12,  10,  49,
    87,  28,  85,  13,  18,  65, 29,  26,  64,  85, 45,  74,  39,  56,  20,  48,
    32,  76,  16,  49,  71,  79, 7,   98,  89,  97, 30,  25,  21,  3,   77,  23,
    64,  51,  41,  54,  80,  29, 32,  1,   45,  18, 1,   85,  54,  94,  9,   53,
    3,   13,  27,  90,  62,  55, 66,  37,  21,  2,  67,  88,  77,  93,  54,  95,
    44,  74,  27,  53,  38,  20, 1,   98,  79,  53, 16,  60,  79,  79,  48,  24,
    42,  9,   47,  81,  4,   90, 78,  57,  96,  20, 12,  99,  28,  78,  78,  11,
    23,  82,  19,  3,   57,  3,  3,   31,  48,  4,  58,  86,  58,  18,  88,  28,
    23,  72,  32,  15,  70,  1,  52,  79,  97,  30, 99,  19,  38,  64,  38,  61,
    24,  65,  60,  70,  13,  87, 40,  70,  47,  69, 68,  69,  28,  28,  87,  59,
    36,  42,  60,  60,  74,  1,  56,  61,  50,  19, 23,  62,  36,  39,  75,  75,
    94,  78,  3,   28,  26,  67, 16,  60,  71,  24, 96,  64,  6,   36,  91,  13,
    94,  50,  29,  35,  43,  45, 84,  81,  40,  4,  2,   5,   92,  100, 63,  5,
    92,  95,  22,  68,  46,  23, 89,  20,  35,  79, 39,  38,  57,  31,  40,  23,
    49,  94,  51,  90,  90,  41, 56,  30,  46,  60, 24,  17,  73,  97,  60,  22,
    37,  93,  92,  6,   49,  51, 20,  23,  35,  31, 2,   39,  11,  19,  36,  28,
    78,  84,  58,  39,  10,  93, 29,  33,  30,  10, 40,  42,  32,  23,  59,  90,
    59,  3,   48,  15,  7,   58, 97,  57,  61,  86, 80,  75,  11,  6,   41,  78,
    95,  47,  39,  49,  96,  35, 66,  43,  44,  7,  97,  98,  8,   68,  90,  33,
    95,  47,  49,  29,  30,  39, 59,  6,   80,  77, 81,  72,  37,  60,  78,  84,
    84,  100, 4,   63,  40,  68, 82,  7,   6,   91, 3,   61,  43,  47,  100, 58,
    45,  93,  77,  70,  67,  68, 96,  10,  91,  35, 73,  55,  28,  71,  12,  56,
    75,  93,  33,  7,   72,  37, 18,  98,  48,  11, 65,  63,  89,  7,   16,  41,
    46,  84,  4,   82,  29,  30, 23,  94,  71,  30, 51,  91,  23,  5,   40,  79,
    7,   75,  47,  51,  7,   75, 34,  28,  27,  19, 16,  62,  56,  60,  11,  15,
    37,  5,   13,  68,  34,  29, 56,  31,  97,  22, 38,  3,   48,  60,  73,  30,
    87,  19,  8,   70,  45,  65, 19,  19,  79,  55, 91,  22,  66,  78,  75,  77,
    86,  95,  31,  95,  23,  78, 88,  16,  13,  24, 87,  71,  59,  28,  65,  79,
    23,  40,  90,  82,  64,  93, 49,  31,  60,  12, 90,  22,  74,  84,  81,  85,
    10,  81,  36,  77,  94,  67, 93,  8,   63,  8,  47,  38,  38,  14,  78,  83,
    28,  42,  84,  18,  67,  84, 69,  84,  66,  99, 65,  48,  33,  5,   24,  85,
    84,  83,  29,  13,  23,  64, 31,  9,   69,  56, 38,  3,   30,  61,  55,  89,
    72,  13,  59,  72,  72,  47, 24,  27,  39,  86, 8,   46,  66,  90,  46,  46,
    60,  13,  74,  53,  15,  44, 38,  33,  91,  10, 67,  98,  72,  65,  42,  23,
    67,  52,  29,  6,   6,   73, 24,  48,  13,  82, 45,  42,  47,  51,  24,  98,
    6,   82,  12,  65,  51,  32, 9,   6,   46,  68, 33,  76,  1,   85,  80,  84,
    22,  39,  15,  22,  91,  2,  83,  71,  85,  68, 52,  74,  67,  98,  70,  64,
    14,  34,  79,  68,  89,  60, 6,   72,  50,  49, 71,  87,  92,  89,  11,  26,
    60,  64,  92,  82,  17,  35, 78,  25,  67,  74, 92,  40,  23,  16,  30,  43,
    73,  75,  59,  6,   61,  43, 46,  84,  94,  76, 27,  82,  97,  35,  60,  21,
    8,   23,  23,  40,  3,   78, 52,  36,  61,  39, 13,  28,  66,  36,  9,   32,
    78,  81,  2,   45,  42,  4,  96,  24,  35,  23, 33,  89,  70,  33,  90,  94,
    93,  85,  4,   82,  19,  90, 45,  49,  18,  88, 88,  27,  48,  41,  41,  31,
    87,  50,  18,  50,  31,  41, 84,  30,  98,  55, 72,  83,  97,  21,  34,  99,
    83,  97,  92,  13,  52,  36, 77,  24,  97,  26, 82,  1,   33,  15,  74,  96,
    8,   71,  28,  86,  62,  19, 91,  86,  32,  38, 48,  37,  83,  91,  54,  92,
    52,  91,  24,  52,  14,  53, 18,  10,  54,  84, 48,  79,  35,  16,  89,  38,
    7,   35,  88,  91,  72,  93, 13,  74,  42,  64, 81,  71,  87,  71,  85,  99,
    100, 61,  84,  3,   88,  23, 39,  15,  5,   64, 76,  52,  7,   96,  62,  64,
    99,  86,  79,  59,  10,  65, 62,  94,  89,  27, 51,  22,  56,  95,  16,  8,
    71,  70,  12,  16,  33,  59, 13,  93,  80,  29, 17,  51,  62,  38,  41,  26,
    48,  19,  37,  5,   58,  80, 45,  64,  44,  97, 18,  13,  49,  74,  8,   4,
    89,  5,   47,  79,  67,  8,  77,  11,  54,  9,  87,  71,  77,  38,  8,   47,
    31,  69,  27,  80,  91,  53, 7,   56,  32,  31, 11,  61,  61,  18,  26,  50,
    76,  62,  88,  97,  19,  40, 97,  51,  83,  85, 7,   96,  26,  11,  65,  35,
    67,  98,  18,  26,  95,  42, 25,  23,  69,  51, 73,  26,  86,  27,  16,  53,
    20,  73,  54,  93,  70,  8,  19,  33,  74,  1,  75,  60,  43,  88,  26,  93,
    67,  60,  62,  44,  79,  85, 82,  64,  22,  42, 18,  100, 88,  25,  68,  17,
    77,  56,  97,  23,  66,  9,  89,  81,  67,  75, 72,  1,   96,  53,  50,  89,
    55,  1,   37,  42,  58,  47, 66,  30,  45,  77, 55,  73,  25,  75,  3,   12,
    76,  66,  62,  89,  24,  32, 60,  12,  76,  2,  65,  5,   65,  23,  44,  62,
    24,  1,   6,   40,  69,  35, 46,  26,  93,  50, 75,  69,  3,   75,  6,   82,
    60,  90,  73,  21,  98,  70, 76,  18,  39,  59, 100, 44,  66,  4,   93,  25,
    65,  83,  19,  99,  82,  74, 93,  4,   73,  22, 66,  42,  74,  63,  59,  39,
    59,  99,  19,  23,  77,  28, 90,  73,  23,  21, 88,  24,  4,   76,  58,  51,
    15,  30,  65,  4,   37,  82, 6,   60,  98,  30, 80,  95,  78,  71,  12,  68,
    19,  34,  69,  61,  72,  20, 37,  50,  80,  23, 60,  10,  9,   42,  8,   1,
    21,  31,  69,  4,   70,  49, 9,   53,  84,  33, 36,  11,  40,  25,  65,  31,
    99,  32,  39,  58,  57,  1,  98,  57,  45,  81, 32,  95,  19,  78,  55,  18,
    50,  53,  10,  93,  87,  34, 50,  60,  85,  68, 39,  97,  32,  16,  100, 93,
    48,  33,  50,  58,  99,  82, 77,  53,  77,  86, 49,  88,  86,  42,  45,  34,
    90,  69,  12,  34,  98,  16, 55,  40,  92,  6,  69,  37,  40,  46,  40,  54,
    90,  54,  99,  97,  24,  47, 73,  34,  48,  7,  94,  51,  68,  22,  69,  93,
    5,   25,  84,  30,  3,   54, 72,  54,  33,  65, 10,  79,  48,  9,   6,   46,
    62,  21,  7,   62,  55,  76, 56,  33,  97,  18, 16,  77,  66,  51,  63,  56,
    42,  82,  98,  58,  19,  65, 40,  93,  83,  9,  93,  29,  16,  71,  4,   92,
    30,  50,  17,  3,   58,  12, 49,  70,  71,  91, 68,  87,  43,  8,   83,  38,
    92,  53,  42,  8,   69,  47, 82,  11,  57,  83, 67,  82,  32,  30,  29,  55,
    18,  20,  40,  38,  21,  41, 70,  91,  93,  29, 33,  33,  37,  90,  57,  56,
    65,  38,  71,  100, 94,  83, 55,  49,  63,  99, 86,  83,  23,  94,  24,  75,
    30,  90,  86,  96,  23,  69, 18,  60,  26,  85, 70,  11,  38,  34,  57,  53,
    52,  63,  92,  21,  26,  3,  26,  82,  96,  9,  72,  83,  51,  80,  91,  57,
    88,  62,  92,  12,  19,  47, 95,  98,  46,  85, 63,  96,  7,   85,  65,  18,
    30,  33,  78,  27,  29,  27, 37,  94,  56,  70, 14,  12,  55,  16,  75,  59,
    71,  74,  40,  66,  5,   51, 67,  37,  50,  42, 43,  10,  20,  99,  93,  22,
    43,  66,  80,  7,   55,  87, 96,  55,  22,  22, 19,  40,  84,  54,  26,  75,
    67,  46,  95,  33,  18,  90, 2,   3,   14,  17, 78,  97,  81,  73,  98,  70,
    100, 15,  52,  93,  92,  58, 89,  17,  60,  60, 46,  62,  28,  17,  99,  44,
    20,  74,  89,  85,  87,  69, 48,  62,  97,  71, 55,  1,   99,  67,  49,  66,
    29,  53,  36,  23,  6,   27, 13,  45,  93,  37, 100, 23,  59,  46,  99,  75,
    79,  29,  60,  78,  9,   56, 6,   49,  15,  62, 84,  96,  43,  24,  9,   43,
    66,  18,  4,   46,  87,  63, 31,  15,  50,  44, 48,  95,  25,  32,  57,  40,
    36,  37,  96,  12,  19,  35, 59,  79,  19,  8,  34,  80,  13,  21,  70,  83,
    33,  75,  82,  83,  97,  76, 78,  82,  28,  28, 76,  64,  29,  35,  70,  24,
};