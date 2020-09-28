#include QMK_KEYBOARD_H
#include "keymap_jp.h"

enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
};

#define KL_EISU LT(_LOWER, KC_MHEN)
#define KL_KANA LT(_RAISE, KC_HENK)
#define KCMD(kc) LCTL(kc)
#define KL_SPC CTL_T(KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
            LALT(LCTL(KC_DEL)), KC_2, KC_3, KC_4,
            KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,           KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   JP_MINS,JP_CIRC,JP_YEN, KC_BSPC,
            KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,           KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   JP_AT,  JP_RBRC,JP_LBRC,
            KC_CAPS,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,           KC_H,   KC_J,   KC_K,   KC_L,   JP_SCLN,JP_COLN,KC_ENT,
            KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,           KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,JP_BSLS,KC_UP,  KC_RSFT,
            KC_LCTL,KC_LALT,KC_LALT,KC_LCTL,KL_EISU,                KL_KANA,KC_SPC,KC_LGUI,KC_LEFT,KC_DOWN,KC_RIGHT
    ),
    [_LOWER] = LAYOUT(
            _______,_______,_______,_______,
            KC_GRV, KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,          KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11, KC_F12, _______,_______,
            _______,KCMD(KC_Q), KCMD(KC_W), KCMD(KC_E), KCMD(KC_R), KCMD(KC_T),     KCMD(KC_Y), KCMD(KC_U), KCMD(KC_I), KCMD(KC_O), KCMD(KC_P), _______,_______,KCMD(KC_BSPC),
            _______,KCMD(KC_A), KCMD(KC_S), KCMD(KC_D), KCMD(KC_F), KCMD(KC_G),     KCMD(KC_H), KCMD(KC_J), KCMD(KC_K), KCMD(KC_L), _______,    _______,KCMD(KC_ENT),
            _______,KCMD(KC_Z), KCMD(KC_X), KCMD(KC_C), KCMD(KC_V), KCMD(KC_B),     KCMD(KC_N), KCMD(KC_M), KCMD(KC_M), KCMD(KC_COMM),KCMD(KC_SLSH),    _______,KC_PGUP,_______,
            _______,_______,_______,_______,_______,                                _______,    _______,    _______,    KC_HOME,KC_PGDN, KC_END
    ),
    [_RAISE] = LAYOUT(
            _______,_______,_______,_______,
            KC_TILD,KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,        KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    JP_EQL, JP_TILD,JP_PIPE,RSFT(KC_BSPC),
            _______,RSFT(KC_Q), RSFT(KC_W), RSFT(KC_E), RSFT(KC_R), RSFT(KC_T),     RSFT(KC_Y), RSFT(KC_U), RSFT(KC_I), RSFT(KC_O), RSFT(KC_P), JP_GRV, JP_RCBR,JP_LCBR,
            _______,RSFT(KC_A), RSFT(KC_S), RSFT(KC_D), RSFT(KC_F), RSFT(KC_G),     RSFT(KC_H), RSFT(KC_J), RSFT(KC_K), RSFT(KC_L), JP_PLUS,    JP_ASTR,RSFT(KC_ENT),
            _______,RSFT(KC_Z), RSFT(KC_X), RSFT(KC_C), RSFT(KC_V), RSFT(KC_B),     RSFT(KC_N), RSFT(KC_M), KC_LABK,    KC_RABK,    KC_QUES,    JP_UNDS,KC_PGUP,_______,
            _______,_______,_______,_______,_______,                                _______,    _______,    _______,KC_HOME,KC_PGDN,KC_END
    )
};
