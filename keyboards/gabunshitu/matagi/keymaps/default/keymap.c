#include QMK_KEYBOARD_H

enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _FUNCS,
};

#define KL_EISU LT(_LOWER, KC_LANG2)
#define KL_KANA LT(_RAISE, KC_LANG1)

#define c(kc) LGUI(kc)
//#define cmd(kc) LCTL(kc)
#define o(kc) LOPT(kc)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(
        KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,           KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSLS,KC_GRV,
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,           KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSPC,
        KC_LCTL,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,           KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_ENT,
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,           KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,KC_UP,  KC_DEL,
        KC_LCTL,KC_LGUI,KC_DEL, KC_LALT,                KC_SPC, KC_RSFT,KC_RALT,KC_RGUI,              KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_LOWER] = LAYOUT(
        KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,          KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, _______, _______,
        _______,c(KC_Q),c(KC_W),c(KC_E),c(KC_R),c(KC_T),        c(KC_Y),c(KC_U),c(KC_I),c(KC_O),c(KC_P),   c(KC_LBRC),c(KC_RBRC),c(KC_BSPC),
        _______,c(KC_A),c(KC_S),c(KC_D),c(KC_F),c(KC_G),        c(KC_H),c(KC_J),c(KC_K),c(KC_L),c(KC_SCLN),c(KC_QUOT),c(KC_ENT),
        _______,c(KC_Z),c(KC_X),c(KC_C),c(KC_V),c(KC_B),        c(KC_N),c(KC_M),c(KC_COMM),c(KC_DOT), c(KC_SLSH),_______,KC_PGUP,c(KC_DEL),
        _______,_______,_______,_______,                c(KC_SPC), _______,_______,_______,                     KC_HOME, KC_PGDN, KC_END
    ),
    [_RAISE] = LAYOUT(
        KC_TILD,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,          KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, _______, _______,
        _______,o(KC_Q),o(KC_W),o(KC_E),o(KC_R),o(KC_T),        o(KC_Y),o(KC_U),o(KC_I),o(KC_O),o(KC_P),   o(KC_LBRC),o(KC_RBRC),o(KC_BSPC),
        _______,o(KC_A),o(KC_S),o(KC_D),o(KC_F),o(KC_G),        o(KC_H),o(KC_J),o(KC_K),o(KC_L),o(KC_SCLN),o(KC_QUOT),o(KC_ENT),
        _______,o(KC_Z),o(KC_X),o(KC_C),o(KC_V),o(KC_B),        o(KC_N),o(KC_M),o(KC_COMM),o(KC_DOT), o(KC_SLSH),_______,KC_PGUP,o(KC_DEL),
        _______,_______,_______,_______,                c(KC_SPC), _______,_______,_______,                     KC_HOME, KC_PGDN, KC_END
    ),
    [_FUNCS] = LAYOUT(
        _______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,                _______,_______,_______,_______,                _______,_______,_______
    )
};
