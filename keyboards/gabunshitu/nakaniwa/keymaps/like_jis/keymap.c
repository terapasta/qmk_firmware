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
#include "keymap_jp.h"

enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
};

#define KL_EISU LT(_LOWER, KC_LANG2)
#define KL_KANA LT(_RAISE, KC_LANG1)
//#define cmd(kc) LGUI(kc)
#define _cmd(kc) LCTL(kc)
#define _sft(kc) RSFT(kc)
#define RC_F3 RSFT(KC_F3)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
            KC_ESC,     KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   RC_F3,     KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   JP_MINS,  JP_CIRC,  JP_YEN, KC_BSPC,
            KC_TAB,     KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,               KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   JP_AT, JP_RBRC,JP_LBRC,
            KC_LCTL,    KC_A,   KC_S,   KC_D,   KC_F,   KC_G,               KC_H,   KC_J,   KC_K,   KC_L,   JP_SCLN, JP_COLN, KC_ENT,
            KC_LSFT,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,        KC_F3, KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,JP_BSLS,KC_UP,  KC_DEL,
            KC_LCTRL,   KC_LGUI,KC_LALT,KC_SPC,KL_EISU,                    KL_KANA,KC_SPC, KC_SPC, KC_SPC,         KL_KANA,KC_LEFT,KC_DOWN,KC_RIGHT
    ),
    [_LOWER] = LAYOUT(
            KC_GRV, KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      _______,    KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11, KC_F12, _______,_______,
            _______,_cmd(KC_Q), _cmd(KC_W), _cmd(KC_E), _cmd(KC_R), _cmd(KC_T),             _cmd(KC_Y), _cmd(KC_U), _cmd(KC_I), _cmd(KC_O), _cmd(KC_P), _______,_______,_cmd(KC_BSPC),
            _______,_cmd(KC_A), _cmd(KC_S), _cmd(KC_D), _cmd(KC_F), _cmd(KC_G),             _cmd(KC_H), _cmd(KC_J), _cmd(KC_K), _cmd(KC_L), _______,    _______,_cmd(KC_ENT),
            _______,_cmd(KC_Z), _cmd(KC_X), _cmd(KC_C), _cmd(KC_V), _cmd(KC_B),     _______,_cmd(KC_N), _cmd(KC_M), _cmd(KC_M), _cmd(KC_COMM),_cmd(KC_SLSH),    _______,KC_PGUP,KC_RSFT,
            _______,_______,_______,_______,_______,                                        _______,    _______,    _______,    _______,            _______,    KC_HOME,KC_PGDN, KC_END
    ),
    [_RAISE] = LAYOUT(
            KC_TILD,KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,    _______,    KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    KC_UNDS, KC_PLUS,KC_PIPE,KC_TILD,
            _______,_sft(KC_Q), _sft(KC_W), _sft(KC_E), _sft(KC_R), _sft(KC_T),             _sft(KC_Y), _sft(KC_U), _sft(KC_I), _sft(KC_O), _sft(KC_P), KC_LCBR,KC_RCBR,_sft(KC_BSPC),
            _______,_sft(KC_A), _sft(KC_S), _sft(KC_D), _sft(KC_F), _sft(KC_G),             _sft(KC_H), _sft(KC_J), _sft(KC_K), _sft(KC_L), KC_PLUS,    KC_ASTR,_sft(KC_ENT),
            _______,_sft(KC_Z), _sft(KC_X), _sft(KC_C), _sft(KC_V), _sft(KC_B),     _______,_sft(KC_N), _sft(KC_M), KC_LABK,    KC_RABK,    KC_QUES,    _______,KC_PGUP,_______,
            _______,_______,_______,_______,_______,                                _______,    _______,    _______,    _______,        _______,KC_HOME,KC_PGDN,KC_END
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
