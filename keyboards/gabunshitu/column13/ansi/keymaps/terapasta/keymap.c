/* Copyright 2021 ABplus Inc. kazhida
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

enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _FUNCS
};

#define KS_RSPC LSFT_T(KC_SPC)
#define KL_LSPC LT(_FUNCS, KC_SPC)
#define RAISE LT(_RAISE, _RAISE)
#define LOWER LT(_LOWER, _LOWER)
#define KL_KANA LT(_RAISE,KC_LANG1)
#define KA_EISU LT(_LOWER,KC_LANG2)
#define cmd(KC) LGUI(KC)
#define sft(KC) RSFT(KC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS, KC_BSPC,
    KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_SLSH,
    KC_TAB, KC_LALT, KC_LGUI, KA_EISU, KL_LSPC,         KS_RSPC, KL_KANA, KC_RGUI, KC_LEFT, KC_DOWN, KC_RGHT
),
[_LOWER] = LAYOUT(
    _______,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINS,_______,
    _______,_______,_______,_______,_______,_______,KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT,KC_PLUS,KC_EQL,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,KC_ASTR,KC_SLSH,
    _______,_______,_______,_______,_______,        KL_KANA,_______,_______,KC_HOME,KC_PGDN,KC_END
),
[_RAISE] = LAYOUT(
    KC_GRAVE, KC_EXLM, KC_AT,  KC_HASH, KC_DLR, KC_PERC, KC_TILD, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
    KC_NUBS, KC_DQT,  KC_QUOT, KC_NUBS,  KC_LCBR, _______, _______, KC_RCBR, _______, _______, KC_PLUS, KC_EQL,
    _______, KC_JYEN, _______, _______, _______, _______, _______, _______, KC_LBRC,   KC_RBRC,    KC_PGUP, KC_BSLS,
    _______, _______,   _______,   _______,   KL_KANA,              _______,   _______,  _______,   KC_HOME,    KC_PGDN, KC_END
),
[_FUNCS] =  LAYOUT(
    _______,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,
    _______,RESET,  _______,_______,_______,_______,_______,_______,_______,_______,RGB_MOD,RGB_TOG,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,RGB_VAI,RGB_SAI,RGB_VAD,
    _______,_______,_______,_______,_______,        _______,KL_KANA,_______,RGB_HUI,RGB_SAD,RGB_HUD
)
};

//bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//    switch (keycode) {
//        case QMKBEST:
//            if (record->event.pressed) {
//                // when keycode QMKBEST is pressed
//                SEND_STRING("QMK is the best thing ever!");
//            } else {
//                // when keycode QMKBEST is released
//            }
//            break;
//        case QMKURL:
//            if (record->event.pressed) {
//                // when keycode QMKURL is pressed
//                SEND_STRING("https://qmk.fm/\n");
//            } else {
//                // when keycode QMKURL is released
//            }
//            break;
//    }
//    return true;
//}
