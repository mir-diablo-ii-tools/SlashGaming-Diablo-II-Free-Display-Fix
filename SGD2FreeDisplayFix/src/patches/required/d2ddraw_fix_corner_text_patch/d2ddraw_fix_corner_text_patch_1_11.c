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

#include "d2ddraw_fix_corner_text_patch_1_11.h"

#include <stddef.h>

#include <mdc/error/exit_on_error.h>
#include <mdc/std/stdint.h>
#include <mdc/wchar_t/filew.h>
#include "../../../helper/patch_address_and_size.h"

/**
 * Interception Function Shims
 */

void __cdecl D2DDraw_FixCornerTextPatch_1_11_InterceptionFunc01(void);

void __cdecl D2DDraw_FixCornerTextPatch_1_11_InterceptionFunc02(void);

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
              D2_DefaultLibrary_kD2DDraw,
              0x6D77
          );

      patch_address_and_size.size = 0x6D88 - 0x6D77;

      break;
    }

    case D2_GameVersion_k1_11B: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x64D7
          );

      patch_address_and_size.size = 0x64E8 - 0x64D7;

      break;
    }

    case D2_GameVersion_k1_12A: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x60E7
          );

      patch_address_and_size.size = 0x60F8 - 0x60E7;

      break;
    }

    case D2_GameVersion_k1_13ABeta: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x85F7
          );

      patch_address_and_size.size = 0x8608 - 0x85F7;

      break;
    }

    case D2_GameVersion_k1_13C: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x9467
          );

      patch_address_and_size.size = 0x9478 - 0x9467;

      break;
    }

    case D2_GameVersion_k1_13D: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x89E7
          );

      patch_address_and_size.size = 0x89F8 - 0x89E7;

      break;
    }

    case D2_GameVersion_kClassic1_14A: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x32F07
          );

      patch_address_and_size.size = 0x32F18 - 0x32F07;

      break;
    }

    case D2_GameVersion_kLod1_14A: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x32FE7
          );

      patch_address_and_size.size = 0x32FFD - 0x32FE7;

      break;
    }

    case D2_GameVersion_kClassic1_14B: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x103827
          );

      patch_address_and_size.size = 0x103838 - 0x103827;

      break;
    }

    case D2_GameVersion_kLod1_14B: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x110567
          );

      patch_address_and_size.size = 0x110578 - 0x110567;

      break;
    }

    case D2_GameVersion_kClassic1_14C: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x103417
          );

      patch_address_and_size.size = 0x103428 - 0x103417;

      break;
    }

    case D2_GameVersion_kLod1_14C: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x110157
          );

      patch_address_and_size.size = 0x110168 - 0x110157;

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
              D2_DefaultLibrary_kD2DDraw,
              0x6DB2
          );

      patch_address_and_size.size = 0x6DC8 - 0x6DB2;

      break;
    }

    case D2_GameVersion_k1_11B: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x6512
          );

      patch_address_and_size.size = 0x6528 - 0x6512;

      break;
    }

    case D2_GameVersion_k1_12A: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x6122
          );

      patch_address_and_size.size = 0x6138 - 0x6122;

      break;
    }

    case D2_GameVersion_k1_13ABeta: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x8632
          );

      patch_address_and_size.size = 0x8648 - 0x8632;

      break;
    }

    case D2_GameVersion_k1_13C: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x94A2
          );

      patch_address_and_size.size = 0x94B8 - 0x94A2;

      break;
    }

    case D2_GameVersion_k1_13D: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x8A22
          );

      patch_address_and_size.size = 0x8A38 - 0x8A22;

      break;
    }

    case D2_GameVersion_kClassic1_14A: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x32F42
          );

      patch_address_and_size.size = 0x32F58 - 0x32F42;

      break;
    }

    case D2_GameVersion_kLod1_14A: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x33022
          );

      patch_address_and_size.size = 0x33038 - 0x33022;

      break;
    }

    case D2_GameVersion_kClassic1_14B: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x103862
          );

      patch_address_and_size.size = 0x103878 - 0x103862;

      break;
    }

    case D2_GameVersion_kLod1_14B: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x1105A2
          );

      patch_address_and_size.size = 0x1105B8 - 0x1105A2;

      break;
    }

    case D2_GameVersion_kClassic1_14C: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x103452
          );

      patch_address_and_size.size = 0x103468 - 0x103452;

      break;
    }

    case D2_GameVersion_kLod1_14C: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2DDraw,
              0x110192
          );

      patch_address_and_size.size = 0x1101A8 - 0x110192;

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

struct D2DDraw_FixCornerTextPatch_1_11
D2DDraw_FixCornerTextPatch_1_11_Init(void) {
  struct D2DDraw_FixCornerTextPatch_1_11 patch;

  const enum D2_GameVersion running_game_version =
      D2_GameVersion_GetRunning();

  struct PatchAddressAndSize patch_addresses_and_sizes[
      D2DDraw_FixCornerTextPatch_1_11_kPatchesCount
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
      &D2DDraw_FixCornerTextPatch_1_11_InterceptionFunc01,
      patch_addresses_and_sizes[0].size
  );

  /* Fix bitmap creation. */
  patch.patches[1] = Mapi_GamePatch_InitGameBranchPatch(
      &patch_addresses_and_sizes[1].address,
      Mapi_BranchType_kCall,
      &D2DDraw_FixCornerTextPatch_1_11_InterceptionFunc02,
      patch_addresses_and_sizes[1].size
  );

  return patch;
}

void D2DDraw_FixCornerTextPatch_1_11_Deinit(
    struct D2DDraw_FixCornerTextPatch_1_11* patch
) {
  size_t i;

  for (i = 0; i < D2DDraw_FixCornerTextPatch_1_11_kPatchesCount; i += 1) {
    Mapi_GamePatch_Deinit(&patch->patches[i]);
  }
}

void D2DDraw_FixCornerTextPatch_1_11_Apply(
    struct D2DDraw_FixCornerTextPatch_1_11* patch
) {
  size_t i;

  for (i = 0; i < D2DDraw_FixCornerTextPatch_1_11_kPatchesCount; i += 1) {
    Mapi_GamePatch_Apply(&patch->patches[i]);
  }
}

void D2DDraw_FixCornerTextPatch_1_11_Remove(
    struct D2DDraw_FixCornerTextPatch_1_11* patch
) {
  size_t i;

  for (i = 0; i < D2DDraw_FixCornerTextPatch_1_11_kPatchesCount; i += 1) {
    Mapi_GamePatch_Remove(&patch->patches[i]);
  }
}
