#include "mitsnosrap.h"
#include "secret.h"

// Enable Mac OS X Unicode support
//void eeconfig_init_user(void) {
//    set_unicode_input_mode(UNICODE_MODE_OSX);
//}

// Provides a method for per-keyboard macros to be run.
// Gets called if there's no handled keycode in `process_record_user`
__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
    return true;
}

// Method to handle custom keycode actions
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case M_GSTAT:
                SEND_STRING("git status" SS_TAP(X_ENTER));
                break;

            case M_GBRAN:
                SEND_STRING("git branch -a" SS_TAP(X_ENTER));
                break;

            case M_GCHEC:
                SEND_STRING("git checkout ");
                break;

            case M_GPULL:
                SEND_STRING("git pull" SS_TAP(X_ENTER));
                break;

            case M_GPRUN:
                SEND_STRING("git remote update origin --prune" SS_TAP(X_ENTER));
                break;

           case M_GDIFF:
                SEND_STRING("git difftool --dir-diff "SS_DOWN(X_LGUI)SS_TAP(X_V)SS_UP(X_LGUI)"^.."SS_DOWN(X_LGUI)SS_TAP(X_V)SS_UP(X_LGUI) SS_TAP(X_ENTER));
                break;

            case M_GSLIS:
                SEND_STRING("git stash list" SS_TAP(X_ENTER));
                break;

            case M_GSSHO:
                SEND_STRING("git stash show -p stash@{");
                break;

            case M_GSDRO:
                 SEND_STRING("git stash drop stash@{");
                 break;

            case M_GSAPL:
                 SEND_STRING("git stash apply stash@{");
                 break;

            case M_GSPUS:
                SEND_STRING("git stash push -m \"");
                break;

            case M_GSPOP:
                SEND_STRING("git stash pop");
                break;

            case M_LOGCT:
                SEND_STRING("logcat.sh -fuc | tee logcat.log" SS_TAP(X_ENTER));
                break;

            case M_FILTL:
                SEND_STRING("tail -f logcat.log | egrep \"");
                break;

            case M_ACFER:
                SEND_STRING("adb shell dumpsys activity com.ovuline.fertility.debug | less" SS_TAP(X_ENTER));
                break;

            case M_ACPAR:
                SEND_STRING("adb shell dumpsys activity com.ovuline.parenting.debug | less" SS_TAP(X_ENTER));
                break;

            case M_ACPRE:
                SEND_STRING("adb shell dumpsys activity com.ovuline.pregnancy.debug | less" SS_TAP(X_ENTER));
                break;

            case M_GLOG:
                SEND_STRING("gitlog" SS_TAP(X_ENTER));
                break;

            case M_GPGPW:
                SEND_STRING(GPG_PASSWORD);
                break;

            case M_PGPG:
                SEND_STRING(PERSONAL_GPG_PASSWORD);
                break;

            case M_CLLOG:
                SEND_STRING(SS_DOWN(X_LCTRL)SS_TAP(X_C)SS_UP(X_LCTRL)"exit" SS_TAP(X_ENTER));
                wait_ms(1000);
                SEND_STRING(SS_DOWN(X_LCTRL)SS_TAP(X_C)SS_UP(X_LCTRL)"exit" SS_TAP(X_ENTER));
                wait_ms(1000);
                SEND_STRING(SS_DOWN(X_LCTRL)SS_TAP(X_C)SS_UP(X_LCTRL)"exit" SS_TAP(X_ENTER));
                wait_ms(1000);
                SEND_STRING(SS_DOWN(X_LCTRL)SS_TAP(X_C)SS_UP(X_LCTRL)"exit" SS_TAP(X_ENTER));
                break;

            case M_AOTLS:
                SEND_STRING("aws s3 ls "BUILD_TIME_BUCKET SS_TAP(X_ENTER));
                break;

            case M_AOALS:
                SEND_STRING("aws s3 ls "BUILD_TIME_ARCHIVED_BUCKET SS_TAP(X_ENTER));
                break;

            case M_AORLS:
                SEND_STRING("aws s3 ls "BUILD_REPORTS SS_TAP(X_ENTER));
                break;

            case M_GCDEV:
                SEND_STRING("git checkout develop" SS_TAP(X_ENTER));
                break;

            case M_GD:
                SEND_STRING("gd" SS_TAP(X_ENTER));
                break;

            case M_GDC:
                SEND_STRING("gdc" SS_TAP(X_ENTER));
                break;

            case M_ZMUTE:
                SEND_STRING(SS_DOWN(X_LGUI)SS_LSFT("a")SS_UP(X_LGUI));
                break;

            case M_ZVID:
                SEND_STRING(SS_DOWN(X_LGUI)SS_LSFT("v")SS_UP(X_LGUI));
                break;
        }
    }
    return process_record_keymap(keycode, record);
};

