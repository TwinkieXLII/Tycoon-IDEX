/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT

extern const uint8_t fan_fast0_64x64x4[2048] = { /* 0X00,0X04,0X40,0X00,0X40,0X00, */
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X03,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X00,0X00,0X00,
0X00,0X00,0X03,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X00,0X00,
0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X30,0X00,
0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X00,
0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X77,0X33,0X30,
0X00,0X33,0X37,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X30,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X37,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X30,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X03,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X30,0X03,0X37,0X33,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X03,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X70,0X03,0X7F,0XFF,0XF7,0X30,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X37,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X03,0X7F,0XFF,0XFF,0XFF,0X30,0X00,
0X00,0X00,0X00,0X00,0X03,0X73,0X30,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X30,0X37,0XFF,0XFF,0XFF,0XFF,0X30,0X00,
0X00,0X00,0X00,0X03,0X7F,0XFF,0XF7,0X30,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0X70,0X00,
0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XF7,0X30,0X3F,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0X30,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0X30,0X00,
0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XF3,0X03,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XF3,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0X30,0X00,
0X00,0X00,0X03,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0X30,0X3F,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0X70,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X30,0X00,
0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X07,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XF7,0X30,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X30,0X00,
0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X03,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XF7,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X30,0X00,
0X00,0X03,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X70,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0X70,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X30,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X70,0X3F,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X70,0X00,
0X00,0X37,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X0F,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XF7,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X30,0X00,
0X00,0X03,0X77,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X03,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XF3,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X30,0X00,
0X00,0X00,0X03,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0X73,0X00,0X00,
0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,0X7F,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0X70,0X00,0X00,0X00,0X37,0XFF,0XFF,0XFF,0XF7,0X00,0X00,0X33,
0X77,0X33,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,0X7F,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0X70,0X00,0X00,0X00,0X03,0X7F,0XFF,0XFF,0X73,0X00,0X07,0XFF,
0XFF,0XF7,0X70,0X00,0X07,0X77,0X77,0X77,0X77,0X77,0X73,0X00,0X3F,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0X30,0X00,0X00,0X00,0X00,0X03,0X7F,0XFF,0X30,0X00,0X7F,0XFF,
0XFF,0XFF,0XF7,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X37,0XF7,0X30,0X03,0XFF,0XFF,
0XFF,0XFF,0XFF,0X30,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0X03,0X00,0X00,0X00,0X00,0X00,0X00,0X33,0X00,0X07,0XFF,0XFF,
0XFF,0XFF,0XFF,0X70,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0X03,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X37,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF3,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0X03,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF3,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF3,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,
0XFF,0XFF,0XFF,0X70,0X00,0X33,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,
0XFF,0XFF,0XFF,0X30,0X00,0X7F,0X73,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0X30,0X30,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,
0XFF,0XFF,0XF7,0X00,0X03,0XFF,0XF7,0X30,0X00,0X00,0X00,0X00,0X0F,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0X30,0X00,0X37,0X77,0X77,0X77,0X77,0X77,0X73,0X00,0X07,0X7F,
0XFF,0XFF,0X73,0X00,0X07,0XFF,0XFF,0XF7,0X30,0X00,0X00,0X00,0X0F,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0X70,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,0X00,0X37,
0X77,0X73,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0X77,0X00,0X00,0X00,0X3F,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0X70,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X70,0X00,0X00,
0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0X73,0X00,0X00,0X7F,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XF0,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X30,0X00,
0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,0X00,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XF7,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X77,0X30,
0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,0X03,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X73,
0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,0X07,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0X30,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X70,
0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,0X3F,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0X73,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X30,
0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,0X7F,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XF7,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X00,
0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X03,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0X70,0X37,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X70,0X00,
0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X70,0X07,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XF3,0X03,0X7F,0XFF,0XFF,0XFF,0XFF,0XF7,0X30,0X00,
0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,0X3F,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0X30,0X37,0XFF,0XFF,0XFF,0XFF,0XF3,0X00,0X00,
0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X03,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0X73,0X03,0X7F,0XFF,0XFF,0XFF,0X70,0X00,0X00,
0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0X30,0X37,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X30,0X03,0X7F,0XFF,0XF7,0X00,0X00,0X00,
0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0X73,0X03,0X7F,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X73,0X00,0X03,0X33,0X30,0X00,0X00,0X00,
0X00,0X00,0X03,0XFF,0XFF,0XFF,0XF7,0X30,0X37,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X70,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X03,0X7F,0XFF,0XF7,0X30,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X30,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X33,0X73,0X30,0X03,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0X33,0X7F,0XFF,0XFF,0XFF,0XFF,0X73,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0X73,0X37,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XF3,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0X73,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X03,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0X30,0X03,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XF3,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X77,0X30,0X00,0X00,
0X00,0X00,0X00,0X37,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X30,0X03,0XFF,0XF7,0X00,
0X00,0X07,0XFF,0XFF,0X33,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X77,0X77,
0X77,0X77,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X73,0X3F,0XFF,0XF7,0X00,
0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X00,
0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X70,0X00,
0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,0X00,
0X00,0X00,0X00,0X37,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,
0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X70,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
};

