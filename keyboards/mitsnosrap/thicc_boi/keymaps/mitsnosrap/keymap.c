/* Copyright 2020 Tim Parsons
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
#include QMK_KEYBOARD_H
#include "mitsnosrap.h"

// Layer labels defined for readability
#define _BL 0
#define _FN1 1
#define _FN2 2
#define _FN_EMPTY 99

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT(
        M_ZMUTE, KC_F1,   KC_F2,   KC_F3,   KC_F4,            KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  M_ZVID,  M_ZMUTE,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,          KC_EQL,  KC_BSPC, KC_F12,
        KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,
        KC_ESC,           KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,           KC_PGUP,
                 KC_LSFT, KC_Z,    KC_X,    FN2_C,   FN2_V,   KC_B,    FN1_N,   CTRL_M,  KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_PGDN,
        KC_LCTL, KC_LALT,          KC_LGUI,                            KC_SPC,                             MO(_FN1),         KC_LEFT, KC_DOWN, KC_RGHT),

    [_FN1] = LAYOUT(
        _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______,          M_GSTAT, M_GBRAN, M_GLOG,  M_GPULL, M_GPRUN, M_GCDEV, _______, _______, M_GDIFF, KC_MPLY, KC_MRWD, KC_MFFD, KC_MUTE, _______,
        _______,          M_GSLIS, M_GSSHO, M_GSAPL, M_GSDRO, M_GSPUS, M_GSPOP, _______, _______, _______, _______, _______, _______,          _______,
                 _______, M_ACFER, M_ACPRE, M_ACPAR, M_ALDL,  M_ALDP,  _______, _______, KC_F14,  KC_F15,  _______,          _______, KC_VOLU, _______,
        _______, _______,          _______,                            _______,                            _______,          KC_HOME, KC_VOLD, KC_END),

    [_FN2] = LAYOUT(
        _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_F12,  _______, _______,
        _______,          _______, _______, M_EMOJ,  _______, _______, _______, M_ALFR,  _______, M_GDIFF, KC_MPLY, KC_MRWD, KC_MFFD, KC_MUTE, _______,
        _______,          KC_LALT, KC_LSFT, KC_LGUI, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______,          _______,
                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______,          _______,                            _______,                            _______,          _______, _______, _______),

    [_FN_EMPTY] = LAYOUT(
        _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______,          _______,                            _______,                            _______,          _______, _______, _______),

};

bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
    return true;
}

