#include QMK_KEYBOARD_H
#include "mitsnosrap.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
#define _BL 0
#define _FL 1
#define _CL 2

enum custom_keymap_codes{
    S_BSKTC = NEW_SAFE_RANGE,
    S_ODEJY,
    S_RCKBY,
    S_DOEDR,
    S_SCALE,
    S_ONEUP,
    S_COIN,
    S_SONIC,
    S_ZELDA
};

#ifdef AUDIO_ENABLE
  float song_basketcase[][2] = SONG(BASKET_CASE);
  float song_ode_to_joy[][2]  = SONG(ODE_TO_JOY);
  float song_rock_a_bye_baby[][2]  = SONG(ROCK_A_BYE_BABY);
  float song_doe_a_deer[][2]  = SONG(DOE_A_DEER);
  float song_scale[][2]  = SONG(MUSIC_SCALE_SOUND);
  float song_coin[][2]  = SONG(COIN_SOUND);
  float song_one_up[][2]  = SONG(ONE_UP_SOUND);
  float song_sonic_ring[][2]  = SONG(SONIC_RING);
  float song_zelda_puzzle[][2]  = SONG(ZELDA_PUZZLE);
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: Base Layer (Default Layer)
   */
[_BL] = LAYOUT(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,     KC_5,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_F12,  \
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,  \
  KC_GESC, KC_A,    KC_S,    KC_D,    KC_F,     KC_G,     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                    \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,            \
  KC_LCTL, KC_LALT, KC_LGUI,          KC_SPC,   KC_SPC,                     _______, KC_RCTL, MO(_FL), MO(_FL), KC_LEFT, KC_DOWN, KC_RGHT),

  /* Keymap _FL: Function Layer
   */
[_FL] = LAYOUT(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_PGUP, \
  _______, M_GSTAT, M_GBRAN, M_GLOG,  M_GPULL,  M_GPRUN,  M_GCDEV, _______, _______, M_GDIFF, KC_MPLY, KC_MRWD, KC_MFFD, KC_MUTE, KC_PGDN, \
  KC_CAPS, M_GSLIS, M_GSSHO, M_GSAPL, M_GSDRO,  M_GSPUS,  _______, _______, _______, _______, _______, M_CLLOG, _______,                   \
  _______, M_ACFER, M_ACPRE, M_ACPAR, M_AOTLS,  M_AOALS,  M_AORLS, _______, _______, _______, _______, _______,          KC_VOLU,          \
  _______, _______, _______,          _______,  _______,                    _______, _______, MO(_CL), MO(_FL), KC_HOME, KC_VOLD, KC_END),

  /* Keymap _CL: Control layer
   */
[_CL] = LAYOUT(
  BL_STEP, S_ONEUP, S_SCALE, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, _______, _______, _______, _______, BL_TOGG, BL_INC,  \
  _______, _______, _______, _______, RESET,    _______,  _______, _______, _______, _______, _______, _______, _______, _______, BL_DEC,  \
  _______, _______, S_SONIC, S_ZELDA, _______,  _______,  _______, _______, _______, _______, _______, _______, _______,                   \
  _______, _______, _______, _______, _______,  _______,  _______, _______, _______, _______, _______, _______,          RGB_SAI,          \
  _______, _______, _______,          BL_BRTG,  BL_BRTG,                    _______, _______, MO(_CL), MO(_FL), RGB_HUD, RGB_SAD, RGB_HUI),
};


bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        #ifdef AUDIO_ENABLE
            case S_BSKTC:
                if (record->event.pressed) {
                    stop_all_notes();
                    PLAY_SONG(song_basketcase);
                }
                return false;
            case S_ODEJY:
                if (record->event.pressed) {
                    stop_all_notes();
                    PLAY_SONG(song_ode_to_joy);
                }
                return false;
            case S_RCKBY:
                if (record->event.pressed) {
                    stop_all_notes();
                    PLAY_SONG(song_rock_a_bye_baby);
                }
                return false;
            case S_DOEDR:
                if (record->event.pressed) {
                    stop_all_notes();
                    PLAY_SONG(song_doe_a_deer);
                }
                return false;
            case S_SCALE:
                if (record->event.pressed) {
                    stop_all_notes();
                    PLAY_SONG(song_scale);
                }
                return false;
            case S_ONEUP:
                if (record->event.pressed) {
                    stop_all_notes();
                    PLAY_SONG(song_one_up);
                }
                return false;
            case S_COIN:
                if (record->event.pressed) {
                    stop_all_notes();
                    PLAY_SONG(song_coin);
                }
                return false;
            case S_SONIC:
                if (record->event.pressed) {
                    stop_all_notes();
                    PLAY_SONG(song_sonic_ring);
                }
                return false;
            case S_ZELDA:
                if (record->event.pressed) {
                    stop_all_notes();
                    PLAY_SONG(song_zelda_puzzle);
                }
                return false;
        #endif
    }
    return true;
}
