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

#define TIMEOUT 1000

void ti_iox_init(const ti_iox_16bit *slaves, uint8_t count) {

    // make all pins to input mode
    xprintf("config\n");
    for (uint8_t i = 0; i < count; i++) {
        uint8_t num = slaves[i].num_port;
        uint8_t addr = slaves[i].address << 1;
        xprintf("config addr: %02X\n", addr);
        for (uint8_t j = 0; j < num; j++) {
            uint8_t cmd = CMD_CONFIG * num + j;
            uint8_t conf = ALL_INPUT;
            i2c_status_t ret = i2c_writeReg(addr, cmd, &conf, sizeof(conf), TIMEOUT);
            if (ret != I2C_STATUS_SUCCESS) {
                xprintf("config FAILED: %d, addr: %02X, cmd: %02X conf: %d\n", ret, addr, cmd, conf);
            } else {
                xprintf("config SUCCEEDED: %d, addr: %02X, cmd: %02X conf: %d\n", ret, addr, cmd, conf);
            }
        }
    }
}

uint16_t ti_iox_readPins(const ti_iox_16bit *slave) {
    uint8_t addr = slave->address << 1;
    uint8_t data[2] = { 0xff, 0xff };     // num_port <= 2
    uint8_t cmd = CMD_INPUT * slave->num_port;

    i2c_status_t ret = i2c_readReg(addr, cmd, data, slave->num_port, TIMEOUT);
    if (ret != I2C_STATUS_SUCCESS) {
//        xprintf("read FAILED: %d, addr: %02X, cmd: %02X\n", ret, addr, cmd);
        return 0x0000;
    }

    uint16_t result = 0;
    for (uint8_t i = slave->num_port - 1; i >= 0; i--) {
        result <<= 8;
        result |= data[i];
    }

    return (~result) & slave->mask;
}
