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

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
            K101,   K102,   K103,   K201,   K202,   K203,   K301,   K302,   K303,   K401,   K402,   K403,   K501,   K502,   K503,   \
            K104,   K105,   K106,   K204,   K205,   K206,   K304,   K305,   K306,   K404,   K405,   K406,   K504,   K505,   K506,   \
            K107,   K108,   K109,   K207,   K208,   K209,   K307,   K308,   K309,   K407,   K408,   K409,   K507,   K508,   K509,   \
            K110,   K111,   K112,   K210,   K211,   K212,   K310,   K311,   K312,   K410,   K411,   K412,   K510,   K511,   K512,   \
    K113,   K114,   K115,   K116,   K213,   K214,   K215,   K313,   K314,   K315,   K413,   K414,   K415,   K513,   K514,   K515    \
) \
{ \
    { K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, K116},  \
    { K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215, KC_NO}, \
    { K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314, K315, KC_NO}, \
    { K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411, K412, K413, K414, K415, KC_NO}, \
    { K501, K502, K503, K504, K505, K506, K507, K508, K509, K510, K511, K512, K513, K514, K515, KC_NO}  \
}
