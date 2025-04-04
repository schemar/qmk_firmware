/* Copyright 2024 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "quantum.h"

// clang-format off
#ifdef RGB_MATRIX_ENABLE
const snled27351_led_t g_snled27351_leds[RGB_MATRIX_LED_COUNT] = {
/* Refer to SNLED27351 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
    {0, G_1,    I_1,    H_1},
    {0, G_2,    I_2,    H_2},
    {0, G_3,    I_3,    H_3},
    {0, G_4,    I_4,    H_4},
    {0, G_5,    I_5,    H_5},
    {0, G_6,    I_6,    H_6},
    {0, G_7,    I_7,    H_7},
    {0, G_8,    I_8,    H_8},
    {0, G_9,    I_9,    H_9},
    {0, G_10,   I_10,   H_10},
    {0, G_11,   I_11,   H_11},
    {0, G_12,   I_12,   H_12},
    {0, G_13,   I_13,   H_13},
    {0, G_14,   I_14,   H_14},
    {0, G_15,   I_15,   H_15},
    {0, G_16,   I_16,   H_16},
    {1, D_8,    F_8,    E_8},
    {1, D_9,    F_9,    E_9},
    {1, D_10,   F_10,   E_10},

    {0, D_1,    F_1,    E_1},
    {0, D_2,    F_2,    E_2},
    {0, D_3,    F_3,    E_3},
    {0, D_4,    F_4,    E_4},
    {0, D_5,    F_5,    E_5},
    {0, D_6,    F_6,    E_6},
    {0, D_7,    F_7,    E_7},
    {0, D_8,    F_8,    E_8},
    {0, D_9,    F_9,    E_9},
    {0, D_10,   F_10,   E_10},
    {0, D_11,   F_11,   E_11},
    {0, D_12,   F_12,   E_12},
    {0, D_13,   F_13,   E_13},
    {0, D_15,   F_15,   E_15},
    {0, D_16,   F_16,   E_16},
    {0, J_7,    L_7,    K_7},
    {0, J_8,    L_8,    K_8},
    {0, J_9,    L_9,    K_9},
    {0, J_10,   L_10,   K_10},

    {0, C_1,    A_1,    B_1},
    {0, C_2,    A_2,    B_2},
    {0, C_3,    A_3,    B_3},
    {0, C_4,    A_4,    B_4},
    {0, C_5,    A_5,    B_5},
    {0, C_6,    A_6,    B_6},
    {0, C_7,    A_7,    B_7},
    {0, C_8,    A_8,    B_8},
    {0, C_9,    A_9,    B_9},
    {0, C_10,   A_10,   B_10},
    {0, C_11,   A_11,   B_11},
    {0, C_12,   A_12,   B_12},
    {0, C_13,   A_13,   B_13},
    {0, C_15,   A_15,   B_15},
    {0, C_16,   A_16,   B_16},
    {0, J_12,   L_12,   K_12},
    {0, J_13,   L_13,   K_13},
    {0, J_14,   L_14,   K_14},
    {0, J_15,   L_15,   K_15},

    {1, G_1,    I_1,    H_1},
    {1, G_2,    I_2,    H_2},
    {1, G_3,    I_3,    H_3},
    {1, G_4,    I_4,    H_4},
    {1, G_5,    I_5,    H_5},
    {1, G_6,    I_6,    H_6},
    {1, G_7,    I_7,    H_7},
    {1, G_8,    I_8,    H_8},
    {1, G_9,    I_9,    H_9},
    {1, G_10,   I_10,   H_10},
    {1, G_11,   I_11,   H_11},
    {1, G_12,   I_12,   H_12},
    {1, G_14,   I_14,   H_14},
    {1, G_16,   I_16,   H_16},
    {1, J_7,    L_7,    K_7},
    {1, J_8,    L_8,    K_8},
    {1, J_9,    L_9,    K_9},

    {1, A_1,    C_1,    B_1},
    {1, A_2,    C_2,    B_2},
    {1, A_3,    C_3,    B_3},
    {1, A_4,    C_4,    B_4},
    {1, A_5,    C_5,    B_5},
    {1, A_6,    C_6,    B_6},
    {1, A_7,    C_7,    B_7},
    {1, A_8,    C_8,    B_8},
    {1, A_9,    C_9,    B_9},
    {1, A_10,   C_10,   B_10},
    {1, A_11,   C_11,   B_11},
    {1, A_12,   C_12,   B_12},
    {1, A_13,   C_13,   B_13},
    {1, A_15,   C_15,   B_15},
    {1, J_10,   L_10,   K_10},
    {1, J_11,   L_11,   K_11},
    {1, J_12,   L_12,   K_12},
    {1, J_13,   L_13,   K_13},

    {1, D_1,    F_1,    E_1},
    {1, D_2,    F_2,    E_2},
    {1, D_3,    F_3,    E_3},
    {1, D_7,    F_7,    E_7},
    {1, D_11,   F_11,   E_11},
    {1, D_12,   F_12,   E_12},
    {1, D_13,   F_13,   E_13},
    {1, D_14,   F_14,   E_14},
    {1, D_15,   F_15,   E_15},
    {1, D_16,   F_16,   E_16},
    {1, J_14,   L_14,   K_14},
    {1, J_16,   L_16,   K_16}
};

#define __ NO_LED

led_config_t g_led_config = {
    {
        // Key Matrix to RGB Index
        {  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, __ },
        { 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, __, 32, 33, 34, 35, 36, 37 },
        { 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, __, 51, 52, 53, 54, 55, 56 },
        { 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, __, 69, __, 70, 71, 72, 73, __ },
        { 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, __, 87, __, 88, 89, 90, 91 },
        { 92, 93, 94, __, __, __, 95, __, __, __, 96, 97, 98, 99,100,101,102, __,103, __ },
    },
    {
        // RGB Index to Physical Position
        {0, 0}, {12, 0}, {24, 0}, {36, 0}, {48, 0}, {60, 0}, {72, 0}, {84, 0}, {96, 0}, {108, 0}, {120, 0}, {132, 0}, {144, 0}, {156, 0}, {168, 0}, {180, 0},{192, 0},{203, 0},{213, 0},
        {0,13}, {12,13}, {24,13}, {36,13}, {48,13}, {60,13}, {72,13}, {84,13}, {96,13}, {108,13}, {120,13}, {132,13}, {144,13},           {162,13}, {180,13},{192,13},{203,13},{213,13},{224,13},
        {2,26}, {18,26}, {30,26}, {42,26}, {54,26}, {66,26}, {78,26}, {90,26}, {102,26},{114,26}, {126,26}, {138,26}, {150,26},           {164,32}, {180,26},{192,26},{203,26},{213,26},{224,32},
        {4,39}, {22,39}, {34,39}, {46,39}, {58,39}, {70,39}, {82,39}, {94,39}, {106,39},{118,39}, {130,39}, {142,39},           {154,39},           {180,39},{192,39},{203,39},{213,39},
        {1,51}, {14,51}, {28,51}, {40,51}, {52,51}, {64,51}, {76,51}, {88,51}, {100,51},{112,51}, {124,51}, {136,51}, {148,51},           {168,51},          {192,51},{203,51},{213,51},{224,57},
        {1,64}, {16,64}, {30,64},                            {78,64},                             {120,64}, {132,64}, {144,64}, {156,64}, {168,64}, {180,64},{197,64},         {213,64},
    },
    {
        // RGB Index to Flag
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,    1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,    1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,    1,    1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,    1,    1, 1, 1, 1,
        1, 1, 1,          1,          1, 1, 1, 1, 1, 1, 1,    1,
    }
};
#endif
