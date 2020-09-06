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
#pragma once

#include "quantum.h"

#define xxxx KC_NO


#define LAYOUT( \
    P101, P102, P103, P104,                                                                         \
    P105, P106, P107, P108,                                                                         \
    P109, P110, P111, P112,                                                                         \
    P113, P114, P115, P116,                                                                         \
    K101, K102, K103, K104, K105, K106, K907,     K107, K108, K109, K110, K111, K112, K113, K114, K115, \
    K201, K202, K203, K204, K205, K206,           K207, K208, K209, K210, K211, K212, K213, K214,       \
    K301, K302, K303, K304, K305, K306,           K307, K308, K309, K310, K311, K312, K313,             \
    K401, K402, K403, K404, K405, K406,     K906, K407, K408, K409, K410, K411, K412, K413, K414,       \
    K501, K502, K503, K504, K505,           K506, K507, K508, K509, K510, K511,                                   \
    P201, P202, P203, P204,                                                                     \
    P205, P206, P207, P208,                                                                     \
    P209, P210, P211, P212,                                                                     \
    P213, P214, P215, P216                                                                      \
) { \
    { P101, P102, P103, P104, /**/ P105, P106, P107, P108, /**/ P109, P110, P111, P112, /**/ P113, P114, P115, P116 }, \
    { K101, K102, K103, K104, /**/ K105, K106, K907, K501, /**/ xxxx, xxxx, K201, K202, /**/ K203, K204, K205, K206 }, \
    { K301, K302, K303, K304, /**/ K305, K306, K502, K503, /**/ K504, K505, K401, K402, /**/ K403, K404, K405, K406 }, \
    { K211, K212, K213, xxxx, /**/ xxxx, xxxx, xxxx, xxxx, /**/ xxxx, xxxx, xxxx, xxxx, /**/ xxxx, xxxx, xxxx, xxxx }, \
    { K107, K108, K109, K110, /**/ K111, K112, K113, K114, /**/ K115, K506, K507, K214, /**/ K207, K208, K209, K210 }, \
    { K509, K510, K511, xxxx, /**/ xxxx, xxxx, xxxx, K906, /**/ xxxx, xxxx, xxxx, xxxx, /**/ xxxx, xxxx, xxxx, xxxx }, \
    { K307, K308, K309, K310, /**/ K311, K312, K313, K407, /**/ K408, K409, K410, K411, /**/ K412, K414, K508, K413 }, \
    { P201, P202, P203, P204, /**/ P205, P206, P207, P208, /**/ P209, P210, P211, P212, /**/ P213, P214, P215, P216 }  \
}
