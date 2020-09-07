#include QMK_KEYBOARD_H

enum layer_number {
    _1234 = 0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_1234] = LAYOUT(
        LSFT(KC_F6), LALT(KC_F7), LGUI(KC_B), SGUI_T(KC_F)
    ),
};
