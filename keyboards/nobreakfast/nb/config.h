/*
Copyright 2018 Alex Peters

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

#include "config_common.h"

/* Key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* Keyboard Matrix Assignments */
//#define MATRIX_ROW_PINS { F7, F6, F5, F4, F1 }
//#define MATRIX_COL_PINS { F0, B3, B2, B1, B0, B7, D0, D1, D2, D3, D5, D6, D7, B4, B5, B6 }
#define MATRIX_ROW_PINS { F6, F5, F4, F1, F0 }
#define MATRIX_COL_PINS { D0, D1, D2, D3, D5, D4, D6, D7, B4, B5, B6, C6, F7, C7 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 10
#endif
#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 6

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