extern const uint8_t fan_fast1_64x64x4[2048] = { /* 0X00,0X04,0X40,0X00,0X40,0X00, */
0X00,0X00,0X01,0X11,0X11,0X10,0X00,0X00,0X00,0X00,0X01,0X11,0X11,0X10,0X00,0X00,
0X00,0X00,0X01,0X11,0X11,0X10,0X00,0X00,0X00,0X00,0X01,0X11,0X11,0X10,0X00,0X00,
0X00,0X00,0X11,0X11,0X11,0X10,0X00,0X00,0X00,0X00,0X01,0X11,0X11,0X10,0X00,0X00,
0X00,0X00,0X01,0X11,0X11,0X10,0X00,0X00,0X00,0X00,0X01,0X11,0X11,0X10,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X10,0X00,0X00,0X34,0X44,0X44,0X44,0X44,0X44,0X44,0X44,0X44,0X44,0X44,0X44,
0X44,0X44,0X44,0X44,0X44,0X44,0X44,0X44,0X44,0X44,0X44,0X44,0X43,0X00,0X01,0X00,
0X11,0X10,0X00,0X7D,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XD7,0X00,0X11,
0X11,0X10,0X0A,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X90,0X01,
0X11,0X10,0X6F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF6,0X01,
0X11,0X00,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XEE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,
0X11,0X02,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC8,0X64,0X32,
0X21,0X22,0X36,0X9C,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X10,
0X11,0X02,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X72,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X37,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X10,
0X00,0X02,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0X50,0X00,0X00,0X02,0X69,
0XCD,0XDD,0XB8,0X40,0X00,0X05,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0X10,
0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0X60,0X00,0X10,0X03,0XAE,0XFF,
0XFF,0XFF,0XFF,0XFD,0X71,0X00,0X06,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X91,0X00,0X11,0X00,0X8F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFD,0X30,0X00,0X1A,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF6,0X00,0X11,0X11,0X05,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XD1,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X40,0X00,0X01,0X10,0X09,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF6,0X00,0X00,0X05,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0X00,0X00,0X01,0X10,0X09,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF4,0X00,0X00,0X00,0X5F,0XFF,0XFF,0XFF,0XFF,0XFD,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0X40,0X00,0X00,0X01,0X11,0X07,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X05,0XFF,0XFF,0XFF,0XFF,0XFD,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XF6,0X00,0X00,0X00,0X11,0X11,0X04,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF6,0X00,0X00,0X00,0X00,0X00,0X8F,0XFF,0XFF,0XFF,0XFD,0X00,
0X00,0X02,0XEF,0XFF,0XFF,0XFF,0XA0,0X00,0X00,0X00,0X00,0X00,0X02,0XEF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X50,0X00,0X00,0X00,0X00,0X00,0X0B,0XFF,0XFF,0XFF,0XFD,0X00,
0X00,0X02,0XFF,0XFF,0XFF,0XFE,0X20,0X10,0X00,0X10,0X00,0X00,0X00,0XCF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XE3,0X00,0X00,0X00,0X00,0X00,0X00,0X02,0XFF,0XFF,0XFF,0XFD,0X10,
0X11,0X02,0XFF,0XFF,0XFF,0XF6,0X01,0X01,0X01,0X10,0X00,0X00,0X00,0X9F,0XFF,0XFF,
0XFF,0XFF,0XFE,0X30,0X00,0X00,0X11,0X11,0X11,0X10,0X00,0X7F,0XFF,0XFF,0XFE,0X10,
0X11,0X02,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X01,0X10,0X00,0X00,0X00,0X6F,0XFF,0XFF,
0XFF,0XFF,0XF4,0X00,0X00,0X00,0X11,0X11,0X11,0X10,0X00,0X0E,0XFF,0XFF,0XFE,0X10,
0X11,0X02,0XFF,0XFF,0XFF,0X50,0X03,0XAA,0X20,0X10,0X00,0X00,0X00,0X3F,0XFF,0XFE,
0XEE,0XFF,0X60,0X00,0X00,0X00,0X11,0X11,0X11,0X10,0X00,0X07,0XFF,0XFF,0XFE,0X10,
0X11,0X02,0XFF,0XFF,0XFD,0X00,0X4F,0XFF,0XE2,0X00,0X00,0X00,0X00,0X0E,0XF9,0X52,
0X12,0X44,0X00,0X00,0X00,0X00,0X01,0X11,0X10,0X00,0X00,0X01,0XEF,0XFF,0XFE,0X10,
0X11,0X02,0XFF,0XFF,0XF8,0X01,0XEF,0XFF,0XFD,0X20,0X00,0X00,0X00,0X07,0X30,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XAF,0XFF,0XFE,0X10,
0X11,0X02,0XFF,0XFF,0XF3,0X07,0XFF,0XFF,0XFF,0XC1,0X00,0X00,0X00,0X00,0X00,0X10,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X14,0X68,0XA9,0X20,0X00,0X5F,0XFF,0XFE,0X10,
0X00,0X02,0XFF,0XFF,0XD0,0X0D,0XFF,0XFF,0XFF,0XFB,0X00,0X00,0X00,0X00,0X00,0X02,
0X33,0X20,0X00,0X00,0X00,0X24,0X8B,0XDF,0XFF,0XFF,0XE3,0X00,0X1E,0XFF,0XFE,0X10,
0X00,0X01,0XFF,0XFF,0XB0,0X4F,0XFF,0XFF,0XFF,0XFF,0XB0,0X01,0X10,0X10,0X02,0X9E,
0XFF,0XE9,0X20,0X10,0X0A,0XEF,0XFF,0XFF,0XFF,0XFF,0XFD,0X10,0X0C,0XFF,0XFD,0X00,
0X00,0X01,0XFF,0XFF,0X80,0X7F,0XFF,0XFF,0XFF,0XFF,0XFB,0X10,0X11,0X10,0X3E,0XFF,
0XFF,0XFF,0XE4,0X01,0X06,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X70,0X09,0XFF,0XFD,0X00,
0X00,0X01,0XFF,0XFF,0X60,0XAF,0XFF,0XFF,0XFF,0XFF,0XFF,0XD3,0X01,0X02,0XEF,0XFF,
0XFF,0XFF,0XFE,0X20,0X00,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XD1,0X07,0XFF,0XFD,0X00,
0X00,0X01,0XFF,0XFF,0X40,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X01,0X09,0XFF,0XFF,
0XFF,0XFF,0XFF,0X80,0X10,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X06,0XFF,0XFD,0X00,
0X00,0X01,0XFF,0XFF,0X40,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X1D,0XFF,0XFF,
0XFF,0XFF,0XFF,0XC0,0X00,0X5F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X05,0XFF,0XFD,0X00,
0X00,0X01,0XFF,0XFF,0X30,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF5,0X00,0X2E,0XFF,0XFF,
0XFF,0XFF,0XFF,0XD1,0X00,0X4F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X04,0XFF,0XFD,0X00,
0X00,0X01,0XFF,0XFF,0X30,0X9F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF5,0X00,0X2E,0XFF,0XFF,
0XFF,0XFF,0XFF,0XD1,0X00,0X5F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF9,0X04,0XFF,0XFD,0X00,
0X00,0X02,0XEF,0XFF,0X40,0X6F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X00,0X0C,0XFF,0XFF,
0XFF,0XFF,0XFF,0XA0,0X00,0X9F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF9,0X05,0XFF,0XFD,0X00,
0X00,0X02,0XFF,0XFF,0X40,0X2F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF9,0X00,0X06,0XFF,0XFF,
0XFF,0XFF,0XFF,0X40,0X00,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X06,0XFF,0XFD,0X10,
0X11,0X02,0XFF,0XFF,0X60,0X0B,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X10,0X00,0XBF,0XFF,
0XFF,0XFF,0XF9,0X00,0X00,0X0A,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0X07,0XFF,0XFE,0X10,
0X11,0X02,0XFF,0XFF,0X90,0X05,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X90,0X00,0X1A,0XFF,
0XFF,0XFF,0X90,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XF4,0X0A,0XFF,0XFE,0X10,
0X11,0X02,0XFF,0XFF,0XB0,0X00,0XCF,0XFF,0XFF,0XFF,0XFE,0XDA,0X60,0X00,0X00,0X49,
0XCC,0X94,0X00,0X00,0X00,0X00,0X08,0XFF,0XFF,0XFF,0XFF,0XF1,0X0D,0XFF,0XFE,0X10,
0X11,0X02,0XFF,0XFF,0XE1,0X00,0X2C,0XFF,0XFC,0XA7,0X42,0X00,0X00,0X00,0X10,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X8F,0XFF,0XFF,0XFF,0XA0,0X2F,0XFF,0XFE,0X10,
0X11,0X02,0XFF,0XFF,0XF5,0X00,0X01,0X44,0X21,0X00,0X00,0X00,0X00,0X00,0X11,0X00,
0X00,0X10,0X00,0X10,0X00,0X00,0X10,0X09,0XFF,0XFF,0XFF,0X40,0X7F,0XFF,0XFE,0X10,
0X11,0X02,0XFF,0XFF,0XFB,0X00,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X10,0X00,
0X00,0X00,0X3B,0XA0,0X00,0X00,0X11,0X00,0XAF,0XFF,0XF9,0X00,0XCF,0XFF,0XFE,0X10,
0X00,0X02,0XFF,0XFF,0XFF,0X20,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XA9,
0X88,0X9D,0XFF,0XC0,0X00,0X00,0X00,0X00,0X0A,0XFF,0X90,0X03,0XFF,0XFF,0XFD,0X10,
0X00,0X01,0XFF,0XFF,0XFF,0X90,0X00,0X00,0X00,0X00,0X01,0X11,0X11,0X10,0X1D,0XFF,
0XFF,0XFF,0XFF,0XF2,0X01,0X10,0X00,0X00,0X00,0X44,0X00,0X0A,0XFF,0XFF,0XFD,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XE2,0X00,0X00,0X00,0X00,0X01,0X11,0X11,0X00,0XBF,0XFF,
0XFF,0XFF,0XFF,0XF5,0X01,0X10,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFD,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XFA,0X00,0X00,0X00,0X00,0X01,0X11,0X00,0X0A,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF8,0X01,0X10,0X00,0X00,0X00,0X00,0X00,0XBF,0XFF,0XFF,0XFD,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XFF,0X40,0X00,0X00,0X00,0X01,0X01,0X01,0XBF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFA,0X00,0X10,0X00,0X00,0X00,0X00,0X06,0XFF,0XFF,0XFF,0XFD,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XD1,0X00,0X00,0X00,0X01,0X10,0X2C,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFD,0X10,0X10,0X00,0X00,0X00,0X00,0X2E,0XFF,0XFF,0XFF,0XFD,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFB,0X00,0X00,0X00,0X01,0X03,0XDF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X30,0X10,0X00,0X00,0X00,0X00,0XCF,0XFF,0XFF,0XFF,0XFD,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0X90,0X00,0X00,0X10,0X3E,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X50,0X10,0X00,0X00,0X00,0X0A,0XFF,0XFF,0XFF,0XFF,0XFD,0X00,
0X00,0X02,0XEF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X8F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X70,0X00,0X00,0X00,0X00,0X9F,0XFF,0XFF,0XFF,0XFF,0XFD,0X00,
0X00,0X02,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X90,0X00,0X00,0X6F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X40,0X00,0X00,0X00,0X1A,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0X10,
0X11,0X02,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0X20,0X00,0X0C,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFA,0X00,0X00,0X10,0X03,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X10,
0X11,0X02,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE6,0X00,0X01,0X9F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X90,0X00,0X00,0X00,0X7E,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X10,
0X11,0X02,0XFF,0XFF,0X72,0X5F,0XFF,0XFF,0XFF,0XFF,0XB3,0X00,0X03,0XAD,0XFF,0XFF,
0XFF,0XFD,0X93,0X00,0X00,0X00,0X4B,0XFF,0XFF,0XFF,0XFF,0XE4,0X28,0XFF,0XFE,0X10,
0X11,0X02,0XFF,0XFA,0X00,0X08,0XFF,0XFF,0XFF,0XFF,0XFF,0XA4,0X00,0X00,0X45,0X67,
0X65,0X41,0X00,0X00,0X00,0X4B,0XFF,0XFF,0XFF,0XFF,0XFF,0X70,0X00,0XCF,0XFD,0X10,
0X11,0X02,0XFF,0XFA,0X00,0X08,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC8,0X31,0X00,0X00,
0X00,0X00,0X00,0X14,0X8D,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X60,0X00,0XBF,0XFE,0X10,
0X11,0X02,0XEF,0XFF,0X61,0X5E,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XBA,0X86,
0X66,0X78,0XAB,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE4,0X17,0XFF,0XFD,0X10,
0X00,0X00,0XBF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,0XFF,0XF9,0X00,
0X00,0X00,0X4F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF2,0X00,
0X00,0X00,0X06,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X40,0X00,
0X00,0X00,0X00,0X29,0XBC,0XCB,0XBB,0XBB,0XBB,0XBB,0XBC,0XCC,0XCC,0XCC,0XBB,0XBB,
0XBB,0XBB,0XBC,0XCC,0XCC,0XCC,0XBB,0XBB,0XBB,0XBB,0XBC,0XCC,0XCB,0X82,0X00,0X00,
0X00,0X00,0X11,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X01,0X11,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X10,0X00,0X00,
};

#endif // HAS_GRAPHICAL_TFT
