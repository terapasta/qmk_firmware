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

enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _FUNCS,
    _ADJUST
};

#define KL_EISU LT(_LOWER, KC_LANG2)
#define KL_KANA RSFT_T(KC_LANG1)
#define KL_TAB LT(_FUNCS, KC_TAB)
#define ADJUST MO(_ADJUST)
#define cmd(KC) LGUI(KC)
#define sft(KC) RSFT(KC)
#define KC_CMD KC_LALT
#define KC_OPT KC_LGUI

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
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
    KL_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_BSPC,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_SLSH,
    KC_LCTL, KC_OPT, KC_DEL,  KC_CMD, KL_EISU,           KL_KANA, KC_SPC,  MO(_RAISE), KC_LEFT, KC_DOWN, KC_RGHT
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
    KC_GRV,  KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,         KC_9,        KC_0,    KC_MINS, KC_EQL,
    _______, cmd(KC_A), cmd(KC_S), cmd(KC_D), cmd(KC_F), cmd(KC_G), cmd(KC_H), cmd(KC_J), cmd(KC_K),    cmd(KC_L),   KC_QUOT, KC_ENT,
    _______, cmd(KC_Z), cmd(KC_X), cmd(KC_C), cmd(KC_V), cmd(KC_B), cmd(KC_N), cmd(KC_M), cmd(KC_COMM), cmd(KC_DOT), KC_PGUP, KC_SLSH,
    _______, _______,   _______,   _______,   _______,              _______,   _______,   _______,      KC_HOME,     KC_PGDN, KC_END
),

/* Raise
 * ,-----------------------------------------.-----------------------------------------------.
 * |  Esc  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |---------+------+------+------+------+------|------+------+------+------+------+---------|
 * |   Tab   |  c-A |  c-S |  c-D |  c-F |  c-G |  c-H |  c-J |  c-K |  c-L |  '"  | Enter   |
 * |---------+------+------+------+------+------|------+------+------+------+------+---------|
 * |   Shift    |  c-Z |  c-X |  c-C |  c-V |  c-B |  c-N |  c-M |  ,<  |  .>  | PgUp |  \|  |
 * |------------+------+------+------+------+------+-------------+------+------+------+------|
 * |     Ctrl | GUI   | Del  | Lower  | Space  | Space  | Raise  |Shift | Home | PgDn | End  |
 * `----------------------------------------------------------------------------------+------'
 */
[_RAISE] = LAYOUT(
    _______, sft(KC_Q), sft(KC_W), sft(KC_E), sft(KC_R), sft(KC_T), sft(KC_Y), sft(KC_U), sft(KC_I),    sft(KC_O),   sft(KC_P),    sft(KC_MINS), sft(KC_EQL),
    _______, sft(KC_A), sft(KC_S), sft(KC_D), sft(KC_F), sft(KC_G), sft(KC_H), sft(KC_J), sft(KC_K),    sft(KC_L),   sft(KC_QUOT), sft(KC_ENT),
    _______, sft(KC_Z), sft(KC_X), sft(KC_C), sft(KC_V), sft(KC_B), sft(KC_N), sft(KC_M), sft(KC_COMM), sft(KC_DOT), KC_PGUP,      sft(KC_SLSH),
    _______, _______,   _______,   _______,   _______,                _______,   _______,   _______,    KC_HOME,     KC_PGDN,      KC_END
),

[_FUNCS] = LAYOUT(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______
),

/* Adjust (Lower + Raise)
 */
[_ADJUST] =  LAYOUT(
    _______, RESET,   _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______,
    _______, AU_ON,   AU_OFF,  MU_TOG,  MU_MOD,  AG_NORM, AG_SWAP, _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,
    _______, CK_TOGG, CK_RST,  CK_UP,   CK_DOWN, _______, _______, _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,
    _______, _______, BL_TOGG, BL_BRTG, _______, _______, _______, _______, _______, _______, _______
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
