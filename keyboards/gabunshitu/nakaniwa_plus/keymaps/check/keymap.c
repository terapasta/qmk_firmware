/* Copyright 2021 kazhida
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
};

#define KL_EISU LT(_LOWER, KC_LANG2)
#define KL_KANA LT(_RAISE, KC_LANG1)

#define c(kc) LGUI(kc)
//#define c(kc) LCTL(kc)
#define o(kc) LALT(kc)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT(
        KC_0,     KC_9,  KC_0,  KC_1,  KC_2,  KC_3,  KC_4,      KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0, KC_1, KC_2,     KC_1,KC_2,KC_3,
        KC_1,     KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,       KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC,KC_NO,      KC_4, KC_5,
        KC_2,     KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,               KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,            KC_6, KC_7,
        KC_3,    KC_A,   KC_S,   KC_D,   KC_F,   KC_G,               KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_ENT,                     KC_8,KC_9,
        KC_4,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,       KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,KC_NO,                      KC_0,  KC_1,
        KC_5,   KC_6,KC_7,KC_8,KC_9,KC_0,                      KC_1,KC_2, KC_3, KC_4, KC_5, KC_6,             KC_7,KC_8,KC_9
),
[_LOWER] = LAYOUT(
        c(KC_ESC),  _______,_______,_______,_______,_______,_______,        _______,_______,_______,   _______,   _______,  _______,    _______,    _______,            _______,_______,_______,
        c(KC_GRV),  c(KC_1),c(KC_2),c(KC_3),c(KC_4),c(KC_5),c(KC_6),        c(KC_6),c(KC_7),c(KC_8),   c(KC_9),   c(KC_0),  c(KC_MINS), c(KC_EQL),  c(KC_BSPC), _______,        _______,_______,
        c(KC_TAB),  c(KC_Q),c(KC_W),c(KC_E),c(KC_R),c(KC_T),                c(KC_Y),c(KC_U),c(KC_I),   c(KC_O),   c(KC_P),  c(KC_LBRC), c(KC_RBRC), c(KC_BSLS),                 _______,_______,
        c(KC_LCTL), c(KC_A),c(KC_S),c(KC_D),c(KC_F),c(KC_G),                c(KC_H),c(KC_J),c(KC_K),   c(KC_L),   c(KC_SCLN),c(KC_QUOT),c(KC_ENT),                              _______,_______,
        c(KC_LSFT), c(KC_Z),c(KC_X),c(KC_C),c(KC_V),c(KC_B),        c(KC_B),c(KC_N),c(KC_M),c(KC_COMM),c(KC_DOT), c(KC_SLSH),_______,_______,                                   _______,_______,
        _______,   _______,_______,c(KC_DEL),_______,_______,               _______,_______,c(KC_SPC), c(KC_SPC), c(KC_SPC), _______,                                   _______,_______,_______
),
[_RAISE] = LAYOUT(
        o(KC_ESC),  _______,_______,_______,_______,_______,_______,        _______,_______,_______,   _______,   _______,  _______,    _______,    _______,            _______,_______,_______,
        o(KC_GRV),  o(KC_1),o(KC_2),o(KC_3),o(KC_4),o(KC_5),o(KC_6),        o(KC_6),o(KC_7),o(KC_8),   o(KC_9),   o(KC_0),  o(KC_MINS), o(KC_EQL),  o(KC_BSPC), _______,        _______,_______,
        o(KC_TAB),  o(KC_Q),o(KC_W),o(KC_E),o(KC_R),o(KC_T),                o(KC_Y),o(KC_U),o(KC_I),   o(KC_O),   o(KC_P),  o(KC_LBRC), o(KC_RBRC), o(KC_BSLS),                 _______,_______,
        o(KC_LCTL), o(KC_A),o(KC_S),o(KC_D),o(KC_F),o(KC_G),                o(KC_H),o(KC_J),o(KC_K),   o(KC_L),   o(KC_SCLN),o(KC_QUOT),o(KC_ENT),                              _______,_______,
        o(KC_LSFT), o(KC_Z),o(KC_X),o(KC_C),o(KC_V),o(KC_B),        o(KC_B),o(KC_N),o(KC_M),o(KC_COMM),o(KC_DOT), o(KC_SLSH),_______,_______,                                   _______,_______,
        _______,   _______,_______,o(KC_DEL),_______,_______,               _______,_______,o(KC_SPC), o(KC_SPC), o(KC_SPC), _______,                                   _______,_______,_______
)
};

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/


