/* Copyright 2020 kazhida
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "three.h"
#include "rgb_matrix.h"

// Optional override functions below.
// You can leave any or all of these undefined.
// These are only required if you want to perform custom actions.

/*
void matrix_init_kb(void) {
    // put your keyboard start-up code here
    // runs once when the firmware starts up

    matrix_init_user();
}

void matrix_scan_kb(void) {
    // put your looping keyboard code here
    // runs every cycle (a lot)

    matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    // put your per-action keyboard code here
    // runs for every action, just before processing by the firmware

    return process_record_user(keycode, record);
}

bool led_update_kb(led_t led_state) {
    // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here

    return led_update_user(led_state);
}
*/

led_config_t g_led_config = {
    {
        {   0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15 },
        {  16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 },
        {  32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47 }
    }, {
        // 0x07
        {  0,  0 }, {  1,  0 }, {  2,  0 }, {  3,  0 },
        {  0,  1 }, {  1,  1 }, {  2,  1 }, {  3,  1 },
        {  0,  2 }, {  1,  2 }, {  2,  2 }, {  3,  2 },
        {  0,  3 }, {  1,  3 }, {  2,  3 }, {  3,  3 },
        // 0x06
        {  4,  0 }, {  5,  0 }, {  6,  0 }, {  7,  0 },
        {  4,  1 }, {  5,  1 }, {  6,  1 }, {  7,  1 },
        {  4,  2 }, {  5,  2 }, {  6,  2 }, {  7,  2 },
        {  4,  3 }, {  5,  3 }, {  6,  3 }, {  7,  3 },
        // 0x05
        {  8,  0 }, {  9,  0 }, {  10,  0 }, {  11,  0 },
        {  8,  1 }, {  9,  1 }, {  10,  1 }, {  11,  1 },
        {  8,  2 }, {  9,  2 }, {  10,  2 }, {  11,  2 },
        {  8,  3 }, {  9,  3 }, {  10,  3 }, {  11,  3 }
    }, {
        4, 4, 4, 4,
        4, 4, 4, 4,
        4, 4, 4, 4,
        4, 4, 4, 4,

        4, 4, 4, 4,
        4, 4, 4, 4,
        4, 4, 4, 4,
        4, 4, 4, 4,

        4, 4, 4, 4,
        4, 4, 4, 4,
        4, 4, 4, 4,
        4, 4, 4, 4
    }
};
