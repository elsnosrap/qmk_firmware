#include QMK_KEYBOARD_H
#include "mitsnosrap.h"

// Layer labels for readability
#define _BL 0
#define _FN1 1
#define _FN2 2
#define _FN3 3
#define _FN_EMPTY 9

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT_60_ansi(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC, KC_RBRC, KC_BSLS,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,          KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    FN2_C,   KC_V,    KC_B,    FN1_N,   CTRL_M,  KC_COMM, KC_DOT,   KC_SLSH,          KC_RSFT,
        KC_LCTL, KC_LALT, KC_LGUI,                            KC_SPC,                             KC_LEFT,  KC_DOWN, KC_UP,   KC_RGHT),

    [_FN1] = LAYOUT_60_ansi(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_DEL,
        _______, M_GSTAT, M_GBRAN, M_GLOG,  M_GPULL, M_GPRUN, M_GCDEV, _______, _______, _______, _______,  _______, _______, _______,
        _______, M_GSLIS, M_GSSHO, M_GSAPL, M_GSDRO, M_GSPUS, M_GSPOP, _______, _______, _______, _______,  _______,          _______,
        _______,          M_ACFER, M_ACPRE, M_ACPAR, M_ALDL,  M_ALDP,  _______, _______, _______, _______,  _______,          _______,
        _______, _______, _______,                            _______,                            _______,  _______, _______, _______),
    
    [_FN2] = LAYOUT_60_ansi(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_DEL,
        _______, _______, _______, M_EMOJ,  _______, _______, _______, M_ALFR,  _______, M_GDIFF, KC_MPLY,  KC_MRWD, KC_MFFD, _______,
        _______, KC_LALT, KC_LSFT, KC_LGUI, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,  KC_VOLU,          _______,
        _______,          _______, MO(_FN3),_______, _______, _______, _______, _______, KC_F14,  KC_F15,   KC_VOLD,          _______,
        _______, _______, _______,                            _______,                            KC_HOME,  KC_PGDN, KC_PGUP, KC_END),

    [_FN3] = LAYOUT_60_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,
        _______, RGB_TOG, _______, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, RGB_MOD, _______,  _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, RGB_SPI, RGB_SPD, _______,  _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,          _______,
        _______, _______, _______,                            _______,                            _______,  _______, _______, _______)
};
