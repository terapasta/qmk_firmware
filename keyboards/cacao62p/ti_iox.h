/* Copyright 2020
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

#ifndef QMK_FIRMWARE_TI_IOX_16BIT_H
#define QMK_FIRMWARE_TI_IOX_16BIT_H

#define ALL_OUTPUT 0
#define ALL_INPUT 0xFF
#define ALL_LOW 0
#define ALL_HIGH 0xFF

enum {
    CMD_INPUT = 0,
    CMD_OUTPUT,
    CMD_INVERSION,
    CMD_CONFIG,
};

typedef struct {
    uint8_t address;
    uint8_t num_port;
    uint8_t cmd_shift;
    uint16_t mask;
} ti_iox_16bit;

#define PCA9555(offset) { (0x40 | ((offset) << 1)), 2, 1, 0xFFFF }
#define TCA9555(offset) { (0x40 | ((offset) << 1)), 2, 1, 0xFFFF }
#define PCA9554(offset) { (0x40 | ((offset) << 1)), 1, 0, 0x00FF }
#define TCA9554(offset) { (0x40 | ((offset) << 1)), 1, 0, 0x00FF }
#define PCA9536() { 0x82, 1, 0, 0x000F }

void ti_iox_init(const ti_iox_16bit *slaves, uint8_t count);
uint16_t ti_iox_readPins(const ti_iox_16bit *slave);

#endif //QMK_FIRMWARE_TI_IOX_16BIT_H
