#include QMK_KEYBOARD_H

enum layer_number {
    _1234 = 0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_1234] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4
    ),
};
