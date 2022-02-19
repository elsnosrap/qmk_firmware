/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>

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

#include QMK_KEYBOARD_H
#include "mitsnosrap.h"

// Layer labels for readability
#define _BL 0
#define _FN1 1
#define _FN2 2
#define _FN3 3
#define _FN_EMPTY 9

// Alternate definitions for longer codes
#define FN1_N LT(_FN1, KC_N)
#define FN2_V LT(_FN2, KC_V)
#define FN2_C LT(_FN2, KC_C)
#define FN3_F LT(_FN3, KC_F)
#define CTRL_M MT(MOD_LCTL, KC_M)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT(
        M_ZMUTE, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  M_ZVID,           KC_MUTE,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS, KC_EQL,  KC_BSPC,          KC_F12,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC, KC_RBRC, KC_BSLS,          KC_DEL,
        KC_ESC,  KC_A,    KC_S,    KC_D,    FN3_F,   KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,          KC_ENT,           KC_PGUP,
        KC_LSFT,          KC_Z,    KC_X,    FN2_C,   FN2_V,   KC_B,    FN1_N,   CTRL_M,  KC_COMM, KC_DOT,   KC_SLSH,          KC_RSFT, KC_UP,   KC_PGDN,
        KC_LCTL, KC_LALT, KC_LGUI,                            KC_SPC,                             MO(_FN1), _______, MO(_FN1),KC_LEFT, KC_DOWN, KC_RGHT),

    [_FN1] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,          _______,
        _______, M_GSTAT, M_GBRAN, M_GLOG,  M_GPULL, M_GPRUN, M_GCDEV, _______, _______, M_GDIFF, KC_MPLY,  KC_MRWD, KC_MFFD, _______,          _______,
        _______, M_GSLIS, M_GSSHO, M_GSAPL, M_GSDRO, M_GSPUS, M_GSPOP, _______, _______, _______, _______,  M_CLLOG,          _______,          _______,
        _______,          M_ACFER, M_ACPRE, M_ACPAR, M_ALDL,  M_ALDP,  _______, _______, KC_F14,  KC_F15,   _______,          _______, KC_VOLU, _______,
        _______, _______, _______,                            _______,                            _______,  _______, _______, KC_HOME, KC_VOLD, KC_END),

    [_FN2] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, KC_F12,  _______,          _______,
        _______, _______, _______, M_EMOJ,  _______, _______, _______, M_ALFR,  _______, M_GDIFF, _______,  _______, _______, _______,          _______,
        _______, KC_LALT, KC_LSFT, KC_LGUI, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,  _______, _______, _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,          _______,          _______,
        _______, _______, _______,                            _______,                            _______,  _______, _______, _______, _______, _______),

    [_FN3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_MOD,  _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, RGB_HUD, RGB_SAD, RGB_VAD, _______,  _______, _______, _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,          _______,          _______,
        _______, _______, _______,                            _______,                            _______,  _______, _______, _______, _______, _______),

    [_FN_EMPTY] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,          _______,          _______,
        _______, _______, _______,                            _______,                            _______,  _______, _______, _______, _______, _______),


};

// Helper method to remove a MOD_MASK, tap a keycode, and reset MOD_MASK
void mod_tap_key(uint8_t mod_mask, uint8_t keycode) {
    uint8_t mod_state = get_mods();
    del_mods(mod_mask);
    tap_code(keycode);
    set_mods(mod_state);
}

bool encoder_update_user(uint8_t index, bool clockwise) {

    if (clockwise) {
        if (get_mods() & MOD_MASK_SHIFT) {
            // If holding shift, page down
            mod_tap_key(MOD_MASK_SHIFT, KC_PGDN);

        } else if (get_mods() & MOD_MASK_CTRL) {
            // If holding ctrl, arrow down
            mod_tap_key(MOD_MASK_CTRL, KC_DOWN);

        } else if (get_mods() & MOD_MASK_ALT) {
            // If holding alt, turn up brightness
            mod_tap_key(MOD_MASK_ALT, KC_F15);

        } else  {
            // Otherwise, just change volume
            tap_code(KC_VOLU);
        }

    } else {

        if (get_mods() & MOD_MASK_SHIFT) {
            mod_tap_key(MOD_MASK_SHIFT, KC_PGUP);

        } else if (get_mods() & MOD_MASK_CTRL) {
            mod_tap_key(MOD_MASK_CTRL, KC_UP);

        } else if (get_mods() & MOD_MASK_ALT) {
            mod_tap_key(MOD_MASK_ALT, KC_F14);

        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}
