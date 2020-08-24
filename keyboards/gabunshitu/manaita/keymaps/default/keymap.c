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


// Defines names for use in layer keycodes and the keymap
enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
};

#define KL_EISU LT(_LOWER, KC_LANG2)
#define KL_KANA LT(_RAISE, KC_LANG1)
#define KS_KANA RSFT_T(KC_LANG1)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
//        KC_ESC, KC_F1,  KC_F2,  KC_F3,  KC_F4,                      KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,             KC_NO,  KC_NO,
//        KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_NO,      KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   JP_MINS,JP_EQL, JP_YEN, KC_BSPC,    KC_NO,  KC_NO,
//        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,               KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   JP_AT,  JP_LBRC,KC_ENT,             KC_NO,  KC_NO,
//        KC_LCTL,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,               KC_H,   KC_J,   KC_K,   KC_L,   JP_SCLN,JP_QUOT,JP_RBRC,                            KC_PGUP,
//        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,       KC_NO,  KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,JP_BSLS,KC_RSFT,                    KC_UP,  KC_PGDN,
//        KC_NO,  KC_LALT,KC_LGUI,KL_EISU,                            KL_KANA,KC_RGUI,                                                    KC_LEFT,KC_DOWN,KC_RIGHT,
//                                        KC_LGUI,KC_SPC, KC_RSFT
    KC_0, KC_1,  KC_2,  KC_3,  KC_4,                      KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0, KC_A, KC_B,             KC_C,  KC_D,
    KC_A, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_Z,      KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   JP_MINS,JP_EQL, JP_YEN, KC_BSPC,    KC_E,  KC_F,
    KC_B, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,               KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   JP_AT,  JP_LBRC,KC_ENT,             KC_G,  KC_H,
    KC_C,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,               KC_H,   KC_J,   KC_K,   KC_L,   JP_SCLN,JP_QUOT,JP_RBRC,                            KC_I,
    KC_D,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,       KC_NO,  KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,JP_BSLS,KC_RSFT,                    KC_UP,  KC_J,
    KC_E,  KC_F,KC_G,KC_H,                            KC_I,KC_J,                                                    KC_LEFT,KC_DOWN,KC_RIGHT,
    KC_K,KC_L, KC_M
    ),
    [_LOWER] = LAYOUT(
        _______,_______,_______,_______,_______,                    _______,_______,_______,_______,_______,_______,_______,_______,            _______,_______,
        _______,_______,_______,_______,_______,_______,_______,    _______,_______,_______,_______,_______,_______,_______,_______,_______,    _______,_______,
        _______,_______,_______,_______,_______,_______,            _______,_______,_______,_______,_______,_______,_______,_______,            _______,_______,
        _______,_______,_______,_______,_______,_______,            _______,_______,_______,_______,_______,_______,_______,                            _______,
        _______,_______,_______,_______,_______,_______,    _______,_______,_______,_______,_______,_______,_______,_______,                    KC_PGUP,_______,
        _______,_______,_______,_______,                            _______,_______,                                                    KC_HOME,KC_PGDN,KC_END,
                                        _______,_______,_______
    ),
    [_RAISE] = LAYOUT(
        _______,_______,_______,_______,_______,                    _______,_______,_______,_______,_______,_______,_______,_______,            _______,_______,
        _______,_______,_______,_______,_______,_______,_______,    _______,_______,_______,_______,_______,_______,_______,_______,_______,    _______,_______,
        _______,_______,_______,_______,_______,_______,            _______,_______,_______,_______,_______,_______,_______,_______,            _______,_______,
        _______,_______,_______,_______,_______,_______,            _______,_______,_______,_______,_______,_______,_______,                            _______,
        _______,_______,_______,_______,_______,_______,    _______,_______,_______,_______,_______,_______,_______,_______,                    KC_PGUP,_______,
        _______,_______,_______,_______,                            _______,_______,                                                    KC_HOME,KC_PGDN,KC_END,
                                        _______,_______,_______
    )
};
