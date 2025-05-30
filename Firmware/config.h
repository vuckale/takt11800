/*
Copyright 2024 BFB Workshop

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define DEBOUNCE 5

#define MATRIX_ROWS 14
#define MATRIX_COLS 9

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#define DIODE_DIRECTION COL2ROW
#define ROW_PINS { A5, A2, A4, A3, B12, B13, B14, B15, A8, B1, B0, B9, A7, A6 }
#define COL_PINS { NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN }

/*############## PS2 Mouse ##################*/

# define PS2_CLOCK_PIN   A0
# define PS2_DATA_PIN    A1

/*###########################################*/

/*############## LEDs ##################*/

#define LED_NUM_LOCK_PIN  B11
#define LED_CAPS_LOCK_PIN B10
#define LAYER_LED         C13 // #define LED_SCROLL_LOCK_PIN B3

/*######################################*/
