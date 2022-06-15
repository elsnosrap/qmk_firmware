#include QMK_KEYBOARD_H
#include "mitsnosrap.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0
#define _FN1 1
#define _FN2 2
#define _FN3 3
#define _FN_EMPTY 9

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BL] = LAYOUT(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_GRV,  KC_BSPC, KC_F12,
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,
  KC_GESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,  _______,  KC_ENT,
  KC_LSFT, _______, KC_Z,    KC_X,    FN2_C,   KC_V,    KC_B,    FN1_N,   CTRL_M,  KC_COMM, KC_DOT,   KC_SLSH,  KC_RO,    KC_RSFT, KC_UP,
  KC_LCTL, KC_LALT, KC_LGUI, _______,          KC_SPC,  KC_SPC,                    _______, MO(_FN1), MO(_FN1), MO(_FN1), KC_LEFT, KC_DOWN, KC_RGHT),

[_FN1] = LAYOUT(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______, _______, KC_PGUP,
  _______, M_GSTAT, M_GBRAN, M_GLOG,  M_GPULL, M_GPRUN, M_GCDEV, _______, _______, M_GDIFF, KC_MPLY,  KC_MRWD,  KC_MFFD,  KC_MUTE,          KC_PGDN,
  KC_CAPS, M_GSLIS, M_GSSHO, M_GSAPL, M_GSDRO, M_GSPUS, M_GSPOP, _______, _______, _______, _______,  M_CLLOG,  _______,  _______,
  _______, _______, M_ACFER, M_ACPRE, M_ACPAR, M_ALDL,  M_ALDP,  _______, _______, KC_F14,  KC_F15,   _______,  _______,  _______, KC_VOLU,
  _______, _______, _______, _______,          _______, _______,                   _______, _______,  _______,  _______,  KC_HOME, KC_VOLD, KC_END),

[_FN2] = LAYOUT(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  KC_F12,   _______, _______, _______,
  _______, _______, _______, M_EMOJ,  _______, _______, _______, M_ALFR,  _______, M_GDIFF, _______,  _______,  _______,  _______,          _______,
  _______, KC_LALT, KC_LSFT, KC_LGUI, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,  _______,  _______,  _______,
  _______, _______, _______, _______, _______, _______, _______, _______, KC_F14,  KC_F15,  _______,  _______,  _______,  _______, _______,
  _______, _______, _______, _______,          _______, _______,                   _______, _______,  _______,  _______,  _______, _______, _______),

[_FN_EMPTY] = LAYOUT(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  _______,          _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  _______, _______,
  _______, _______, _______, _______,          _______, _______,                   _______, _______,  _______,  _______,  _______, _______, _______),

};
