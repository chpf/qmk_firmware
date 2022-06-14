// Copyright 2022 Christian Pfefferkorn (@chpf)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


#include "config_common.h"
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT


#define PRODUCT_ID 0x3536
#define DEVICE_VER 0x0001
#define PRODUCT    Dactyl-Manuform 5x6 68 Keys

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6 }

#define DIODE_DIRECTION COL2ROW
