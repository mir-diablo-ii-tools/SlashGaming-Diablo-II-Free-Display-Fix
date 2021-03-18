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

#ifndef SGD2FDF_PATCHES_D2DDRAW_FIX_CORNER_TEXT_PATCH_D2DDRAW_FIX_CORNER_TEXT_PATCH_H_
#define SGD2FDF_PATCHES_D2DDRAW_FIX_CORNER_TEXT_PATCH_D2DDRAW_FIX_CORNER_TEXT_PATCH_H_

#include "d2ddraw_fix_corner_text_patch_1_00.h"
#include "d2ddraw_fix_corner_text_patch_1_11.h"
#include "d2ddraw_fix_corner_text_patch_classic_1_14d.h"

struct D2DDraw_FixCornerTextPatch {
  union {
    struct D2DDraw_FixCornerTextPatch_1_00* ptr_1_00;
    struct D2DDraw_FixCornerTextPatch_1_11* ptr_1_11;
    struct D2DDraw_FixCornerTextPatch_Classic1_14D* ptr_classic_1_14d;
  } patch;
};

struct D2DDraw_FixCornerTextPatch
D2DDraw_FixCornerTextPatch_Init(void);

void D2DDraw_FixCornerTextPatch_Deinit(
    struct D2DDraw_FixCornerTextPatch* patch
);

void D2DDraw_FixCornerTextPatch_Apply(
    struct D2DDraw_FixCornerTextPatch* patch
);

void D2DDraw_FixCornerTextPatch_Remove(
    struct D2DDraw_FixCornerTextPatch* patch
);

#endif /* SGD2FDF_PATCHES_D2DDRAW_FIX_CORNER_TEXT_PATCH_D2DDRAW_FIX_CORNER_TEXT_PATCH_H_ */
