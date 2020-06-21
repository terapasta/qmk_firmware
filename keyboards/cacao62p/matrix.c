/* Copyright 2019
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
#include <stdint.h>
#include <stdbool.h>
#include <avr/io.h>
#include <avr/i2c_master.h>
#include <string.h>
#include <quantum.h>
#include "matrix.h"
#include "ti_iox.h"

#include "debug.h"

//_____CUSTOM MATRIX IMPLEMENTATION____________________________________________________

static ti_iox_16bit expanders[MATRIX_ROWS] = {
    PCA9555(0x02),
    PCA9555(0x03),
    PCA9555(0x04),
    PCA9555(0x05)
};

static bool initialized = false;
static bool initialized2 = false;

void matrix_init_custom(void) {
    debug_enable = true;
    _delay_ms(50);

    print("i2c initializing?\n");
    if (!initialized) {
        initialized = true;
        i2c_init();
        print("i2c initialized\n");
        _delay_ms(100);
    }

    ti_iox_init(&expanders[0], MATRIX_ROWS);
    xprintf("iox initialized: %d\n", initialized);
}

bool matrix_scan_custom(matrix_row_t current_matrix[]) {
    bool changed = false;

    if (!initialized2) {
        print("i2c initializing?\n");
        initialized2 = true;
        i2c_init();
        print("i2c initialized\n");
        _delay_ms(100);
        ti_iox_init(&expanders[0], MATRIX_ROWS);
        xprintf("iox initialized: %d\n", initialized);
    }

    for (uint8_t i = 0; i < MATRIX_ROWS; i++) {
//        xprintf("read[%d/%d]\n", i, MATRIX_ROWS);
        matrix_row_t last_row = current_matrix[i];
        matrix_row_t current_row = ti_iox_readPins(&expanders[i]);
        current_matrix[i] = current_row;
        changed |= last_row != current_row;
//        xprintf("row[%d]: %02X\n", i, current_row);
    }

    return changed;
}
