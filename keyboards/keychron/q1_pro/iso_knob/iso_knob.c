/* Copyright 2023 @ Keychron (https://www.keychron.com)
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
const ckled2001_led g_ckled2001_leds[RGB_MATRIX_LED_COUNT] = {
/* Refer to CKLED manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
   {0, I_1,    G_1,     H_1},
   {0, I_2,    G_2,     H_2},
   {0, I_3,    G_3,     H_3},
   {0, I_4,    G_4,     H_4},
   {0, I_5,    G_5,     H_5},
   {0, I_6,    G_6,     H_6},
   {0, I_7,    G_7,     H_7},
   {0, I_8,    G_8,     H_8},
   {0, I_9,    G_9,     H_9},
   {0, I_10,   G_10,    H_10},
   {0, I_11,   G_11,    H_11},
   {0, I_12,   G_12,    H_12},
   {0, I_13,   G_13,    H_13},
   {0, I_14,   G_14,    H_14},
   {0, I_16,   G_16,    H_16},

   {0, C_1,    A_1,     B_1},
   {0, C_2,    A_2,     B_2},
   {0, C_3,    A_3,     B_3},
   {0, C_4,    A_4,     B_4},
   {0, C_5,    A_5,     B_5},
   {0, C_6,    A_6,     B_6},
   {0, C_7,    A_7,     B_7},
   {0, C_8,    A_8,     B_8},
   {0, C_9,    A_9,     B_9},
   {0, C_10,   A_10,    B_10},
   {0, C_11,   A_11,    B_11},
   {0, C_12,   A_12,    B_12},
   {0, C_13,   A_13,    B_13},
   {0, C_14,   A_14,    B_14},
   {0, C_16,   A_16,    B_16},

   {0, F_1,    D_1,     E_1},
   {0, F_2,    D_2,     E_2},
   {0, F_3,    D_3,     E_3},
   {0, F_4,    D_4,     E_4},
   {0, F_5,    D_5,     E_5},
   {0, F_6,    D_6,     E_6},
   {0, F_7,    D_7,     E_7},
   {0, F_8,    D_8,     E_8},
   {0, F_9,    D_9,     E_9},
   {0, F_10,   D_10,    E_10},
   {0, F_11,   D_11,    E_11},
   {0, F_12,   D_12,    E_12},
   {0, F_13,   D_13,    E_13},
   {0, F_14,   D_14,    E_14},
   {0, F_16,   D_16,    E_16},

   {1, C_16,   A_16,    B_16},
   {1, C_15,   A_15,    B_15},
   {1, C_14,   A_14,    B_14},
   {1, C_13,   A_13,    B_13},
   {1, C_12,   A_12,    B_12},
   {1, C_11,   A_11,    B_11},
   {1, C_10,   A_10,    B_10},
   {1, C_9,    A_9,     B_9},
   {1, C_8,    A_8,     B_8},
   {1, C_7,    A_7,     B_7},
   {1, C_6,    A_6,     B_6},
   {1, C_5,    A_5,     B_5},
   {1, C_3,    A_3,     B_3},
   {1, C_1,    A_1,     B_1},

   {1, I_16,   G_16,    H_16},
   {1, I_15,   G_15,    H_15},
   {1, I_14,   G_14,    H_14},
   {1, I_13,   G_13,    H_13},
   {1, I_12,   G_12,    H_12},
   {1, I_11,   G_11,    H_11},
   {1, I_10,   G_10,    H_10},
   {1, I_9,    G_9,     H_9},
   {1, I_8,    G_8,     H_8},
   {1, I_7,    G_7,     H_7},
   {1, I_6,    G_6,     H_6},
   {1, I_5,    G_5,     H_5},
   {1, I_3,    G_3,     H_3},
   {1, I_2,    G_2,     H_2},

   {1, F_16,   D_16,    E_16},
   {1, F_15,   D_15,    E_15},
   {1, F_14,   D_14,    E_14},
   {1, F_10,   D_10,    E_10},
   {1, F_6,    D_6,     E_6},
   {1, F_5,    D_5,     E_5},
   {1, F_4,    D_4,     E_4},
   {1, F_3,    D_3,     E_3},
   {1, F_2,    D_2,     E_2},
   {1, F_1,    D_1,     E_1}
};


#define __ NO_LED

led_config_t g_led_config = {
    {
        { 0,      1,      2,      3,      4,      5,      6,      7,      8,      9,      10,     11,     12,     13,     __,     14 },
        { 15,     16,     17,     18,     19,     20,     21,     22,     23,     24,     25,     26,     27,     28,     __,     29 },
        { 30,     31,     32,     33,     34,     35,     36,     37,     38,     39,     40,     41,     42,     43,     __,     44 },
        { 45,     46,     47,     48,     49,     50,     51,     52,     53,     54,     55,     56,     __,     57,     __,     58 },
        { 59,     60,     61,     62,     63,     64,     65,     66,     67,     68,     69,     70,     71,     __,     __,     72 },
        { 73,     74,     75,     __,     __,     __,     76,     __,     __,     __,     77,     78,     79,     80,     81,     82 }
    },
    {
        {5, 0}, {14, 0}, {24, 0}, {33, 0}, {43, 0}, {52, 0}, {62, 0}, {71,  0}, {81,  0}, {90,  0}, {100,  0}, {110,  0}, {119,  0}, {129,  0},                       {138, 0},
        {5,9.5}, {14,9.5}, {24,9.5}, {33,9.5}, {43,9.5}, {52,9.5}, {62,9.5}, {71, 9.5}, {81, 9.5}, {90, 9.5}, {100, 9.5}, {110, 9.5}, {119, 9.5}, {133, 9.5},         {148, 9.5},
        {7,19}, {19,19}, {29,19}, {19,19}, {48,19}, {57,19}, {67,19}, {76, 19}, {86, 19}, {95, 19}, {105, 19}, {114, 19}, {124, 19}, {135, 19},                       {145, 19},
        {8,28.5}, {21,28.5}, {31,28.5}, {40,28.5}, {50,28.5}, {60,28.5}, {69,28.5}, {79, 28.5}, {88, 28.5}, {98, 28.5}, {107, 28.5}, {117, 28.5}, {126, 28.5},        {136, 28.5},
        {6,38}, {17,38}, {26,38}, {36,38}, {45,38}, {55,38}, {64,38}, {74, 38}, {83, 38}, {93, 38}, {102, 38}, {112, 38}, {125, 38},                     {138, 38},
        {6,47.5}, {18,47.5}, {30,47.5},                          {65,47.5},                          {100, 47.5}, {110, 47.5}, {119, 47.5}, {129, 47.5}, {138, 47.5}, {148, 47.5}

    },
    {
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,        4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,        4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,        4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,        4,        4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,        4,   4,
        4,   4,   4,                  4,                  4,   4,   4,   4,   4,   4
    }
};
#endif
