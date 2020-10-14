#include QMK_KEYBOARD_H
#include "keymap_jp.h"

enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
};

#define KL_EISU LT(_LOWER, KC_LANG2)
#define KL_KANA LT(_RAISE, KC_LANG1)
#define KS_LEFT RSFT_T(KC_LEFT)
#define KS_KANA RSFT_T(KC_LANG1)
#define KL_LSFT MO(_RAISE)
//#define cmd(kc) LGUI(kc)
#define cmd(kc) LCTL(kc)
#define sft(kc) RSFT(kc)
#define RC_F3 RSFT(KC_F3)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
            KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   RC_F3,      KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   JP_MINS,JP_EQL, JP_BSLS,JP_GRV,
            KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,               KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   JP_LBRC,JP_RBRC,KC_BSPC,
            KC_LCTL,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,               KC_H,   KC_J,   KC_K,   KC_L,   JP_SCLN,JP_QUOT,KC_ENT,
            KL_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,       KC_F3,  KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,KC_UP,  KC_DEL,
            KC_LCTL,KC_LGUI,KC_LALT,KC_LCTL,KL_EISU,                    KL_KANA,KC_SPC, KC_SPC, KC_SPC,         KC_RSFT,KC_LEFT,KC_DOWN,KC_RIGHT
    ),
    [_LOWER] = LAYOUT(
            KC_GRV, KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,    _______,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,         KC_F11, KC_F12, _______,_______,
            _______,cmd(KC_Q),  cmd(KC_W),  cmd(KC_E),  cmd(KC_R),  cmd(KC_T),              cmd(KC_Y),  cmd(KC_U),  cmd(KC_I),  cmd(KC_O),  cmd(KC_P),      _______,_______,cmd(KC_BSPC),
            _______,cmd(KC_A),  cmd(KC_S),  cmd(KC_D),  cmd(KC_F),  cmd(KC_G),              cmd(KC_H),  cmd(KC_J),  cmd(KC_K),  cmd(KC_L),  _______,        _______,cmd(KC_ENT),
            _______,cmd(KC_Z),  cmd(KC_X),  cmd(KC_C),  cmd(KC_V),  cmd(KC_B),      _______,cmd(KC_N),  cmd(KC_M),  cmd(KC_M),  cmd(KC_COMM),cmd(KC_SLSH),  _______,KC_PGUP,_______,
            _______,_______,_______,_______,_______,                                _______,    _______,    _______,    _______,            _______,        KC_HOME,KC_PGDN, KC_END
    ),
    [_RAISE] = LAYOUT(
            KC_TILD,KC_EXLM,    JP_AT,     KC_HASH,    KC_DLR,     KC_PERC,    _______,    JP_CIRC,    JP_AMPR,    JP_ASTR,    JP_LPRN,   JP_RPRN,    JP_UNDS,JP_PLUS,JP_PIPE,JP_TILD,
            _______,sft(KC_Q),  sft(KC_W),  sft(KC_E),  sft(KC_R),  sft(KC_T),              sft(KC_Y),  sft(KC_U),  sft(KC_I),  sft(KC_O),  sft(KC_P),  JP_LCBR,JP_RCBR,RSFT(KC_BSPC),
            _______,sft(KC_A),  sft(KC_S),  sft(KC_D),  sft(KC_F),  sft(KC_G),              sft(KC_H),  sft(KC_J),  sft(KC_K),  sft(KC_L),  JP_COLN,    JP_DQT,sft(KC_ENT),
            _______,sft(KC_Z),  sft(KC_X),  sft(KC_C),  sft(KC_V),  sft(KC_B),      _______,sft(KC_N),  sft(KC_M),  KC_LABK,    KC_RABK,    KC_QUES,    _______,sft(KC_UP),_______,
            _______,_______,_______,_______,_______,                                _______,    _______,    _______,    _______,        _______,sft(KC_LEFT),sft(KC_DOWN),sft(KC_RIGHT)
    )
};
