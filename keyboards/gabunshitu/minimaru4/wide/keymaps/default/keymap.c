/* Copyright 2021 ABplus Inc.
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

#define KL_ESC LT(_FUNCS, KC_ESC)

#define KL_R MO(_RAISE)
#define KL_L MO(_LOWER)

#define CMD_Z LGUI(KC_Z)
#define CMD_X LGUI(KC_X)
#define CMD_C LGUI(KC_C)
#define CMD_V LGUI(KC_V)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT(
    KL_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_SPC,  KC_SPC,          CMD_Z,  CMD_X,  CMD_C,  CMD_V,                  KC_SPC,  KC_SPC, KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_SPC,  KC_SPC,          KC_PGUP,                KC_UP,                  KC_SPC,  KC_SPC, KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_SPC,  KC_SPC,  KC_HOME,KC_DEL, KC_END, KC_LEFT,KC_ESC, KC_RGHT,        KC_SPC,  KC_SPC, KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, KC_INS,  KC_DEL,  KC_LANG2,KL_R,    KC_SPC,          KC_PGDN,                KC_DOWN,                KC_SPC,  KL_L,   KC_LANG1,KC_SPC,  KC_LEFT, KC_UP,  KC_DOWN, KC_RGHT
),

[_LOWER] = LAYOUT(
    KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   _______,_______,            _______,_______,_______,_______,            _______,_______,KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   _______,
    _______,_______,_______,_______,_______,_______,_______,_______,            _______,                _______,            _______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,    _______,_______,_______,_______,_______,_______,    _______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,            _______,                _______,            _______,_______,_______,_______,_______,_______,_______,_______
),

[_RAISE] = LAYOUT(
    KC_TILD,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  _______,            _______,_______,_______,_______,            _______,KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, _______,
    _______,_______,_______,_______,_______,_______,_______,_______,            _______,                _______,            _______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,    _______,_______,_______,_______,_______,_______,    _______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,            _______,                _______,            _______,_______,_______,_______,_______,_______,_______,_______
),

[_FUNC] =  LAYOUT(

    _______,RESET,  _______,_______,_______,_______,_______,_______,            _______,_______,_______,_______,            _______,KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, _______,
    _______,AU_ON,  AU_OFF, MU_TOG, MU_MOD, AG_NORM,AG_SWAP,_______,            _______,                _______,            _______,_______,_______,_______,_______,_______,_______,_______,
    _______,CK_TOGG,CK_RST, CK_UP,  CK_DOWN,_______,_______,_______,    _______,_______,_______,_______,_______,_______,    _______,_______,_______,_______,RGB_TOG,RGB_HUI,RGB_SAI,RGB_VAI,
    _______,_______,_______,_______,_______,_______,_______,_______,            _______,                _______,            _______,_______,_______,_______,RGB_MOD,RGB_HUD,RGB_SAD,RGB_VAD
)
};