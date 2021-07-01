/*
Copyright 2020 Olivia Crain

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

#define VENDOR_ID    0x1998
#define PRODUCT_ID   0x0069
#define DEVICE_VER   0x0001
#define MANUFACTURER Olivia Crain
#define PRODUCT      otens_split

#define MATRIX_ROWS 6
#define MATRIX_COLS 6

#define USE_I2C
#define DIODE_DIRECTION COL2ROW
#define MATRIX_ROW_PINS { B3, B2, B6 }
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS_RIGHT { B3, B2, B6 }
#define MATRIX_COL_PINS_RIGHT { B1, F7, F6, F5, F4, B0}
#define UNUSED_PINS


#define DEBOUNCE 5
#define FORCE_NKRO
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define SPLIT_USB_DETECT