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

#include <i2c_master.h>
#include "ti_iox.h"
#include "debug.h"

#define TIMEOUT 100

void ti_iox_init(const ti_iox_16bit *slaves, uint8_t count) {

    // make all pins to input mode
    for (uint8_t i = 0; i < count; i++) {
        uint8_t num = slaves[i].num_port;
        uint8_t addr = slaves[i].address;
        for (uint8_t j = 0; j < num; j++) {
            uint8_t cmd = (CMD_CONFIG << slaves[i].cmd_shift) + j;
            uint8_t conf = ALL_INPUT;
            i2c_status_t ret = i2c_writeReg(addr, cmd, &conf, sizeof(conf), TIMEOUT);
            if (ret != I2C_STATUS_SUCCESS) {
                print("pca9555_set_config::FAILED\n");
            }
        }
    }
}

uint16_t ti_iox_readPins(const ti_iox_16bit *slave) {
    uint8_t addr = slave->address;
    uint8_t data[2] = { 0, 0 };     // num_port <= 2
    uint8_t cmd = CMD_INPUT << slave->cmd_shift;

    i2c_status_t ret = i2c_readReg(addr, cmd, data, slave->num_port, TIMEOUT);
    if (ret != I2C_STATUS_SUCCESS) {
        print("ti_iox_readPins::FAILED\n");
    }

    uint16_t result = 0;
    for (uint8_t i = slave->num_port - 1; i >= 0; i--) {
        result <<= 8;
        result |= data[i];
    }

    return result & slave->mask;
}
