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

// Defines names for use in layer keycodes and the keymap
enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _FUNCS
};

#define KS_RSPC LSFT_T(KC_SPC)
#define KL_TAB  LT(_FUNCS, KC_TAB)
#define KL_LSPC LT(_LOWER, KC_SPC)
#define KL_KANA LT(_RAISE, KC_LANG1)
#define KA_EISU LALT_T(KC_LANG2)
#define c(KC) LGUI(KC)
#define s(KC) RSFT(KC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT(
    KC_0, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,       KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_BSPC,
    KC_1, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,               KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_ENT,
    KC_2,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,               KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,
    KC_3,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,       KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_6,  KC_SLSH,
    KC_4,KC_5,KC_6,KC_7, KC_8,KC_9,            KC_0,KC_1,KC_2,KC_3,KC_4,KC_5
),
[_LOWER] = LAYOUT(
    KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,      KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,
    _______,c(KC_Q),c(KC_W),c(KC_E),c(KC_R),c(KC_T),            c(KC_Y),c(KC_U),c(KC_I),c(KC_O),c(KC_P),c(KC_ENT),
    _______,c(KC_A),c(KC_S),c(KC_D),c(KC_F),c(KC_G),            c(KC_H),c(KC_J),c(KC_K),c(KC_L),KC_QUOT,
    _______,c(KC_Z),c(KC_X),c(KC_C),c(KC_V),c(KC_B),    c(KC_B),c(KC_N),c(KC_M),KC_LCBR,KC_RCBR,KC_PGUP,KC_BSLS,
    _______,_______,_______,_______,_______,_______,            _______,_______,KC_BSLS,KC_HOME,KC_PGDN,KC_END
),
[_RAISE] = LAYOUT(
    KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,      KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,
    _______,s(KC_Q),s(KC_W),s(KC_E),s(KC_R),s(KC_T),            s(KC_Y),s(KC_U),s(KC_I),s(KC_O),s(KC_P),s(KC_ENT),
    _______,s(KC_A),s(KC_S),s(KC_D),s(KC_F),s(KC_G),            s(KC_H),s(KC_J),s(KC_K),s(KC_L),KC_DQT,
    _______,s(KC_Z),s(KC_X),s(KC_C),s(KC_V),s(KC_B),    s(KC_B),s(KC_N),s(KC_M),KC_LCBR,KC_RCBR,KC_PGUP,KC_BSLS,
    _______,_______,_______,_______,_______,_______,            _______,_______,KC_BSLS,KC_HOME,KC_PGDN,KC_END
),
[_FUNCS] =  LAYOUT(
    _______,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,      KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,
    _______,RESET,  _______,_______,_______,_______,            _______,_______,_______,_______,RGB_MOD,RGB_TOG,
    _______,_______,_______,_______,_______,_______,            _______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,    _______,_______,_______,RGB_VAD,RGB_VAI,RGB_SAI,_______,
    _______,_______,_______,_______,_______,_______,            _______,_______,_______,RGB_HUD,RGB_SAD,RGB_HUI
)
};
