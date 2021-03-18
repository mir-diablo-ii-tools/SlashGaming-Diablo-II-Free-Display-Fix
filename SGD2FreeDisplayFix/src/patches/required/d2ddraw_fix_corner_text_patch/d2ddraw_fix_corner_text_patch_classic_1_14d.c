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

#include "d2ddraw_fix_corner_text_patch_classic_1_14d.h"

#include <stddef.h>

#include <mdc/error/exit_on_error.h>
#include <mdc/std/stdint.h>
#include <mdc/wchar_t/filew.h>
#include "../../../helper/patch_address_and_size.h"

/**
 * Interception Function Shims
 */

void __cdecl D2DDraw_FixCornerTextPatch_Classic1_14D_InterceptionFunc01(void);

void __cdecl D2DDraw_FixCornerTextPatch_Classic1_14D_InterceptionFunc02(void);

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
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x105429
          );

      patch_address_and_size.size = 0x10543A - 0x105429;

      break;
    }

    case D2_GameVersion_kLod1_14D: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x112439
          );

      patch_address_and_size.size = 0x11244A - 0x112439;

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

static struct PatchAddressAndSize GetPatchAddressAndSize02(
    enum D2_GameVersion game_version
) {
  struct PatchAddressAndSize patch_address_and_size;

  switch (game_version) {
    case D2_GameVersion_kClassic1_14D: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x105464
          );

      patch_address_and_size.size = 0x105479 - 0x105464;

      break;
    }

    case D2_GameVersion_kLod1_14D: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x112474
          );

      patch_address_and_size.size = 0x112489 - 0x112474;

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

struct D2DDraw_FixCornerTextPatch_Classic1_14D
D2DDraw_FixCornerTextPatch_Classic1_14D_Init(void) {
  struct D2DDraw_FixCornerTextPatch_Classic1_14D patch;

  const enum D2_GameVersion running_game_version =
      D2_GameVersion_GetRunning();

  struct PatchAddressAndSize patch_addresses_and_sizes[
      D2DDraw_FixCornerTextPatch_Classic1_14D_kPatchesCount
  ];

  patch_addresses_and_sizes[0] = GetPatchAddressAndSize01(
      running_game_version
  );

  patch_addresses_and_sizes[1] = GetPatchAddressAndSize02(
      running_game_version
  );

  /* Fix device context creation. */
  patch.patches[0] = Mapi_GamePatch_InitGameBranchPatch(
      &patch_addresses_and_sizes[0].address,
      Mapi_BranchType_kCall,
      &D2DDraw_FixCornerTextPatch_Classic1_14D_InterceptionFunc01,
      patch_addresses_and_sizes[0].size
  );

  /* Fix bitmap creation. */
  patch.patches[1] = Mapi_GamePatch_InitGameBranchPatch(
      &patch_addresses_and_sizes[1].address,
      Mapi_BranchType_kCall,
      &D2DDraw_FixCornerTextPatch_Classic1_14D_InterceptionFunc02,
      patch_addresses_and_sizes[1].size
  );

  return patch;
}

void D2DDraw_FixCornerTextPatch_Classic1_14D_Deinit(
    struct D2DDraw_FixCornerTextPatch_Classic1_14D* patch
) {
  size_t i;

  for (i = 0; i < D2DDraw_FixCornerTextPatch_Classic1_14D_kPatchesCount; i += 1) {
    Mapi_GamePatch_Deinit(&patch->patches[i]);
  }
}

void D2DDraw_FixCornerTextPatch_Classic1_14D_Apply(
    struct D2DDraw_FixCornerTextPatch_Classic1_14D* patch
) {
  size_t i;

  for (i = 0; i < D2DDraw_FixCornerTextPatch_Classic1_14D_kPatchesCount; i += 1) {
    Mapi_GamePatch_Apply(&patch->patches[i]);
  }
}

void D2DDraw_FixCornerTextPatch_Classic1_14D_Remove(
    struct D2DDraw_FixCornerTextPatch_Classic1_14D* patch
) {
  size_t i;

  for (i = 0; i < D2DDraw_FixCornerTextPatch_Classic1_14D_kPatchesCount; i += 1) {
    Mapi_GamePatch_Remove(&patch->patches[i]);
  }
}
