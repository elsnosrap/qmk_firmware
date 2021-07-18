#include QMK_KEYBOARD_H
#include "mitsnosrap.h"

// Define names of layers
#define BASE_LAYER 0
#define FUNC_LAYER 1

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Base layer
[BASE_LAYER] = LAYOUT_ansi(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS, KC_EQL,  KC_BSPC, KC_F12, \
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, \
  KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,          KC_ENT,  KC_PGUP, \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,          KC_UP,   KC_PGDN,  \
  KC_LCTL, KC_LALT, KC_LGUI,                   KC_SPC,                             MO(1),   _______,  MO(1),   KC_LEFT, KC_DOWN, KC_RGHT),

// Function layer
// KC_F15 acts as increase brightness, KC_F14 acts as lower brightness
[FUNC_LAYER] = LAYOUT_ansi(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  M_ZVID,  M_ZMUTE, \
  _______, M_GSTAT, M_GBRAN, M_GLOG,  M_GPULL, M_GPRUN, M_GCDEV, _______, _______, M_GDIFF, KC_MPLY,  KC_MRWD, KC_MFFD, KC_MUTE, KC_MUTE, \
  _______, M_GSLIS, M_GSSHO, M_GSAPL, M_GSDRO, M_GSPUS, M_GSPOP, _______, _______, _______, _______,  M_CLLOG,          _______, KC_F15, \
  _______, M_ACFER, M_ACPRE, M_ACPAR, _______, _______, _______, _______, _______, _______, _______,  _______,          KC_VOLU, KC_F14, \
  _______, _______, _______,                   _______,                            _______, _______,  _______, KC_HOME, KC_VOLD, KC_END),
};
