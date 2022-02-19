#pragma once

#ifndef USERSPACE
#define USERSPACE

#include "quantum.h"
#include "action.h"
#include "version.h"

// Alternate definitions for longer codes
#define FN1_N LT(_FN1, KC_N)
#define FN2_V LT(_FN2, KC_V)
#define FN2_C LT(_FN2, KC_C)
#define FN3_F LT(_FN3, KC_F)
#define CTRL_M MT(MOD_LCTL, KC_M)

// Custom keycodes for macros
enum custom_keycodes {
    M_GSTAT= SAFE_RANGE,    // git status
    M_GBRAN,                // git branch -a
    M_GCHEC,                // git checkout
    M_GPULL,                // git pull
    M_GPRUN,                // git remote update origin --prune
    M_GDIFF,                // git difftool <hash>^..<hash>
    M_GSLIS,                // git stash list
    M_GSSHO,                // git stash show -p stash@{
    M_GSDRO,                // git stash drop stash@{
    M_GSAPL,                // git stash apply stash@{
    M_GSPUS,                // git stash push -m "
    M_GSPOP,                // git stash pop
    M_LOGCT,                // logcat.sh -fuc | tee logcat.log
    M_FILTL,                // tail -f logcat.log | egrep "
    M_ACFER,                // adb shell dumpsys activity <fertility>
    M_ACPAR,                // adb shell dumpsys activity <parenting>
    M_ACPRE,                // adb shell dumpsys activity <pregnancy>
    M_GLOG,                 // gitlog
    M_CLLOG,                // Ctrl + C, exit, Ctrl + C, exit, Ctrl + C, exit
    M_AOTLS,                // aws s3 ls BUILD_TIME_BUCKET
    M_AOALS,                // aws s3 ls BUILD_TIME_ARCHIVED_BUCKET
    M_AORLS,                // aws s3 ls BUILD_REPORTS
    M_GCDEV,                // git checkout develop
    M_ALDL,                 // adb shell am start -a android.intent.action.VIEW -d " - e.g. launch a deep link
    M_ALDP,                 // adb shell am start -a android.intent.action.view -d "http://play.google.com/store/apps/details?id=
    M_ZMUTE,                // Command + Shift + A - e.g. toggle mute in Zoom
    M_ZVID,                 // Command + Shift + V - e.g. toggle video in Zoom
    M_ALFR,                 // Alt + Space - to trigger Alfred
    M_EMOJ,                 // Command + Control + Space - triggers Mac emoji keyboard
    NEW_SAFE_RANGE
};

// Used to handle custom macros
bool process_record_user(uint16_t keycode, keyrecord_t *record);

// Used by specific keyboard keymaps to provide additional macros
bool process_record_keymap(uint16_t keycode, keyrecord_t *record);

#endif
