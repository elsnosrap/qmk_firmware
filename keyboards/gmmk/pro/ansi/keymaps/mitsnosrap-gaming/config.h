/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>
   Copyright 2021 Cory Ginsberg (@coryginsberg)

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

// Prefer a slightly longer tap term setting https://docs.qmk.fm/#/tap_hold
#define TAPPING_TERM 250

// Define the following so mod-tap works better for my typing style
#define IGNORE_MOD_TAP_INTERRUPT

// Set default RGB startup mode to a solid color
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR

// White keyboard backlight - a pink-ish / purple-ish color
//#define RGB_MATRIX_STARTUP_HUE 210
//#define RGB_MATRIX_STARTUP_SAT 255
//#define RGB_MATRIX_STARTUP_VAL 255

// Black keyboard backlight - red
#define RGB_MATRIX_STARTUP_HUE 0
#define RGB_MATRIX_STARTUP_SAT 255
#define RGB_MATRIX_STARTUP_VAL 255
