/* Copyright 2023 Cipulot
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

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 19

/* Custom matrix pins and port select array */
#define MATRIX_ROW_PINS \
    { A4, A5, A6, A7, B1, B0 }
#define MATRIX_COL_CHANNELS \
    { 2, 1, 0, 3, 5, 7, 6, 4 }
#define MUX_SEL_PINS \
    { B5, B6, B7 }

/* Hardware peripherals pins */
#define APLEX_EN_PIN_0 B14
#define APLEX_EN_PIN_1 A0
#define APLEX_EN_PIN_2 B4
#define DISCHARGE_PIN A3
#define ANALOG_PORT A2

/* LED Pins*/
#define LED_PIN_1 B12
#define LED_PIN_2 B13

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
//#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE


