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

#include "d2direct3d_fix_display_mode_color_bits_patch_1_00.h"

#include <stddef.h>

#include <mdc/error/exit_on_error.h>
#include <mdc/std/stdint.h>
#include <mdc/wchar_t/filew.h>
#include "../../../helper/patch_address_and_size.h"

static const uint8_t k32Byte = 32;

/**
 * Addresses and Sizes
 */

static struct PatchAddressAndSize GetPatchAddressAndSize01(
    enum D2_GameVersion game_version
) {
  struct PatchAddressAndSize patch_address_and_size;

  switch (game_version) {
    case D2_GameVersion_k1_00:
    case D2_GameVersion_k1_01:
    case D2_GameVersion_k1_02: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Direct3D,
              0x2A3E
          );

      patch_address_and_size.size = sizeof(k32Byte);

      break;
    }

    case D2_GameVersion_k1_03: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Direct3D,
              0x2A3E
          );

      patch_address_and_size.size = sizeof(k32Byte);

      break;
    }

    case D2_GameVersion_k1_04B_C:
    case D2_GameVersion_k1_05:
    case D2_GameVersion_k1_05B:
    case D2_GameVersion_k1_06:
    case D2_GameVersion_k1_06B: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Direct3D,
              0x210E
          );

      patch_address_and_size.size = sizeof(k32Byte);

      break;
    }

    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Direct3D,
              0x2132
          );

      patch_address_and_size.size = sizeof(k32Byte);

      break;
    }

    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Direct3D,
              0x2112
          );

      patch_address_and_size.size = sizeof(k32Byte);

      break;
    }

    case D2_GameVersion_k1_10: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Direct3D,
              0x2102
          );

      patch_address_and_size.size = sizeof(k32Byte);

      break;
    }

    case D2_GameVersion_k1_11: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Direct3D,
              0x8F9E
          );

      patch_address_and_size.size = sizeof(k32Byte);

      break;
    }

    case D2_GameVersion_k1_11B: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Direct3D,
              0x958E
          );

      patch_address_and_size.size = sizeof(k32Byte);

      break;
    }

    case D2_GameVersion_k1_12A:
    case D2_GameVersion_k1_13ABeta: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Direct3D,
              0xFD5E
          );

      patch_address_and_size.size = sizeof(k32Byte);

      break;
    }

    case D2_GameVersion_k1_13C: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Direct3D,
              0xBA2E
          );

      patch_address_and_size.size = sizeof(k32Byte);

      break;
    }

    case D2_GameVersion_k1_13D: {
      patch_address_and_size.address =
          Mapi_GameAddress_InitFromLibraryAndOffset(
              D2_DefaultLibrary_kD2Direct3D,
              0xBEEE
          );

      patch_address_and_size.size = sizeof(k32Byte);

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

struct D2Direct3D_FixDisplayModeColorBitsPatch_1_00
D2Direct3D_FixDisplayModeColorBitsPatch_1_00_Init(void) {
  struct D2Direct3D_FixDisplayModeColorBitsPatch_1_00 patch;

  const enum D2_GameVersion running_game_version =
      D2_GameVersion_GetRunning();

  struct PatchAddressAndSize patch_addresses_and_sizes[
      D2Direct3D_FixDisplayModeColorBitsPatch_1_00_kPatchesCount
  ];

  patch_addresses_and_sizes[0] = GetPatchAddressAndSize01(
      running_game_version
  );

  /* Change color bits from 16 bits to 32 bits. */
  patch.patches[0] = Mapi_GamePatch_InitGameBufferPatch(
      &patch_addresses_and_sizes[0].address,
      &k32Byte,
      patch_addresses_and_sizes[0].size
  );

  return patch;
}

void D2Direct3D_FixDisplayModeColorBitsPatch_1_00_Deinit(
    struct D2Direct3D_FixDisplayModeColorBitsPatch_1_00* patch
) {
  size_t i;

  for (i = 0; i < D2Direct3D_FixDisplayModeColorBitsPatch_1_00_kPatchesCount; i += 1) {
    Mapi_GamePatch_Deinit(&patch->patches[i]);
  }
}

void D2Direct3D_FixDisplayModeColorBitsPatch_1_00_Apply(
    struct D2Direct3D_FixDisplayModeColorBitsPatch_1_00* patch
) {
  size_t i;

  for (i = 0; i < D2Direct3D_FixDisplayModeColorBitsPatch_1_00_kPatchesCount; i += 1) {
    Mapi_GamePatch_Apply(&patch->patches[i]);
  }
}

void D2Direct3D_FixDisplayModeColorBitsPatch_1_00_Remove(
    struct D2Direct3D_FixDisplayModeColorBitsPatch_1_00* patch
) {
  size_t i;

  for (i = 0; i < D2Direct3D_FixDisplayModeColorBitsPatch_1_00_kPatchesCount; i += 1) {
    Mapi_GamePatch_Remove(&patch->patches[i]);
  }
}
