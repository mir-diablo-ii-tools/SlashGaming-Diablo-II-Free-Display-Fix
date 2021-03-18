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
 *  it with any Glide wrapper (or a modified version of that library),
 *  containing parts not covered by a compatible license, the licensors of
 *  this Program grant you additional permission to convey the resulting
 *  work.
 */

#include "game_restore_ddraw_patch_classic_1_14d.h"

#include <stddef.h>

#include <mdc/error/exit_on_error.h>
#include <mdc/std/stdint.h>
#include <mdc/wchar_t/filew.h>
#include "../../../helper/patch_address_and_size.h"

/**
 * Interception Function Shims
 */

void __cdecl Game_RestoreDDrawPatch_Classic1_14D_InterceptionFunc01(void);

/**
 * Addresses and Sizes
 */

static struct PatchAddressAndSize GetPatchAddressAndSize01(
    enum D2_GameVersion game_version
) {
  struct PatchAddressAndSize patch_address_and_size;

  switch (game_version) {
    case D2_GameVersion_kClassic1_14D: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromPathAndOffset(
              Mapi_GameExecutable_GetPath(),
              0x63D1
          );

      patch_address_and_size.size = 0x63E3 - 0x63D1;

      break;
    }

    default: {
      Mdc_Error_ExitOnConstantMappingError(
          __FILEW__,
          __LINE__,
          game_version
      );

      goto return_bad;
    }
  }

  return patch_address_and_size;

return_bad:
  return PatchAddressAndSize_kUninit;
}

/**
 * External
 */

struct Game_RestoreDDrawPatch_Classic1_14D
Game_RestoreDDrawPatch_Classic1_14D_Init(void) {
  struct Game_RestoreDDrawPatch_Classic1_14D patch;

  const enum D2_GameVersion running_game_version =
      D2_GameVersion_GetRunning();

  struct PatchAddressAndSize patch_addresses_and_sizes[
      Game_RestoreDDrawPatch_Classic1_14D_kPatchesCount
  ];

  patch_addresses_and_sizes[0] = GetPatchAddressAndSize01(
      running_game_version
  );

  /* Get video mode settings from the registry. */
  patch.patches[0] = Mapi_GamePatch_InitGameBranchPatch(
      &patch_addresses_and_sizes[0].address,
      Mapi_BranchType_kCall,
      &Game_RestoreDDrawPatch_Classic1_14D_InterceptionFunc01,
      patch_addresses_and_sizes[0].size
  );

  return patch;
}

void Game_RestoreDDrawPatch_Classic1_14D_Deinit(
    struct Game_RestoreDDrawPatch_Classic1_14D* patch
) {
  size_t i;

  for (i = 0;
      i < Game_RestoreDDrawPatch_Classic1_14D_kPatchesCount;
      i += 1) {
    Mapi_GamePatch_Deinit(&patch->patches[i]);
  }
}

void Game_RestoreDDrawPatch_Classic1_14D_Apply(
    struct Game_RestoreDDrawPatch_Classic1_14D* patch
) {
  size_t i;

  for (i = 0;
      i < Game_RestoreDDrawPatch_Classic1_14D_kPatchesCount;
      i += 1) {
    Mapi_GamePatch_Apply(&patch->patches[i]);
  }
}

void Game_RestoreDDrawPatch_Classic1_14D_Remove(
    struct Game_RestoreDDrawPatch_Classic1_14D* patch
) {
  size_t i;

  for (i = 0;
      i < Game_RestoreDDrawPatch_Classic1_14D_kPatchesCount;
      i += 1) {
    Mapi_GamePatch_Remove(&patch->patches[i]);
  }
}
