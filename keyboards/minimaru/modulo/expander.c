//
// Created by 樋田一幸 on 2020/06/27.
//

#include <avr/interrupt.h>
#include <wait.h>
#include <i2c_master.h>
#include <debug.h>

#include "expander.h"

#define TIMEOUT 10

#define ALL_OUTPUT 0
#define ALL_INPUT 0xFF
#define ALL_LOW 0
#define ALL_HIGH 0xFF

static uint8_t initialized = 0;

void expander_init(const expander *slaves, uint8_t count) {

    if (!initialized) {
        initialized++;
        i2c_init();
        _delay_ms(1000);
    }

    // make all pins to input mode
    for (uint8_t i = 0; i < count; i++) {
        uint8_t num = slaves[i].num_port;
        uint8_t addr = slaves[i].dev_address << 1;
        uint8_t conf = slaves[i].cfg_address;
        uint8_t pull = slaves[i].pup_address;
        uint8_t data = ALL_INPUT;
        for (uint8_t j = 0; j < num; j++) {
            uint8_t reg = conf + j;
            i2c_status_t ret = i2c_writeReg(addr, reg, &data, sizeof(data), TIMEOUT);
            if (ret != I2C_STATUS_SUCCESS) {
                xprintf("config pins all-input FAILED: %02X, addr: %02X, reg: %02X data: %d\n", ret, addr, reg, data);
            } else {
                xprintf("config pins all-input SUCCEEDED: %02X, addr: %02X, reg: %02X data: %d\n", ret, addr, reg, data);
            }
        }
        if (conf != pull) {
            for (uint8_t j = 0; j < num; j++) {
                uint8_t reg = pull + j;
                i2c_status_t ret = i2c_writeReg(addr, reg, &data, sizeof(data), TIMEOUT);
                if (ret != I2C_STATUS_SUCCESS) {
                    xprintf("config pins pull-up FAILED: %02X, addr: %02X, reg: %02X data: %d\n", ret, addr, reg, data);
                } else {
                    xprintf("config pins pull-up SUCCEEDED: %02X, addr: %02X, reg: %02X data: %d\n", ret, addr, reg, data);
                }
            }
        }
    }
}

uint16_t expander_readPins(const expander *slave) {
    uint8_t addr = slave->dev_address << 1;
    uint8_t data[2] = { 0xff, 0xff };     // num_port <= 2
    uint8_t reg = slave->reg_address;

    for (uint8_t i = 0; i < slave->num_port; i++) {
        i2c_status_t ret = i2c_readReg(addr, reg + i, data + i, 1, TIMEOUT);
        if (ret != I2C_STATUS_SUCCESS) {
            return 0x0000;
        }
    }

    uint16_t result = 0;
    for (int8_t i = slave->num_port - 1; i >= 0; i--) {
        result <<= 8;
        result |= data[i];
    }

    result = ~result;
    result &= slave->mask;

    return result;
}
