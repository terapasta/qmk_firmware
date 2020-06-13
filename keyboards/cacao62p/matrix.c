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
#include <i2c_master.h>
#include <string.h>
#include "matrix.h"
#include "ti_iox.h"
#include "quantum.h"

#include "debug.h"

//_____CUSTOM MATRIX IMPLEMENTATION____________________________________________________

static ti_iox_16bit expanders[MATRIX_ROWS] = {
    PCA9555(0x02),
    PCA9555(0x03),
    PCA9555(0x04),
    PCA9555(0x05)
};

void custom_matrix_init(void) {
    static uint8_t initialized = 0;
    if (!initialized) {
        i2c_init();
        initialized = 1;
    }
    // TODO: could check device connected
    // i2c_start(SLAVE_TO_ADDR(slave) | I2C_WRITE);
    // i2c_stop();

    ti_iox_init(expanders, MATRIX_ROWS);
}

bool custom_matrix_scan(matrix_row_t current_matrix[]) {
    bool changed = false;

    for (uint8_t i = 0; i < MATRIX_ROWS; i++) {
        matrix_row_t last_row = current_matrix[i];
        matrix_row_t current_row = ti_iox_readPins(&expanders[i]);
        current_matrix[i] = current_row;
        changed |= last_row != current_row;
    }

    return changed;
}
