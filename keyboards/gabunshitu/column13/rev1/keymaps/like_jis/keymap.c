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
#include "keymap_jp.h"

enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _FUNCS
};

#define KL_EISU LT(_LOWER, KC_LANG2)
#define KS_KANA LSFT_T(KC_LANG1)
#define KL_TAB  LT(_FUNCS, KC_TAB)
#define KL_SPC  LT(_RAISE, KC_SPC)
#define KA_SPC  LALT_T(KC_SPC)
#define cmd(KC) LGUI(KC)
#define sft(KC) RSFT(KC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------.------------------------------------------------.
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  [{ |  ]}  |
 * |---------+------+------+------+------+------|------+------+------+------+------+----------|
 * |   Tab   |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |  ;:  |    BS   |
 * |---------+------+------+------+------+------|------+------+------+------+------+----------|
 * |   Shift     |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |  ,<  |  .>  |  Up  |  /?  |
 * |------------+------+------+------+------+------+-------------+------+------+------+-------|
 * |     Ctrl | GUI   | Del  | Alt    | Lower  | Raise  | Space   |Shift | Left | Down |Right |
 * `----------------------------------------------------------------------------------+-------'
 */
[_QWERTY] = LAYOUT(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    JP_MINS, KC_BSPC,
    KL_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    JP_AT,   KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_NO,
    KC_LCTL, KC_LGUI, KC_DEL,  KA_SPC,  KL_EISU,         KL_SPC,  KS_KANA, KC_BSLS, KC_LEFT, KC_DOWN, KC_RGHT
),
/* Lower
 * ,-----------------------------------------.------------------------------------------------.
 * |   ^  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  -_  |  =+  |
 * |---------+------+------+------+------+------|------+------+------+------+------+----------|
 * |   Tab   |  c-A |  c-S |  c-D |  c-F |  c-G |  c-H |  c-J |  c-K |  c-L |  '"  | Enter    |
 * |---------+------+------+------+------+------|------+------+------+------+------+----------|
 * |    Shift    |  c-Z |  c-X |  c-C |  c-V |  c-B |  c-N |  c-M |  ,<  |  .>  | PgUp |  \|  |
 * |------------+------+------+------+------+------+-------------+------+------+------+-------|
 * |     Ctrl | GUI   | Del  | Alt    | Lower  | Raise  | Space   |Shift | Left | Down |Right |
 * `----------------------------------------------------------------------------------+-------'
 */
[_LOWER] = LAYOUT(
    _______,cmd(KC_Q),  cmd(KC_W),  cmd(KC_E),  cmd(KC_R),  cmd(KC_T),  cmd(KC_Y),  cmd(KC_U),  cmd(KC_I),  cmd(KC_O),  cmd(KC_P),  JP_CIRC,   _______,
    _______,cmd(KC_A),  cmd(KC_S),  cmd(KC_D),  cmd(KC_F),  cmd(KC_G),  cmd(KC_H),  cmd(KC_J),  cmd(KC_K),  cmd(KC_L),  JP_COLN,    _______,
    _______,cmd(KC_Z),  cmd(KC_X),  cmd(KC_C),  cmd(KC_V),  cmd(KC_B),  cmd(KC_N),  cmd(KC_M),  JP_LCBR,    JP_RCBR,    KC_PGUP,    _______,
    _______,_______,    _______,    _______,    _______,                _______,    _______,    JP_YEN,     KC_HOME,    KC_PGDN,    KC_END
),
/* Raise
 * ,-----------------------------------------.-----------------------------------------------.
 * |  Esc  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | F11 | F12 |
 * |---------+------+------+------+------+------|------+------+------+------+------+---------|
 * |   Tab   |  c-A |  c-S |  c-D |  c-F |  c-G |  c-H |  c-J |  c-K |  c-L |  '"  | Enter   |
 * |---------+------+------+------+------+------|------+------+------+------+------+---------|
 * |   Shift    |  c-Z |  c-X |  c-C |  c-V |  c-B |  c-N |  c-M |  ,<  |  .>  | PgUp |  \|  |
 * |------------+------+------+------+------+------+-------------+------+------+------+------|
 * |     Ctrl | GUI   | Del  | Lower  | Space  | Space  | Raise  |Shift | Home | PgDn | End  |
 * `----------------------------------------------------------------------------------+------'
 */
[_RAISE] = LAYOUT(
    _______,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   JP_CIRC, _______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,JP_SCLN,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,JP_LBRC,JP_RBRC,KC_PGUP,_______,
    _______,_______,_______,_______,_______,        KC_ENT, _______,JP_BSLS,KC_HOME,KC_PGDN,KC_END
),
[_FUNCS] = LAYOUT(
    _______,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,
    _______,RESET,  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,RGB_TOG,RGB_SAI,RGB_VAI,RGB_SAD,
    _______,_______,_______,_______,_______,        _______,_______,RGB_TOG,RGB_HUI,RGB_VAD,RGB_HUD
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
