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

// Layer labels for readability
#define _BL 0
#define _FN1 1
#define _FN2 2
#define _FN3 3
#define _FN_EMPTY 9

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  _______,          KC_MUTE,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS, KC_EQL,  KC_BSPC,          KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,          KC_ENT,           KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,          KC_RSFT, KC_UP,   _______,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             MO(_FN3), _______, _______, KC_LEFT, KC_DOWN, KC_RGHT),

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

        } else  {
            // Otherwise, just change volume
            tap_code(KC_VOLU);
        }

    } else {

        if (get_mods() & MOD_MASK_SHIFT) {
            mod_tap_key(MOD_MASK_SHIFT, KC_PGUP);

        } else if (get_mods() & MOD_MASK_CTRL) {
            mod_tap_key(MOD_MASK_CTRL, KC_UP);

       } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}
