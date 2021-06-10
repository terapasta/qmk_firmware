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
#define LAYOUT( \
    key000, key001, key002, key003, key004, key005, key006, key007, key008, key009, key010, key011, key012, key013, key014, key015, \
    key100, key101, key102, key103, key104, key105, key106, key107, key108, key109, key110, key111, key112, key113, key114, key115, \
    key200, key201, key202, key203, key204, key205, key206, key207, key208, key209, key210, key211, key212, key213, key214, key215, \
    key300, key301, key302, key303, key304, key305, key306, key307, key308, key309, key310, key311, key312, key313, key314, key315, \
    key400, key401, key402, key403, key404, key405, key406, key407, key408, key409, key410, key411, key412, key413, key414, key415, \
    key500, key501, key502, key503, key504, key505, key506, key507, key508, key509, key510, key511, key512, key513, key514, key515 \
) { \
    {   key000, key001, key002, key003, key004, key005, key006, key007, key008, key009, key010, key011, key012, key013, key014, key015  }, \
    {   key100, key101, key102, key103, key104, key105, key106, key107, key108, key109, key110, key111, key112, key113, key114, key115  }, \
    {   key200, key201, key202, key203, key204, key205, key206, key207, key208, key209, key210, key211, key212, key213, key214, key215  }, \
    {   key300, key301, key302, key303, key304, key305, key306, key307, key308, key309, key310, key311, key312, key313, key314, key315  }, \
    {   key400, key401, key402, key403, key404, key405, key406, key407, key408, key409, key410, key411, key412, key413, key414, key415  }, \
    {   key500, key501, key502, key503, key504, key505, key506, key507, key508, key509, key510, key511, key512, key513, key514, key515  } \
}

