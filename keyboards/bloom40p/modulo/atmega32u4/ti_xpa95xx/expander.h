//
// Created by 樋田一幸 on 2020/06/27.
//

#ifndef QMK_FIRMWARE_EXPANDER_H
#define QMK_FIRMWARE_EXPANDER_H

enum {
    CMD_INPUT = 0,
    CMD_OUTPUT,
    CMD_INVERSION,
    CMD_CONFIG,
};

typedef struct {
    uint8_t address;
    uint8_t num_port;
    uint16_t mask;
    uint8_t configured;
} expander;

#define PCA9555(offset) { 0x20 | offset, 2, 0xFFFF, 0 }
#define TCA9555(offset) { 0x20 | offset, 2, 0xFFFF, 0 }
#define PCA9554(offset) { 0x20 | offset, 1, 0x00FF, 0 }
#define TCA9554(offset) { 0x20 | offset, 1, 0x00FF, 0 }
#define PCA9536() { 0x41, 1, 0x000F }

void expander_init(const expander *slaves, uint8_t count);
uint16_t expander_readPins(expander *slave);

#endif  // QMK_FIRMWARE_EXPANDER_H
