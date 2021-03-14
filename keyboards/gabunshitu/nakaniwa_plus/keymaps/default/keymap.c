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

#define cmd(kc) LGUI(kc)
//#define cmd(kc) LCTL(kc)
#define sft(kc) RSFT(kc)

#define RC_F3 RSFT(KC_F3)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT(
        KC_ESC,     KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,       KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC,        KC_INS, KC_HOME,
        KC_TAB,     KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,               KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,        KC_DEL, KC_END,
        KC_LCTL,    KC_A,   KC_S,   KC_D,   KC_F,   KC_G,               KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_ENT,                 KC_PSCR,KC_PGUP,
        KC_LSFT,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,       KC_B, KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,                        KC_UP,  KC_PGDN,
        KC_LCTRL,   KC_LALT,KC_LGUI,KC_DEL,KC_SPC,KL_EISU,              KL_KANA,KC_SPC,                                                 KC_LEFT,KC_DOWN,KC_RIGHT,

        KC_LALT, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11,  KC_F12,
        KC_LSFT, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0
),
[_LOWER] = LAYOUT(
        KC_GRV, KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      _______,    KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,      KC_F12,      cmd(KC_BSPC),                     cmd(KC_INS), cmd(KC_HOME),
        _______,cmd(KC_Q),  cmd(KC_W),  cmd(KC_E),  cmd(KC_R),  cmd(KC_T),              cmd(KC_Y),  cmd(KC_U),  cmd(KC_I),  cmd(KC_O),  cmd(KC_P),  cmd(KC_LBRC),cmd(KC_RBRC),cmd(KC_BSLS),                     cmd(KC_DEL), cmd(KC_END),
        _______,cmd(KC_A),  cmd(KC_S),  cmd(KC_D),  cmd(KC_F),  cmd(KC_G),              cmd(KC_H),  cmd(KC_J),  cmd(KC_K),  cmd(KC_L),  cmd(KC_SCLN),cmd(KC_QUOT),cmd(KC_ENT),                                  cmd(KC_PSCR),cmd(KC_PGUP),
        _______,cmd(KC_Z),  cmd(KC_X),  cmd(KC_C),  cmd(KC_V),  cmd(KC_B),     _______, cmd(KC_N),  cmd(KC_M),  cmd(KC_COMM),cmd(KC_DOT),cmd(KC_SLSH),cmd(KC_RSFT),                                             cmd(KC_UP),  cmd(KC_PGDN),
        _______,_______,_______,_______,_______,_______,                                _______,    _______,                                                                                        cmd(KC_LEFT),cmd(KC_DOWN),cmd(KC_RGHT),

        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______
),
[_RAISE] = LAYOUT(
        KC_TILD,KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,    _______,    KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    KC_UNDS, KC_PLUS,sft(KC_BSPC),                              sft(KC_INS), sft(KC_HOME),
        _______,sft(KC_Q),  sft(KC_W),  sft(KC_E),  sft(KC_R),  sft(KC_T),              sft(KC_Y),  sft(KC_U),  sft(KC_I),  sft(KC_O),  sft(KC_P),  KC_LCBR,KC_RCBR,KC_PIPE,                                    sft(KC_DEL), sft(KC_END),
        _______,sft(KC_A),  sft(KC_S),  sft(KC_D),  sft(KC_F),  sft(KC_G),              sft(KC_H),  sft(KC_J),  sft(KC_K),  sft(KC_L),  KC_PLUS,    KC_ASTR,sft(KC_ENT),                                        sft(KC_PSCR),sft(KC_PGUP),
        _______,sft(KC_Z),  sft(KC_X),  sft(KC_C),  sft(KC_V),  sft(KC_B),     _______, sft(KC_N),  sft(KC_M),  sft(KC_COMM),sft(KC_DOT),sft(KC_SLSH),sft(KC_RSFT),                                             sft(KC_UP),  sft(KC_PGDN),
        _______,_______,_______,_______,_______,_______,                                _______,    _______,                                                                                        sft(KC_LEFT),sft(KC_DOWN),sft(KC_RGHT),

        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______
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


