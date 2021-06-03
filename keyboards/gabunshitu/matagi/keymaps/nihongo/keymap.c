#include QMK_KEYBOARD_H
#include "keymap_jp.h"

enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _FUNCS,
};

#define KL_EISU LT(_LOWER, KC_LANG2)
#define KS_KANA RSFT_T(KC_LANG1)

#define c(kc) LGUI(kc)
//#define cmd(kc) LCTL(kc)
#define s(kc) LSFT(kc)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(
        KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,           KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   JP_MINS,JP_CIRC, JP_YEN,KC_BSPC,
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,           KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   JP_AT,JP_RBRC,JP_LBRC,
        KC_LCTL,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,           KC_H,   KC_J,   KC_K,   KC_L,   JP_SCLN,JP_COLN,KC_ENT,
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,           KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,JP_BSLS,KC_UP,  KC_DEL,
        KC_LCTL,KC_LALT,KC_LGUI, KL_EISU,                KC_SPC, KS_KANA,KC_RALT,KC_RGUI,              KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_LOWER] = LAYOUT(
        KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,          KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, _______, c(KC_BSPC),
        _______,c(KC_Q),c(KC_W),c(KC_E),c(KC_R),c(KC_T),        c(KC_Y),c(KC_U),c(KC_I),c(KC_O),c(KC_P),   c(KC_LBRC),c(KC_RBRC),_______,
        _______,c(KC_A),c(KC_S),c(KC_D),c(KC_F),c(KC_G),        c(KC_H),c(KC_J),c(KC_K),c(KC_L),c(KC_SCLN),c(KC_QUOT),c(KC_ENT),
        _______,c(KC_Z),c(KC_X),c(KC_C),c(KC_V),c(KC_B),        c(KC_N),c(KC_M),c(KC_COMM),c(KC_DOT), c(KC_SLSH),_______,KC_PGUP,c(KC_DEL),
        _______,_______,_______,_______,                c(KC_SPC), _______,_______,_______,                     KC_HOME, KC_PGDN, KC_END
    ),
    [_RAISE] = LAYOUT(
        KC_TILD,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,          KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, _______, s(KC_BSPC),
        _______,s(KC_Q),s(KC_W),s(KC_E),s(KC_R),s(KC_T),        s(KC_Y),s(KC_U),s(KC_I),s(KC_O),s(KC_P),   s(KC_LBRC),s(KC_RBRC),_______,
        _______,s(KC_A),s(KC_S),s(KC_D),s(KC_F),s(KC_G),        s(KC_H),s(KC_J),s(KC_K),s(KC_L),s(KC_SCLN),s(KC_QUOT),s(KC_ENT),
        _______,s(KC_Z),s(KC_X),s(KC_C),s(KC_V),s(KC_B),        s(KC_N),s(KC_M),s(KC_COMM),s(KC_DOT), s(KC_SLSH),_______,s(KC_PGUP),s(KC_DEL),
        _______,_______,_______,_______,                s(KC_SPC), _______,_______,_______,                     s(KC_LEFT), s(KC_DOWN), s(KC_RGHT)
    ),
    [_FUNCS] = LAYOUT(
        _______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,                _______,_______,_______,_______,                _______,_______,_______
    )
};
