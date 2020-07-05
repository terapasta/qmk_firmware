#include QMK_KEYBOARD_H

enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//    [_QWERTY] = LAYOUT(
//	    KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_MINS,  KC_BSPC,
//        KC_LCTL,      KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_LBRC,  KC_ENT,
//	    KC_LSFT,        KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,    KC_COMM,   KC_DOT,   KC_SLSH,
//        MO(_LOWER), KC_LALT,    KC_LGUI,                         KC_SPC,                               KC_RSFT,      MO(_RAISE)
//    ),
    [_QWERTY] = LAYOUT(
        KC_1,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_MINS,  KC_0,
        KC_2,      KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_LBRC,  KC_ENT,
        KC_3,        KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,    KC_COMM,   KC_DOT,   KC_SLSH,
        KC_4,   KC_5,    KC_6,                         KC_7,                               KC_8,      KC_9
    ),
    [_LOWER] = LAYOUT(
        KC_GRV,     KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_EQL,   KC_DEL,
        _______, 	   KC_F5,    KC_F6,    KC_F7,    KC_F8,   _______,  _______,  _______,  _______,  _______,  KC_RCBR,   _______,
        _______,          KC_F9,    KC_F10,   KC_F11,   KC_F12, _______,  _______,  _______,  KC_SCLN,   KC_COLN,  KC_BSLS,
        _______,    _______,    _______,                          KC_SPC,                               _______,    _______
    ),
    [_RAISE] = LAYOUT(
        KC_TILD,    KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,   KC_EQL,   KC_DEL,
        _______, 	   _______,  _______,  _______,  _______, _______,  _______,  _______,  _______,  _______,  KC_RCBR,   _______,
        _______,         _______,  _______,  _______,  _______,  _______, _______,  _______,  KC_SCLN,   KC_COLN,  KC_BSLS,
        _______,    _______,    _______,                          KC_SPC,                               _______,    _______
  )
};
