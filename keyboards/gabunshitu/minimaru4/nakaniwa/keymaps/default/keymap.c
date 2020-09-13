#include QMK_KEYBOARD_H

enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
};

#define KL_EISU LT(_LOWER, KC_LANG2)
#define KL_KANA LT(_RAISE, KC_LANG1)
#define KL_LEFT LT(_RAISE, KC_LEFT)
#define KL_EQL  LT(_LOWER, KC_EQL)
#define cmd(kc) LCTL(kc)
#define sft(kc) RSFT(kc)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        KC_F1,  KC_F2,  KC_F3,  KC_F4,
        KC_F5,  KC_F6,  KC_F7,  KC_F8,
        KC_F9,  KC_F10, KC_F11, KC_F12,
        KC_LSFT,KC_DEL, RGB_TOG,KC_LALT,
        KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   sft(KC_F6), KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSLS,KC_GRV,
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,               KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSPC,
        KC_LCTL,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,               KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_ENT,
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,      cmd(KC_B),KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,KC_UP,  KC_DEL,
        KC_ENT, KC_LALT,KC_LALT,KC_LGUI,KL_EISU,                    KL_KANA,KC_SPC,                 KL_LEFT,KC_LEFT,KC_DOWN,KC_RIGHT,
        KC_7,   KC_8,   KC_9,   KC_BSPC,
        KC_4,   KC_5,   KC_6,   KC_MINS,
        KC_1,   KC_2,   KC_3,   KC_PLUS,
        KL_EQL, KC_0,   KC_DOT, KC_ENT
    ),
    [_LOWER] = LAYOUT(
        _______,_______,_______,_______,
        _______,_______,_______,_______,
        _______,_______,_______,_______,
        _______,_______,_______,_______,
        _______,KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,  _______,                KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F12,     _______,    _______,    _______,
        _______,cmd(KC_Q),  cmd(KC_W),  cmd(KC_E),  cmd(KC_R),  cmd(KC_T),                      cmd(KC_Y),  cmd(KC_U),  cmd(KC_I),  cmd(KC_O),  cmd(KC_P),  _______,    _______,    cmd(KC_BSPC),
        _______,cmd(KC_A),  cmd(KC_S),  cmd(KC_D),  cmd(KC_F),  cmd(KC_G),                      cmd(KC_H),  cmd(KC_J),  cmd(KC_K),  cmd(KC_L),  _______,    _______,    cmd(KC_ENT),
        _______,cmd(KC_Z),  cmd(KC_X),  cmd(KC_C),  cmd(KC_V),  cmd(KC_B),              _______,cmd(KC_N),  cmd(KC_M),  cmd(KC_COMM),cmd(KC_DOT),cmd(KC_SLSH),_______,  KC_PGUP,    _______,
        _______,_______,_______,_______,_______,                                                _______,    cmd(KC_SPC),                         _______,    KC_HOME,    KC_PGDN,    KC_END,
        _______,_______,_______,_______,
        _______,_______,_______,KC_SLSH,
        _______,_______,_______,KC_ASTR,
        _______,_______,_______, _______
    ),
    [_RAISE] = LAYOUT(
        _______,_______,_______,_______,
        _______,_______,_______,_______,
        _______,_______,_______,_______,
        _______,_______,_______,_______,
        _______,_______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
        _______,sft(KC_Q),  sft(KC_W),  sft(KC_E),  sft(KC_R),  sft(KC_T),                      sft(KC_Y),  sft(KC_U),  sft(KC_I),  sft(KC_O),  sft(KC_P),  KC_LCBR,    KC_RCBR,    sft(KC_BSPC),
        _______,sft(KC_A),  sft(KC_S),  sft(KC_D),  sft(KC_F),  sft(KC_G),                      sft(KC_H),  sft(KC_J),  sft(KC_K),  sft(KC_L),  KC_PLUS,    KC_ASTR,    sft(KC_ENT),
        _______,sft(KC_Z),  sft(KC_X),  sft(KC_C),  sft(KC_V),  sft(KC_B),              _______,sft(KC_N),  sft(KC_M),  KC_LABK,    KC_RABK,    KC_QUES,    _______,    KC_PGUP,    _______,
        _______,_______,_______,_______,_______,                                                _______,    _______,                            _______,    KC_HOME,    KC_PGDN,    KC_END,
        _______,_______,_______,_______,
        _______,_______,_______,KC_SLSH,
        _______,_______,_______,KC_ASTR,
        _______,_______,_______, _______
    )
};
