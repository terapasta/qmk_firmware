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
    _ADJUST
};

#define KL_EISU LT(_LOWER, KC_LANG2)
#define KL_KANA LT(_RAISE, KC_LANG1)
#define KL_ZENH LT(_ADJUST,KC_ZKHK)
#define KC_FN_1 KC_F3
#define KC_FN_2 LSFT(KC_F3)
#define KC_FN_3 KC_SPC
#define KC_FN_4 KC_SPC
#define KC_FN_5 KC_SPC
#define KC_FN_6 KC_SPC
#define KC_FN_7 KC_SPC

#define cmd(kc) LCTL(kc)
#define sft(kc) RSFT(kc)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
//      k101,   k102,   k103,   k104,   k105,   k106,   k107,   k111,   k112,   k113,       k121,   k122,   k123,   k124,   k125,   k126,
        KC_ESC, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_PSCR,KC_SLCK,KC_PAUS,    KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,
//      k201,   k202,   k203,   k204,   k205,   k206,           k211,   k212,   k213,       k221,   k222,   k223,   k224,   k225,   k226,   k227,   k228,   k229,
        KL_ZENH,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,           KC_INS, KC_HOME,KC_PGUP,    KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   JP_MINS,JP_CIRC,JP_YEN, KC_BSPC,
//      k301,   k302,   k303,   k304,   k305,   k306,           k311,   k312,   k313,       k321,   k322,   k323,   k324,   k325,   k326,   k327,   k328,
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,           KC_DEL, KC_END, KC_PGDN,    KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   JP_AT,  JP_RBRC,JP_LBRC,
//      k401,   k402,   k403,   k404,   k405,   k406,                                       k421,   k422,   k423,   k424,   k425,   k426,   k427,
        KC_CAPS,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                                       KC_H,   KC_J,   KC_K,   KC_L,   JP_SCLN,JP_COLN,KC_ENT,
