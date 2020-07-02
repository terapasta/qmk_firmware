#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <hal.h>
#include "timer.h"
#include "wait.h"
#include "print.h"
#include "matrix.h"
#include "i2c_master.h"
#include QMK_KEYBOARD_H

#ifndef DEBOUNCE
#define DEBOUNCE 10
#endif

static uint8_t debouncing = DEBOUNCE;
static matrix_row_t matrix[MATRIX_ROWS];
static matrix_row_t matrix_debouncing[MATRIX_ROWS];
static uint8_t matrix_row_read[2] = { 0xff, 0xff };


// todo: 変更対象
static const uint8_t addresses[MATRIX_ROWS] = { 0x2E>>1, 0x2A>>1, 0x4A>>1, 0x5E>>1 };
static I2CDriver* i2cDrivers[MATRIX_ROWS] = {};

static const I2CConfig i2ccfg = {
        OPMODE_I2C,
        400000,
        STD_DUTY_CYCLE
};

__attribute__((weak)) void matrix_init_user(void) {}

__attribute__((weak)) void matrix_scan_user(void) {}

__attribute__((weak)) void matrix_init_kb(void) {
    matrix_init_user();
}

__attribute__((weak)) void matrix_scan_kb(void) {
    matrix_scan_user();
}

inline uint8_t matrix_rows(void) {
    return MATRIX_ROWS;
}

inline uint8_t matrix_cols(void) {
    return MATRIX_COLS;
}

void matrix_init(void) {

    // setup I2C hardware
    palSetPadMode(GPIOB, 6, PAL_MODE_STM32_ALTERNATE_OPENDRAIN);   /* SCL */
    palSetPadMode(GPIOB, 7, PAL_MODE_STM32_ALTERNATE_OPENDRAIN);   /* SDA */

    // initialize matrix state: all keys off
    for (uint8_t i=0; i < MATRIX_ROWS; i++) {
        matrix[i] = 0;
        matrix_debouncing[i] = 0;
    }

    // debug
    debug_enable = true;
    debug_matrix = true;
    wait_ms(500);

    //matrix_init_quantum();
}


/* Returns status of switches(1:on, 0:off) */
static matrix_row_t read_cols(uint8_t row)
{
    msg_t status = MSG_OK;

    if (addresses[row] == 0) {
        return 0;
    }

    i2cStart(i2cDrivers[row], &i2ccfg);

    status = i2cMasterReceiveTimeout(i2cDrivers[row], addresses[row], matrix_row_read, 1, 3);

    i2cStop(i2cDrivers[row]);
    if (MSG_OK != status) {
        printf("I2C RX Error: row: %d: %x\n",row, matrix_row_read[0]);
        return (matrix_row_t)0;
    }


    uint8_t low = ~matrix_row_read[0];

    return low;
}


uint8_t matrix_scan(void) {
    for (uint8_t i = 0; i < MATRIX_ROWS; i++) {
        // wait_us(30);
        matrix_row_t cols = read_cols(i);
        if (matrix_debouncing[i] != cols) {
            matrix_debouncing[i] = cols;
            if (debouncing) {
                debug("bounce!: "); debug_hex(debouncing); debug("\n");
            }
            debouncing = DEBOUNCE;
        }
    }

    if (debouncing) {
        if (--debouncing) {
//            wait_ms(1);
        } else {
            for (uint8_t i = 0; i < MATRIX_ROWS; i++) {
                matrix[i] = matrix_debouncing[i];
            }
        }
    }
    matrix_scan_quantum();
    return 0;
}

inline bool matrix_is_on(uint8_t row, uint8_t col) {
    return (matrix[row] & ((matrix_row_t)1<<col));
}

inline matrix_row_t matrix_get_row(uint8_t row) {
    return matrix[row];
}

void matrix_print(void) {
    print("\nr/c 0123456789ABCDEF\n");
    for (uint8_t row = 0; row < MATRIX_ROWS; row++) {
        phex(row); print(": ");
        pbin_reverse16(matrix_get_row(row));
        print("\n");
    }
}
