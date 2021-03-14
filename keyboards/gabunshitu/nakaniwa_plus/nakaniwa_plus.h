/* Copyright 2021 kazhida
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
#define xxxx KC_NO

#define LAYOUT( \
    K101, K102, K103, K104, K105, K106, K107,         K108, K109, K110, K111, K112, K113, K114, K115,       K117, K118,     \
    K201, K202, K203, K204, K205, K206,               K207, K208, K209, K210, K211, K212, K213, K214,       K215, K216,     \
    K301, K302, K303, K304, K305, K306,               K307, K308, K309, K310, K311, K312, K313,             K314, K315,     \
    K401, K402, K403, K404, K405, K406,         K407, K408, K409, K410, K411, K412, K413,                   K414, K415,     \
    K501, K502, K503, K504, K505, K506,               K507, K508,                                     K509, K510, K511,      \
                \
    k601, k602, k603, k604, k605, k606, k607, k608, k609, k610, k611, k612, k613,   \
    k614, k615, k616, k617, k618, k619, k620, k621, k622, k623, k624                \
) { \
    { K101, K102, K103, K104, /**/ K105, K106, K107, K501, /**/ K502, xxxx, K201, K202, /**/ K203, K204, K205, K206 }, \
    { K301, K302, K303, K304, /**/ K305, K306, K503, K504, /**/ K505, K506, K401, K402, /**/ K403, K404, K405, K406 }, \
    { K108, K109, K110, K111, /**/ K112, K113, K114, K115, /**/ K214, K207, K208, K209, /**/ K212, K210, K211, K213 }, \
    { K115, K307, K308, K309, /**/ K312, K310, K311, K313, /**/ K407, K408, K409, K410, /**/ K411, K412, xxxx, K413 }, \
    { K507, K508, K314, K407, /**/ xxxx, xxxx, K117, K215, /**/ K118, K216, K315, K415, /**/ K414, K509, K510, K511 }, \
    { k601, k602, k603, k604, /**/ k605, k606, k607, k608, /**/ k609, k610, k611, k612, /**/ k613, xxxx, xxxx, xxxx }, \
    { k614, k615, k616, k617, /**/ k618, k619, k620, k621, /**/ k622, k623, k624, xxxx, /**/ xxxx, xxxx, xxxx, xxxx }  \
}
