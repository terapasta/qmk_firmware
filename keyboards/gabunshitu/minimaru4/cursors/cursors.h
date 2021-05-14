/* Copyright 2021 ABplus Inc.
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

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    K01, K02, K03, K04,                                         \
            L_UP,                           R_UP,               \
    L_LEFT, L_PUSH, L_RIGHT,        R_LEFT, R_PUSH, R_RIGHT,    \
            L_DOWN,                         R_DOWN              \
)   \
{   \
        {                                   \
            K01, K02, K03, K04,             \
            L_DOWN, R_LEFT, R_PUSH, R_UP,   \
            L_LEFT, L_PUSH, L_UP, L_RIGHT,  \
            R_RIGHT, R_DOWN, KC_NO, KC_NO   \
        }, \
}
