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


#define CMD_Z LGUI(KC_Z)
#define CMD_X LGUI(KC_X)
#define CMD_C LGUI(KC_C)
#define CMD_V LGUI(KC_V)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Base */
[_QWERTY] = LAYOUT(
            CMD_Z,  CMD_X,  CMD_C,  CMD_V,
            KC_PGUP,                    KC_UP,
    KC_HOME,KC_DEL, KC_END,     KC_LEFT,KC_ESC, KC_RIGHT,
            KC_PGDN,                    KC_DOWN
    ),
    [_LOWER] = LAYOUT(
        _______,_______,_______,_______,
                _______,                _______,
        _______,_______,_______,_______,_______,_______,
                _______,                _______
    ),
    [_RAISE] = LAYOUT(
        _______,_______,_______,_______,
        _______,                _______,
        _______,_______,_______,_______,_______,_______,
        _______,                _______
    ),
    [_FUNCS] = LAYOUT(
        _______,_______,_______,_______,
        _______,                _______,
        _______,_______,_______,_______,_______,_______,
        _______,                _______
    )
};
