//
// Created by 樋田一幸 on 2020/06/27.
//

#pragma once

typedef struct {
    uint8_t dev_address;
    uint8_t reg_address;
    uint8_t pup_address;
    uint8_t cfg_address;
    uint8_t num_port;
    uint16_t mask;
} expander;

#define PCA9555(offset) { 0x20 | offset, 0x00, 0x06, 0x06, 2, 0xFFFF }
#define TCA9555(offset) { 0x20 | offset, 0x00, 0x06, 0x06, 2, 0xFFFF }
#define PCA9554(offset) { 0x20 | offset, 0x00, 0x03, 0x03, 1, 0x00FF }
#define TCA9554(offset) { 0x20 | offset, 0x00, 0x03, 0x03, 1, 0x00FF }
#define PCA9536() { 0x41, 0x00, 0x03, 0x03, 1, 0x000F }
#define MCP23017(offset) { 0x20 | offset, 0x12, 0x0C, 0x00, 2, 0xFFFF }

void expander_init(const expander *slaves, uint8_t count);
uint16_t expander_readPins(const expander *slave);
