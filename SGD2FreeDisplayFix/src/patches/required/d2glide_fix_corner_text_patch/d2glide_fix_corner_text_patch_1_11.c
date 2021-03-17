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

#include "d2glide_fix_corner_text_patch_1_11.h"

#include <stddef.h>

#include <mdc/error/exit_on_error.h>
#include <mdc/std/stdint.h>
#include <mdc/wchar_t/filew.h>
#include "../../../helper/patch_address_and_size.h"

/**
 * Interception Function Shims
 */

void __cdecl D2Glide_FixCornerTextPatch_1_11_InterceptionFunc01(void);

void __cdecl D2Glide_FixCornerTextPatch_1_11_InterceptionFunc02(void);

/**
 * Addresses and Sizes
 */

static struct PatchAddressAndSize GetPatchAddressAndSize01(
    enum D2_GameVersion game_version
) {
  struct PatchAddressAndSize patch_address_and_size;

  switch (game_version) {
    case D2_GameVersion_k1_11: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Glide,
              0xC4F9
          );

      patch_address_and_size.size = 0xC507 - 0xC4F9;

      break;
    }

    case D2_GameVersion_k1_11B: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Glide,
              0x6149
          );

      patch_address_and_size.size = 0x6157 - 0x6149;

      break;
    }

    case D2_GameVersion_k1_12A: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Glide,
              0xC309
          );

      patch_address_and_size.size = 0xC317 - 0xC309;

      break;
    }

    case D2_GameVersion_k1_13ABeta: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Glide,
              0xBF39
          );

      patch_address_and_size.size = 0xBF47 - 0xBF39;

      break;
    }

    case D2_GameVersion_k1_13C: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Glide,
              0x7A29
          );

      patch_address_and_size.size = 0x7A37 - 0x7A29;

      break;
    }

    case D2_GameVersion_k1_13D: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Glide,
              0x7E99
          );

      patch_address_and_size.size = 0x7EA7 - 0x7E99;

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
    case D2_GameVersion_k1_11: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Glide,
              0xC527
          );

      patch_address_and_size.size = 0xC53C - 0xC527;

      break;
    }

    case D2_GameVersion_k1_11B: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Glide,
              0x6177
          );

      patch_address_and_size.size = 0x618C - 0x6177;

      break;
    }

    case D2_GameVersion_k1_12A: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Glide,
              0xC337
          );

      patch_address_and_size.size = 0xC34C - 0xC337;

      break;
    }

    case D2_GameVersion_k1_13ABeta: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Glide,
              0xBF67
          );

      patch_address_and_size.size = 0xBF7C - 0xBF67;

      break;
    }

    case D2_GameVersion_k1_13C: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Glide,
              0x7A57
          );

      patch_address_and_size.size = 0x7A6C - 0x7A57;

      break;
    }

    case D2_GameVersion_k1_13D: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Glide,
              0x7EC7
          );

      patch_address_and_size.size = 0x7EDC - 0x7EC7;

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

struct D2Glide_FixCornerTextPatch_1_11
D2Glide_FixCornerTextPatch_1_11_Init(void) {
  struct D2Glide_FixCornerTextPatch_1_11 patch;

  const enum D2_GameVersion running_game_version =
      D2_GameVersion_GetRunning();

  struct PatchAddressAndSize patch_addresses_and_sizes[
      D2Glide_FixCornerTextPatch_1_11_kPatchesCount
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
      &D2Glide_FixCornerTextPatch_1_11_InterceptionFunc01,
      patch_addresses_and_sizes[0].size
  );

  /* Fix bitmap creation. */
  patch.patches[1] = Mapi_GamePatch_InitGameBranchPatch(
      &patch_addresses_and_sizes[1].address,
      Mapi_BranchType_kCall,
      &D2Glide_FixCornerTextPatch_1_11_InterceptionFunc02,
      patch_addresses_and_sizes[1].size
  );

  return patch;
}

void D2Glide_FixCornerTextPatch_1_11_Deinit(
    struct D2Glide_FixCornerTextPatch_1_11* patch
) {
  size_t i;

  for (i = 0; i < D2Glide_FixCornerTextPatch_1_11_kPatchesCount; i += 1) {
    Mapi_GamePatch_Deinit(&patch->patches[i]);
  }
}

void D2Glide_FixCornerTextPatch_1_11_Apply(
    struct D2Glide_FixCornerTextPatch_1_11* patch
) {
  size_t i;

  for (i = 0; i < D2Glide_FixCornerTextPatch_1_11_kPatchesCount; i += 1) {
    Mapi_GamePatch_Apply(&patch->patches[i]);
  }
}

void D2Glide_FixCornerTextPatch_1_11_Remove(
    struct D2Glide_FixCornerTextPatch_1_11* patch
) {
  size_t i;

  for (i = 0; i < D2Glide_FixCornerTextPatch_1_11_kPatchesCount; i += 1) {
    Mapi_GamePatch_Remove(&patch->patches[i]);
  }
}
