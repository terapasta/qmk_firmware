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

// Defines names for use in layer keycodes and the keymap
enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _DIAMOND
};

// Defines the keycodes used by our macros in process_record_user

#define c(kc) LGUI(kc)
#define s(kc) RSFT(kc)
#define AP_1  KC_BSPC
#define AP_2  KC_LALT
#define AP_3  KC_ENT
#define KL_EISU LT(_LOWER, KC_LANG2)
#define KL_KANA LT(_RAISE, KC_LANG1)
#define KL_LEFT LT(_RAISE, KC_LEFT)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,
        KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                           KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_GRV, KC_BSPC,
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                           KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,
        KC_CAPS,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                           KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_ENT,
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   AP_1,   AP_2,   AP_3,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,KC_UP,  KC_DEL,
        KC_LCTL,KC_LGUI,KC_LALT,KL_EISU,                        KC_SPC,                         KL_KANA,KC_RCTL,KL_LEFT,KC_LEFT,KC_DOWN,KC_RIGHT
//KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0, KC_A, KC_B,
//KC_0, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                           KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_GRV, KC_G,
//KC_1, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                           KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,
//KC_2,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                           KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_F,
//KC_3,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   AP_1,   AP_2,   AP_3,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_C,KC_D,  KC_E,
//KC_4,KC_5,KC_6,KC_7,                        KC_SPC,                                 KC_8,KC_9,KC_0,KC_A,KC_B,KC_C
    ),
    [_LOWER] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,c(KC_1),c(KC_2),c(KC_3),c(KC_4),c(KC_5),                        c(KC_6),c(KC_7),c(KC_8),c(KC_9),c(KC_0),_______,_______,_______,_______,
        _______,c(KC_Q),c(KC_W),c(KC_E),c(KC_R),c(KC_T),                        c(KC_Y),c(KC_U),c(KC_I),c(KC_O),c(KC_P),_______,_______,_______,
        _______,c(KC_A),c(KC_S),c(KC_D),c(KC_F),c(KC_G),                        c(KC_H),c(KC_J),c(KC_K),c(KC_L),_______,_______,c(KC_ENT),
        _______,c(KC_Z),c(KC_X),c(KC_C),c(KC_V),c(KC_B),_______,_______,_______,c(KC_N),c(KC_M),_______,_______,_______,_______,KC_PGUP,_______,
        _______,_______,_______,_______,                        c(KC_SPC),                      _______,_______,_______,KC_HOME,KC_PGDN,KC_END
    ),
    [_RAISE] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,s(KC_1),s(KC_2),s(KC_3),s(KC_4),s(KC_5),                        s(KC_6),s(KC_7),s(KC_8),s(KC_9),s(KC_0),_______,_______,_______,_______,
        _______,s(KC_Q),s(KC_W),s(KC_E),s(KC_R),s(KC_T),                        s(KC_Y),s(KC_U),s(KC_I),s(KC_O),s(KC_P),KC_LCBR,KC_RCBR,KC_PIPE,
        _______,s(KC_A),s(KC_S),s(KC_D),s(KC_F),s(KC_G),                        s(KC_H),s(KC_J),s(KC_K),s(KC_L),KC_COLN,KC_DQUO,s(KC_ENT),
        _______,s(KC_Z),s(KC_X),s(KC_C),s(KC_V),s(KC_B),_______,_______,_______,s(KC_N),s(KC_M),KC_LABK,KC_RABK,KC_QUES,_______,KC_PGUP,_______,
        _______,_______,_______,_______,                        s(KC_SPC),                      _______,_______,_______,KC_HOME,KC_PGDN,KC_END
    )
//    [_DIAMOND] = LAYOUT(
//        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
//        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,_______,_______,_______,
//        _______,_______,_______,KC_UP,  KC_PGUP,_______,                        _______,_______,_______,_______,_______,_______,_______,_______,
//        _______,KC_HOME,KC_LEFT,KC_RGHT,KC_END ,_______,                        _______,_______,_______,_______,_______,_______,_______,
//        _______,_______,KC_DOWN,KC_PGDN,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
//        _______,_______,_______,_______,                        _______,                        _______,_______,_______,_______,_______,_______,
//    )
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
