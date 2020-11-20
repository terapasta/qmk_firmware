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

// Defines names for use in layer keycodes and the keymap
enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE
};

#define KL_EISU LT(_LOWER, KC_LANG2)
#define KL_KANA LT(_RAISE, KC_LANG1)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 *        ,------------------------------------------------.-------------------------------------------------------.
 *        | Esc  | ^~   |  1!  |  2@  |  3#  |  4$  |  5%  |  6^  |  7&  |  8*  |  9(  |  0)  |  -_  |  =+  | Bksp |
 *        |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 *        |      | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  [{  |  ]}  |  \|  |
 *        |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 *        |      | Caps |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |Enter | PgUp |
 *        |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 *        |      | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |  ,<  |  .>  |  /?  |Shift |  Up  | PgDn |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ent  |      | Alt  | GUI  | Alt  |      |Lower |Space |Space |Raise |      | Home | End  | Left | Down |Right |
 * `---------------------------------------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT(
            KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
            KC_NO,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
            KC_NO,   KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_PGUP,
            KC_NO,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT , KC_UP,   KC_PGDN,
    KC_ENT, KC_NO,   KC_LCTL, KC_LGUI, KC_LALT, KC_NO,   KL_EISU, KC_SPC, KC_SPC,  KL_KANA, KC_NO,   KC_HOME, KC_END,  KC_LEFT, KC_DOWN, KC_RGHT
//            KC_0,    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_S,
//            KC_1,    KC_2,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
//            KC_3,    KC_4, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_Q,  KC_R,
//            KC_5,    KC_6, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_N , KC_O,   KC_P,
//    KC_7,   KC_8,    KC_9, KC_A, KC_B, KC_C, KC_D, KC_E, KC_F,  KC_G, KC_H,  KC_I, KC_J,  KC_K, KC_L, KC_M
),

/* Lower
 *        ,------------------------------------------------.-------------------------------------------------------.
 *        | Esc  | ^~   |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | F11  | F12  | Bksp |
 *        |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 *        |      | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  [{  |  ]}  |  \|  |
 *        |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 *        |      | Caps |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |Enter | PgUp |
 *        |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 *        |      | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |  ,<  |  .>  |  /?  |Shift |  Up  | PgDn |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ent  |      | Alt  | GUI  | Alt  |      |Lower |Space |Space |Raise |      | Home | End  | Left | Down |Right |
 * `---------------------------------------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT(
            _______, _______, KC_F1,  KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
            _______, _______,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
            _______, _______,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
            _______, _______,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______,
    _______,_______, _______,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_END
),

/* Raise
 *        ,------------------------------------------------.-------------------------------------------------------.
 *        | Esc  | ^~   |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | F11  | F12  | Bksp |
 *        |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 *        |      | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  [{  |  ]}  |  \|  |
 *        |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 *        |      | Caps |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |Enter | PgUp |
 *        |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 *        |      | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |  ,<  |  .>  |  /?  |Shift |  Up  | PgDn |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ent  |      | Alt  | GUI  | Alt  |      |Lower |Space |Space |Raise |      | Home | End  | Left | Down |Right |
 * `---------------------------------------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT(
            _______, _______, KC_F1,  KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
            _______, _______,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
            _______, _______,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
            _______, _______,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______,
    _______,_______, _______,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_END
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
