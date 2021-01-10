/* Copyright 2020 kazhida
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

#define xxxx KC_NO

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT(                                                                     \
    k101, k102, k103, k104, k105, k106, k301, k302, k303, k304, k305, k306, k307,   \
    k109, k110, k111, k112, k113, k114, k309, k310, k311, k312, k313, k314,         \
    k201, k202, k203, k204, k205, k206, k401, k402, k403, k404, k405, k406,         \
    k209, k210, k211, k212, k213,       k409, k410, k411, k412, k413, k414          \
) {                                                                                 \
    { k101, k102, k103, xxxx, k109, k110, k111, xxxx, k201, k202, k203, xxxx, k209, k210, k211, xxxx }, \
    { k104, k105, k106, xxxx, k112, k113, k114, xxxx, k204, k205, k206, xxxx, k212, k213, xxxx, xxxx }, \
    { k301, k302, k303, xxxx, k309, k310, k311, xxxx, k401, k402, k403, xxxx, k409, k410, k411, xxxx }, \
    { k304, k305, k306, k307, k312, k313, k314, xxxx, k404, k405, k406, xxxx, k412, k413, k414, xxxx }  \
}
