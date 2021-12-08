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
    _FUNCS
};

#define KL_EISU LT(_LOWER, KC_LANG2)
#define KL_KANA LT(_RAISE, KC_LANG1)

#define cmd(kc) LGUI(kc)
//#define cmd(kc) LCTL(kc)
#define sft(kc) RSFT(kc)

#define RC_F3 RSFT(KC_F3)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_1,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC,
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_2,   KC_6,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,
        MO(_FUNCS),KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_3,   KC_7,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_ENT,
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_4,   KC_8,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,
        KC_LCTL,KC_LGUI,KC_LALT,KL_EISU,KC_SPC, KL_KANA,KC_RALT,KC_RGUI,KC_APP, KC_RCTL
        ),
    [_LOWER] = LAYOUT(
        KC_GRV, cmd(KC_1),  cmd(KC_2),  cmd(KC_3),  cmd(KC_4),  cmd(KC_5),  KC_9,   KC_F3,  cmd(KC_6),  cmd(KC_7),  cmd(KC_8),      cmd(KC_9),      cmd(KC_0),      cmd(KC_MINS),   cmd(KC_EQL),    cmd(KC_BSPC),
        _______,cmd(KC_Q),  cmd(KC_W),  cmd(KC_E),  cmd(KC_R),  cmd(KC_T),  KC_0,   KC_F4,  cmd(KC_Y),  cmd(KC_U),  cmd(KC_I),      cmd(KC_O),      cmd(KC_P),      cmd(KC_LBRC),   cmd(KC_RBRC),   cmd(KC_BSLS),
        _______,cmd(KC_A),  cmd(KC_S),  cmd(KC_D),  cmd(KC_F),  cmd(KC_G),  KC_F1,  KC_F5,  cmd(KC_H),  cmd(KC_J),  cmd(KC_K),      cmd(KC_L),      cmd(KC_SCLN),   cmd(KC_QUOT),   cmd(KC_ENT),
        _______,cmd(KC_Z),  cmd(KC_X),  cmd(KC_C),  cmd(KC_V),  cmd(KC_B),  KC_F2,  KC_F6,  cmd(KC_N),  cmd(KC_M),  cmd(KC_COMM),   cmd(KC_DOT),    cmd(KC_SLSH),   _______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______
        ),
    [_RAISE] = LAYOUT(
        KC_TILD,KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,    KC_F7,  KC_F11,  KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    KC_UNDS,   KC_PLUS,    sft(KC_BSPC),
        _______,sft(KC_Q),  sft(KC_W),  sft(KC_E),  sft(KC_R),  sft(KC_T),  KC_F8,  KC_F12,  sft(KC_Y),  sft(KC_U),  sft(KC_I),  sft(KC_O),  sft(KC_P),  KC_LCBR,   KC_RCBR,    KC_PIPE,
        _______,sft(KC_A),  sft(KC_S),  sft(KC_D),  sft(KC_F),  sft(KC_G),  KC_F9,  KC_F13,  sft(KC_H),  sft(KC_J),  sft(KC_K),  sft(KC_L),  KC_COLN,    KC_DQUO,   sft(KC_ENT),
        _______,sft(KC_Z),  sft(KC_X),  sft(KC_C),  sft(KC_V),  sft(KC_B),  KC_F10, KC_F14,  sft(KC_N),  sft(KC_M),  KC_LABK,    KC_RABK,    KC_QUES,    _______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______
        ),
    [_FUNCS] = LAYOUT(
        _______,KC_F1,          KC_F2,  KC_F3,  KC_F4,          KC_F5,  _______,_______,KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, _______,
        _______,_______,        _______,KC_UP,  KC_PGUP,        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,LALT(KC_LEFT),  KC_LEFT,KC_RGHT,LALT(KC_RGHT),  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,        KC_DOWN,KC_PGDN,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______
        )
};
