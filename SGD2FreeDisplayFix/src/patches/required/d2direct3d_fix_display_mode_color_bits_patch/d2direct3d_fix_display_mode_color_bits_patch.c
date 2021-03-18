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

#include "d2direct3d_fix_display_mode_color_bits_patch.h"

#include <mdc/malloc/malloc.h>

static int IsRequirePatch(void) {
  enum D2_VideoMode video_mode;

  video_mode = D2_Helper_DetermineVideoMode();

  /* 1.14 and above already contains the fix. */
  return (video_mode == D2_VideoMode_kDirect3D
      && D2_GameVersion_IsRunningAtLeast1_14());
}

/**
 * External
 */

struct D2Direct3D_FixDisplayModeColorBitsPatch
D2Direct3D_FixDisplayModeColorBitsPatch_Init(void) {
  struct D2Direct3D_FixDisplayModeColorBitsPatch patch;

  enum D2_GameVersion running_game_version;

  if (!IsRequirePatch()) {
    patch.patch.ptr_1_00 = NULL;
    return patch;
  }
  
  running_game_version = D2_GameVersion_GetRunning();

  switch (running_game_version) {
    case D2_GameVersion_k1_00:
    case D2_GameVersion_k1_01:
    case D2_GameVersion_k1_02:
    case D2_GameVersion_k1_03:
    case D2_GameVersion_k1_04B_C:
    case D2_GameVersion_k1_05:
    case D2_GameVersion_k1_05B:
    case D2_GameVersion_k1_06:
    case D2_GameVersion_k1_06B:
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
    case D2_GameVersion_k1_11:
    case D2_GameVersion_k1_11B:
    case D2_GameVersion_k1_12A:
    case D2_GameVersion_k1_13ABeta:
    case D2_GameVersion_k1_13C:
    case D2_GameVersion_k1_13D: {
      patch.patch.ptr_1_00 = Mdc_malloc(sizeof(*patch.patch.ptr_1_00));
      *patch.patch.ptr_1_00 = D2Direct3D_FixDisplayModeColorBitsPatch_1_00_Init();

      break;
    }
  }

  return patch;
}

void D2Direct3D_FixDisplayModeColorBitsPatch_Deinit(
    struct D2Direct3D_FixDisplayModeColorBitsPatch* patch
) {
  enum D2_GameVersion running_game_version;

  if (!IsRequirePatch()) {
    return;
  }

  running_game_version = D2_GameVersion_GetRunning();

  switch (running_game_version) {
    case D2_GameVersion_k1_00:
    case D2_GameVersion_k1_01:
    case D2_GameVersion_k1_02:
    case D2_GameVersion_k1_03:
    case D2_GameVersion_k1_04B_C:
    case D2_GameVersion_k1_05:
    case D2_GameVersion_k1_05B:
    case D2_GameVersion_k1_06:
    case D2_GameVersion_k1_06B:
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
    case D2_GameVersion_k1_11:
    case D2_GameVersion_k1_11B:
    case D2_GameVersion_k1_12A:
    case D2_GameVersion_k1_13ABeta:
    case D2_GameVersion_k1_13C:
    case D2_GameVersion_k1_13D: {
      D2Direct3D_FixDisplayModeColorBitsPatch_1_00_Deinit(patch->patch.ptr_1_00);
      Mdc_free(patch->patch.ptr_1_00);

      break;
    }
  }
}

void D2Direct3D_FixDisplayModeColorBitsPatch_Apply(
    struct D2Direct3D_FixDisplayModeColorBitsPatch* patch
) {
  enum D2_GameVersion running_game_version;

  if (!IsRequirePatch()) {
    return;
  }

  running_game_version = D2_GameVersion_GetRunning();

  switch (running_game_version) {
    case D2_GameVersion_k1_00:
    case D2_GameVersion_k1_01: {
      /*
      * TODO (Mir Drualga): Disabled because it crashes the game when
      * the main menu loads.
      */
      break;
    }

    case D2_GameVersion_k1_02:
    case D2_GameVersion_k1_03:
    case D2_GameVersion_k1_04B_C:
    case D2_GameVersion_k1_05:
    case D2_GameVersion_k1_05B:
    case D2_GameVersion_k1_06:
    case D2_GameVersion_k1_06B:
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
    case D2_GameVersion_k1_11:
    case D2_GameVersion_k1_11B:
    case D2_GameVersion_k1_12A:
    case D2_GameVersion_k1_13ABeta:
    case D2_GameVersion_k1_13C:
    case D2_GameVersion_k1_13D: {
      D2Direct3D_FixDisplayModeColorBitsPatch_1_00_Apply(patch->patch.ptr_1_00);

      break;
    }
  }
}

void D2Direct3D_FixDisplayModeColorBitsPatch_Remove(
    struct D2Direct3D_FixDisplayModeColorBitsPatch* patch
) {
  enum D2_GameVersion running_game_version;

  if (!IsRequirePatch()) {
    return;
  }

  running_game_version = D2_GameVersion_GetRunning();

  switch (running_game_version) {
    case D2_GameVersion_k1_00:
    case D2_GameVersion_k1_01:
    case D2_GameVersion_k1_02:
    case D2_GameVersion_k1_03:
    case D2_GameVersion_k1_04B_C:
    case D2_GameVersion_k1_05:
    case D2_GameVersion_k1_05B:
    case D2_GameVersion_k1_06:
    case D2_GameVersion_k1_06B:
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
    case D2_GameVersion_k1_11:
    case D2_GameVersion_k1_11B:
    case D2_GameVersion_k1_12A:
    case D2_GameVersion_k1_13ABeta:
    case D2_GameVersion_k1_13C:
    case D2_GameVersion_k1_13D: {
      D2Direct3D_FixDisplayModeColorBitsPatch_1_00_Remove(patch->patch.ptr_1_00);

      break;
    }
  }
}
