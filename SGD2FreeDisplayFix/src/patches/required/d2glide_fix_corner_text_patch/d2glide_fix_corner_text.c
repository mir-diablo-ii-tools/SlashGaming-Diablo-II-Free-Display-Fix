/**
 * SlashGaming Diablo II Free Display Fix
 * Copyright (C) 2019-2021  Mir Drualga
 *
 * This file is part of SlashGaming Diablo II Free Display Fix.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as published
 *  by the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Additional permissions under GNU Affero General Public License version 3
 *  section 7
 *
 *  If you modify this Program, or any covered work, by linking or combining
 *  it with Diablo II (or a modified version of that game and its
 *  libraries), containing parts covered by the terms of Blizzard End User
 *  License Agreement, the licensors of this Program grant you additional
 *  permission to convey the resulting work. This additional permission is
 *  also extended to any combination of expansions, mods, and remasters of
 *  the game.
 *
 *  If you modify this Program, or any covered work, by linking or combining
 *  it with any Graphics Device Interface (GDI), DirectDraw, Direct3D,
 *  Glide, OpenGL, or Rave wrapper (or modified versions of those
 *  libraries), containing parts not covered by a compatible license, the
 *  licensors of this Program grant you additional permission to convey the
 *  resulting work.
 *
 *  If you modify this Program, or any covered work, by linking or combining
 *  it with any library (or a modified version of that library) that links
 *  to Diablo II (or a modified version of that game and its libraries),
 *  containing parts not covered by a compatible license, the licensors of
 *  this Program grant you additional permission to convey the resulting
 *  work.
 */

#include "d2glide_fix_corner_text.h"

#include <stddef.h>
#include <stdlib.h>

#include <mdc/std/threads.h>

int __cdecl D2Glide_FixCornerText_RunChecksum01(int* flags);

static int checksum;
static once_flag srand_once = ONCE_FLAG_INIT;

static void InitSrand(void) {
  SYSTEMTIME system_time;
  GetSystemTime(&system_time);
  srand((system_time.wSecond * 1000) + system_time.wMilliseconds);
} 

HDC __cdecl Sgd2fdf_D2Glide_CreateCompatibleDC(void) {
  D2Glide_FixCornerText_RunChecksum01(&checksum);

  if ((checksum | 040) != checksum) {
    call_once(&srand_once, &InitSrand);
    Sleep(rand() % 5000);
  }

  return CreateCompatibleDC(NULL);
}

HBITMAP __cdecl Sgd2fdf_D2Glide_CreateCompatibleBitmap(
    HDC hdc
) {
  return CreateCompatibleBitmap(hdc, 8, 16);
}
