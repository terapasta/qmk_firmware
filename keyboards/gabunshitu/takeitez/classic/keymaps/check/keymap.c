/* Copyright 2020 kazhida
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


#define KA_EISU LALT_T(KC_LANG2)
#define KL_SPC  LT(_LOWER, KC_SPC)
#define KS_SPC  RSFT_T(KC_SPC)
#define KL_KANA LT(_RAISE, KC_LANG1)
#define KL_TAB  LT(_FUNCS, KC_TAB)

#define cmd(kc) LGUI(kc)
//#define cmd(kc) LCTL(kc)
#define sft(kc) RSFT(kc)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT(
    KC_1,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,
    KC_2,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_GRV, KC_1,
    KC_3,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_9,   KC_2,
    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_8,   KC_7,   KC_6,   KC_5,   KC_4,   KC_3,
    KC_A,   KC_B,   KC_C,   KC_D,   KC_E,   KC_F,   KC_G,   KC_H,   KC_I,   KC_J,   KC_K,   KC_L,   KC_M,
    KC_N,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,
    KC_7,   KC_8,   KC_9,   KC_EQL,
    KC_4,   KC_5,   KC_6,   KC_X,
    KC_1,   KC_2,   KC_3,   KC_PLUS,
    KC_1,   KC_2,   KC_3,   KC_E
),
[_LOWER] = LAYOUT(
    _______,cmd(KC_Q),  cmd(KC_W),  cmd(KC_E),  cmd(KC_R),  cmd(KC_T),  cmd(KC_Y),  cmd(KC_U),  cmd(KC_I),  cmd(KC_O),  cmd(KC_P),  cmd(KC_LBRC),   cmd(KC_RBRC),
    _______,cmd(KC_A),  cmd(KC_S),  cmd(KC_D),  cmd(KC_F),  cmd(KC_G),  cmd(KC_H),  cmd(KC_J),  cmd(KC_K),  cmd(KC_L),  KC_COLN,    cmd(KC_BSPC),
    _______,cmd(KC_Z),  cmd(KC_X),  cmd(KC_C),  cmd(KC_V),  cmd(KC_B),  cmd(KC_N),  cmd(KC_M),  KC_MINS,    KC_EQL,     KC_PGUP,    KC_BSLS,
    _______,_______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_HOME,    KC_PGDN,    KC_END,
    _______,_______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,   _______,   _______,
    _______,_______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,_______,    _______,    _______,
    _______,_______,    _______,    _______,
    _______,_______,    _______,    _______,
    _______,_______,    _______,    _______
),
[_RAISE] = LAYOUT(
    _______,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,KC_SCLN,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,KC_COLN,KC_SCLN,KC_PGUP,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,KC_HOME,KC_PGDN,KC_END,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,
    _______,_______,_______,_______,
    _______,_______,_______,_______,
    _______,_______,_______,_______
),
[_FUNCS] = LAYOUT(
    _______,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,
    _______,RESET,  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,RGB_TOG,RGB_SAI,RGB_VAI,RGB_SAD,
    _______,_______,_______,_______,_______,_______,_______,_______,RGB_TOG,RGB_HUI,RGB_VAD,RGB_HUD,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,
    _______,_______,_______,_______,
    _______,_______,_______,_______,
    _______,_______,_______,_______
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

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
