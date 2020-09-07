#include QMK_KEYBOARD_H

enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
};

#define KL_EISU LT(_LOWER, KC_LANG2)
#define KS_LEFT RSFT_T(KC_LEFT)
#define KS_KANA RSFT_T(KC_LANG1)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(
        KC_1,   KC_2,   KC_3,   KC_4,
        KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,           KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSLS,KC_GRV,
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,           KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSPC,
        KC_LCTL,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,           KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_ENT,
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,           KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,KC_UP,  KC_DEL,
        KC_ENT, KC_LALT,KC_LGUI,KC_LALT,KL_EISU,                KS_KANA,KC_SPC,                 KS_LEFT,KC_LEFT,KC_DOWN,KC_RIGHT
    ),
    [_LOWER] = LAYOUT(
        KC_1,   KC_2,   KC_3,   KC_4,
        KC_GRV, KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,          KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11, KC_F12, _______,_______,
        _______,LGUI(KC_Q), LGUI(KC_W), LGUI(KC_E), LGUI(KC_R), LGUI(KC_T),     LGUI(KC_Y), LGUI(KC_U), LGUI(KC_I), LGUI(KC_O), LGUI(KC_P), _______,_______,LGUI(KC_BSPC),
        _______,LGUI(KC_A), LGUI(KC_S), LGUI(KC_D), LGUI(KC_F), LGUI(KC_G),     LGUI(KC_H), LGUI(KC_J), LGUI(KC_K), LGUI(KC_L), _______,    _______,LGUI(KC_ENT),
        _______,LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), LGUI(KC_B),     LGUI(KC_N), LGUI(KC_M), LGUI(KC_M), LGUI(KC_COMM),LGUI(KC_SLSH),    _______,KC_PGUP,_______,
        KC_BSPC, _______,_______,_______,_______,                                KC_SPC,     _______,                                _______,    KC_HOME,KC_PGDN, KC_END
    ),
    [_RAISE] = LAYOUT(
        KC_1,   KC_2,   KC_3,   KC_4,
        KC_TILD,KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,        KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    KC_EQL, KC_TILD,KC_PIPE,RSFT(KC_BSPC),
        _______,RSFT(KC_Q), RSFT(KC_W), RSFT(KC_E), RSFT(KC_R), RSFT(KC_T),     RSFT(KC_Y), RSFT(KC_U), RSFT(KC_I), RSFT(KC_O), RSFT(KC_P), KC_GRV, KC_LCBR,KC_RCBR,,
        _______,RSFT(KC_A), RSFT(KC_S), RSFT(KC_D), RSFT(KC_F), RSFT(KC_G),     RSFT(KC_H), RSFT(KC_J), RSFT(KC_K), RSFT(KC_L), KC_PLUS,    KC_ASTR,RSFT(KC_ENT),
        _______,RSFT(KC_Z), RSFT(KC_X), RSFT(KC_C), RSFT(KC_V), RSFT(KC_B),     RSFT(KC_N), RSFT(KC_M), KC_LABK,    KC_RABK,    KC_QUES,    _______,KC_PGUP,_______,
        KC_DEL, _______,_______,_______,_______,                                _______,    _______,                                _______,KC_HOME,KC_PGDN,KC_END
    )
};
