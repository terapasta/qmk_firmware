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

// Defines names for use in layer keycodes and the keymap
enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _ADJUST
};

#define KL_EISU LT(_LOWER, KC_LANG2)
#define KL_KANA LT(_RAISE, KC_LANG1)
#define ADJUST LT(_ADJUST, KC_TAB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------.-------------------------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |      |      |      |      |      |      |   Y  |   U  |   I  |   O  |   P  |   -  |   =  | Bksp |
 * |------+------+------+------+------+------|-------------+-------------+------+------+------+------+------+------+------+------+------+------|
 * |Adjust|   A  |   S  |   D  |   F  |   G  |      |      |      |      |      |      |   H  |   J  |   K  |   L  |   ;  |  '   |Enter | PgUp |
 * |------+------+------+------+------+------|-------------+-------------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |      |      |      |      |      |      |   N  |   M  |   ,  |   .  |   /  |Shift |  Up  | PgDn |
 * |------+------+------+------+------+------+-------------+-------------+-------------+------+------+------+------+------+------+------+------|
 * | Ctrl | GUI  | Alt  |Insert|Delete| EISU |Space |      |      |      |      |Space | KANA |   `  |   [  |  ]   |   \  | Left | Down | Right|
 * `-------------------------------------------------------+-------------+---------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    ADJUST,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_PGUP,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_PGDN,
    KC_LCTL, KC_LGUI, KC_LALT, KC_INS,  KC_DEL,  KC_SPC,  KL_EISU, KC_SPC,  KC_NO,   KC_NO,   KC_SPC,  KL_KANA, KC_BSLS, KC_GRV,  KC_MINS, KC_K,  KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
),

[_LOWER] = LAYOUT(
    KC_TAB,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______, _______, _______, _______, _______, _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______, _______, KC_DEL,
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, _______, _______,
    _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______,
    _______, _______, _______, KC_F11,  KC_F12,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_END
),

[_RAISE] = LAYOUT(
    KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______, _______, _______, _______, _______, _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, _______, KC_DEL,
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, _______, _______,
    _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______,
    _______, _______, _______, KC_F11,  KC_F12,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_END
),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------.-----------------------------------------.
 * |      | Reset|RGBRST|      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |Aud on|Audoff|MU TOG|MU MOD| Mac  | Win  |Qwerty|Colemk|Dvorak|      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |CK TOG|CK RST| CK UP|CK DWN|      |      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] =  LAYOUT(
    _______, RESET,   _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______, _______, _______, _______,
    _______, AU_ON,   AU_OFF,  MU_TOG,  MU_MOD,  AG_NORM, AG_SWAP, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______,
    _______, CK_TOGG, CK_RST,  CK_UP,   CK_DOWN, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD
)
};