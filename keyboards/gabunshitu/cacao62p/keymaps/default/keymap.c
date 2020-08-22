#include QMK_KEYBOARD_H

enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(
/*   ┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬───────────────────┬ */
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,    KC_MINS,  KC_EQL,   KC_BSPC,
/*   ├─────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬──────────────┤ */
	    KC_TAB, 	     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,  KC_LBRC,  KC_RBRC,   KC_BSLS,
/*   ├──────────────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──────────────┤ */
	    KC_CAPS,          KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,
/*   ├─────────────────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴─────────────────────┤ */
	    KC_LSFT,              KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
/*   ├───────────┬─────────┴─┬───────┴───┬─────┴─────────┴─────────┴─────────┴─────────┴─────────┴───────┬─┴─────────┴─┬───────┴─────┬────────-────┬───────┤ */
	    KC_LCTL,    KC_LALT,    KC_LGUI,    KC_SPC,                                                        KC_RSFT,      KC_RGUI,       KC_RALT,    KC_RCTL,
/*   └───────────┴───────────┴───────────┴───────────────────────────────────────────────────────────────┴─────────────┴─────────────┴─────────────┴───────┘ */
                                                    MO(_LOWER),   KC_SPC,              MO(_RAISE),
/*                                                 └───────────┴──────────────────────┴───────────┘ */
        KC_1,   KC_2,   KC_3,   KC_4,
        KC_5,   KC_6,   KC_7,   KC_8,           KC_Z,
        KC_9,   KC_0,   KC_A,   KC_B,   KC_X,   KC_C,
        KC_C,   KC_D,           KC_V,   KC_B,   KC_N
    ),
    [_LOWER] = LAYOUT(
/*   ┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬ */
        KC_GRV,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_UNDS,  KC_PLUS,   KC_DEL,
/*   ├─────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬──────────────┤ */
        _______, 	   KC_F5,    KC_F6,    KC_F7,    KC_F8,   _______,  _______,  _______,  _______,  _______,  _______,    KC_LCBR,  KC_RCBR,   KC_PIPE,
/*   ├──────────────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──────────────┤ */
        _______,          KC_F9,    KC_F10,   KC_F11,   KC_F12, _______,  _______,  _______,  _______,  _______,  KC_COLN,  KC_DQUO,  _______,
/*   ├─────────────────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴─────────────────────┤ */
        _______,             _______,  _______,  _______,  _______,  _______,  _______,  _______,    KC_LABK,  KC_RABK,   KC_QUES,  _______,
/*   ├───────────┬─────────┴─┬───────┴───┬─────┴─────────┴─────────┴─────────┴─────────┴─────────┴───────┬─┴─────────┴─┬───────┴─────┬────────-────┬───────┤ */
        _______,    _______,    _______,    _______,                                                        _______,     _______,       _______,    _______,
/*   └───────────┴───────────┴───────────┴───────────────────────────────────────────────────────────────┴─────────────┴─────────────┴─────────────┴───────┘ */
                                                    _______,        _______,            _______,
/*                                                 └───────────┴──────────────────────┴───────────┘ */
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,              _______,
        _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,              _______,   _______,   _______
    ),
    [_RAISE] = LAYOUT(
/*   ┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬ */
        KC_TILD,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_UNDS,  KC_PLUS,   KC_DEL,
/*   ├─────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬──────────────┤ */
        _______, 	   KC_F5,    KC_F6,    KC_F7,    KC_F8,   _______,  _______,  _______,  _______,  _______,  _______,    KC_LCBR,  KC_RCBR,   KC_PIPE,
/*   ├──────────────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──────────────┤ */
        _______,          KC_F9,    KC_F10,   KC_F11,   KC_F12, _______,   KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT, KC_COLN,  KC_DQUO,  _______,
/*   ├─────────────────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴─────────────────────┤ */
        _______,              KC_Z,     KC_X,     KC_C,     KC_V,     _______,     _______,     _______,    KC_LABK,  KC_RABK,   KC_QUES,  _______,
/*   ├───────────┬─────────┴─┬───────┴───┬─────┴─────────┴─────────┴─────────┴─────────┴─────────┴───────┬─┴─────────┴─┬───────┴─────┬────────-────┬───────┤ */
        _______,    _______,    _______,    _______,                                                        _______,     _______,       _______,    _______,
/*   └───────────┴───────────┴───────────┴───────────────────────────────────────────────────────────────┴─────────────┴─────────────┴─────────────┴───────┘ */
                                                    _______,        _______,            _______,
/*                                                 └───────────┴──────────────────────┴───────────┘ */
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,              _______,
        _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,              _______,   _______,   _______
  )
};
