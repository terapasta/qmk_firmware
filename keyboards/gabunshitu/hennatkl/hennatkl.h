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
#define LAYOUT( \
    k101,   k102,   k103,   k104,   k105,   k106,   k107,   k111,   k112,   k113,   k121,   k122,   k123,   k124,   k125,   k126,                           \
    k201,   k202,   k203,   k204,   k205,   k206,           k211,   k212,   k213,   k221,   k222,   k223,   k224,   k225,   k226,   k227,   k228,   k229,   \
    k301,   k302,   k303,   k304,   k305,   k306,           k311,   k312,   k313,   k321,   k322,   k323,   k324,   k325,   k326,   k327,   k328,           \
    k401,   k402,   k403,   k404,   k405,   k406,                                   k421,   k422,   k423,   k424,   k425,   k426,   k427,                   \
    k501,   k502,   k503,   k504,   k505,   k506,           k511,   k512,   k513,   k521,   k522,   k523,   k524,   k525,   k526,   k527,                   \
    k601,   k602,   k603,   k604,   k605,   k606,           k611,   k612,   k613,   k621,   k622,   k623,   k624,   k625,   k626,   k627                    \
) \
{ \
    { k101, k102, k103, k104, /**/ k105, k106, k107, xxxx, /**/ xxxx, xxxx, k201, k202, /**/ k203, k204, k205, k206 }, \
    { k301, k302, k303, k304, /**/ k305, k306, k401, k402, /**/ k403, k404, k405, k406, /**/ k501, k502, k503, k504 }, \
    { k605, k606, k601, k602, /**/ k602, k604, k605, k606, /**/ xxxx, xxxx, xxxx, xxxx, /**/ xxxx, xxxx, xxxx, xxxx }, \
    { k111, k112, k113, k211, /**/ k212, k213, k311, k312, /**/ k313, k511, k512, k213, /**/ k611, k612, k613, xxxx }, \
    { k121, k122, k123, k124, /**/ k125, k126, xxxx, k328, /**/ xxxx, xxxx, xxxx, xxxx, /**/ xxxx, xxxx, xxxx, xxxx }, \
    { k221, k222, k223, k224, /**/ k225, k226, k227, k228, /**/ k229, k321, k322, k323, /**/ k324, k325, k326, k327 }, \
    { k421, k422, k423, k424, /**/ k425, k426, k427, xxxx, /**/ xxxx, xxxx, xxxx, xxxx, /**/ xxxx, xxxx, xxxx, xxxx }, \
    { k521, k522, k523, k524, /**/ k525, k526, k527, xxxx, /**/ k621, k622, k623, k624, /**/ k625, k626, k627, xxxx }, \
}