//      k501,   k502,   k503,   k504,   k505,   k506,           k511,   k512,   k513,       k521,   k522,   k523,   k524,   k525,   k526,   k527,
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,           KC_FN_1,KC_UP,  KC_FN_2,    KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,JP_BSLS,KC_RSFT,
//      k601,   k602,   k603,   k604,   k605,   k606,           k611,   k612,   k613,       k621,   k622,   k623,   k624,   k625,   k626,   k627
        KC_LCTL,KC_LGUI,KC_LALT,KC_LALT,KL_EISU,KC_SPC,         KC_LEFT,KC_DOWN,KC_RIGHT,   KC_SPC, KL_KANA,KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO
    ),
    [_LOWER] = LAYOUT(
//      k101,   k102,       k103,       k104,       k105,       k106,   k107,       k111,   k112,   k113,       k121,       k122,       k123,           k124,       k125,           k126,
        _______,_______,    _______,    _______,    _______,    _______,_______,    _______,_______,_______,    _______,    _______,    _______,        _______,    _______,        _______,
//      k201,   k202,       k203,       k204,       k205,       k206,               k211,   k212,   k213,       k221,       k222,       k223,           k224,       k225,           k226,       k227,       k228,       k229,
        _______,cmd(KC_1),  cmd(KC_2),  cmd(KC_3),  cmd(KC_4),  cmd(KC_5),          _______,_______,_______,    cmd(KC_6),  cmd(KC_7),  cmd(KC_8),      cmd(KC_9),  cmd(KC_0),      _______,    _______,    _______,    _______,
//      k301,   k302,       k303,       k304,       k305,       k306,               k311,   k312,   k313,       k321,       k322,       k323,           k324,       k325,           k326,       k327,       k328,
        _______,cmd(KC_Q),  cmd(KC_W),  cmd(KC_E),  cmd(KC_R),  cmd(KC_T),          _______,_______,_______,    cmd(KC_Y),  cmd(KC_U),  cmd(KC_I),      cmd(KC_O),  cmd(KC_P),      _______,    _______,    _______,
//      k401,   k402,       k403,       k404,       k405,       k406,                                           k421,       k422,       k423,           k424,       k425,           k426,       k427,
        _______,cmd(KC_A),  cmd(KC_S),  cmd(KC_D),  cmd(KC_F),  cmd(KC_G),                                      cmd(KC_H),  cmd(KC_J),  cmd(KC_K),      cmd(KC_L),  _______,        _______,    cmd(KC_ENT),
//      k501,   k502,       k503,       k504,       k505,       k506,               k511,   k512,   k513,       k521,       k522,       k523,           k524,       k525,           k526,       k527,
        _______,cmd(KC_Z),  cmd(KC_X),  cmd(KC_C),  cmd(KC_V),  cmd(KC_B),          _______,KC_PGUP,_______,    cmd(KC_N),  cmd(KC_M),  _______,        _______,    _______,        _______,    _______,
//      k601,   k602,       k603,       k604,       k605,       k606,               k611,   k612,   k613,       k621,       k622,       k623,           k624,       k625,           k626,       k627
        _______,_______,    _______,    _______,    _______,    _______,            KC_HOME,KC_PGDN,KC_END,     _______,    _______,    KC_FN_3,        KC_FN_4,    KC_FN_5,        KC_FN_6,    KC_FN_7
    ),
    [_RAISE] = LAYOUT(
//      k101,   k102,       k103,       k104,       k105,       k106,   k107,       k111,   k112,   k113,       k121,       k122,       k123,       k124,       k125,       k126,
        _______,_______,    _______,    _______,    _______,    _______,_______,    _______,_______,_______,    _______,    _______,    _______,    _______,    _______,    _______,
//      k201,   k202,       k203,       k204,       k205,       k206,               k211,   k212,   k213,       k221,       k222,       k223,       k224,       k225,       k226,       k227,       k228,       k229,
        _______,KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,            _______,_______,_______,    KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    JP_EQL,     JP_TILD,    JP_PIPE,    sft(KC_BSPC),
//      k301,   k302,       k303,       k304,       k305,       k306,               k311,   k312,   k313,       k321,       k322,       k323,       k324,       k325,       k326,       k327,       k328,
        _______,sft(KC_Q),  sft(KC_W),  sft(KC_E),  sft(KC_R),  sft(KC_T),          _______,_______,_______,    sft(KC_Y),  sft(KC_U),  sft(KC_I),  sft(KC_O),  sft(KC_P),  JP_GRV,     JP_RCBR,    JP_LCBR,
//      k401,   k402,       k403,       k404,       k405,       k406,                                           k421,       k422,       k423,       k424,       k425,       k426,       k427,
        _______,sft(KC_A),  sft(KC_S),  sft(KC_D),  sft(KC_F),  sft(KC_G),                                      sft(KC_H),  sft(KC_J),  sft(KC_K),  sft(KC_L),  JP_PLUS,    JP_ASTR,    sft(KC_ENT),
//      k501,   k502,       k503,       k504,       k505,       k506,               k511,   k512,   k513,       k521,       k522,       k523,       k524,       k525,       k526,       k527,
        _______,sft(KC_Z),  sft(KC_X),  sft(KC_C),  sft(KC_V),  sft(KC_B),          _______,KC_PGUP,_______,    sft(KC_N),  sft(KC_M),  KC_LABK,    KC_RABK,    KC_QUES,    JP_UNDS,    _______,
//      k601,   k602,       k603,       k604,       k605,       k606,               k611,   k612,   k613,       k621,       k622,       k623,       k624,       k625,       k626,       k627
        _______,_______,    _______,    _______,    _______,    _______,            KC_HOME,KC_PGDN,KC_END,     _______,    _______,    KC_FN_3,    KC_FN_4,    KC_FN_5,    KC_FN_6,    KC_FN_7
    ),
    [_ADJUST] = LAYOUT(
//      k101,   k102,   k103,   k104,   k105,   k106,   k107,   k111,   k112,   k113,       k121,   k122,   k123,   k124,   k125,   k126,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,    _______,_______,_______,_______,_______,_______,
//      k201,   k202,   k203,   k204,   k205,   k206,           k211,   k212,   k213,       k221,   k222,   k223,   k224,   k225,   k226,   k227,   k228,   k229,
        _______,_______,_______,_______,_______,_______,        _______,_______,_______,    _______,_______,_______,_______,_______,_______,_______,_______,_______,
//      k301,   k302,   k303,   k304,   k305,   k306,           k311,   k312,   k313,       k321,   k322,   k323,   k324,   k325,   k216,   k327,   k328,
        _______,_______,_______,_______,_______,_______,        _______,_______,_______,    _______,_______,_______,_______,_______,_______,_______,_______,
//      k401,   k402,   k403,   k404,   k405,   k406,                                       K421,   k422,   k423,   k424,   k425,   k426,   k427,
        _______,_______,_______,_______,_______,_______,                                    _______,_______,_______,_______,_______,_______,_______,
//      k501,   k502,   k503,   k504,   k505,   k506,           k511, k512, k513,           k521,   k522,   k523,   k524,   k525,   k526,   k527,
        _______,_______,_______,_______,_______,_______,        _______,_______,_______,    _______,_______,_______,_______,_______,_______,_______,
//      k601,   k602,   k603,   k604,   k605,   k606,           k611, k612, k613,           k621,   k622,   k623,   k624,   k625,   k626,   k627,
        _______,_______,_______,_______,_______,_______,        _______,_______,_______,    _______,_______,_______,_______,_______,_______,_______
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
