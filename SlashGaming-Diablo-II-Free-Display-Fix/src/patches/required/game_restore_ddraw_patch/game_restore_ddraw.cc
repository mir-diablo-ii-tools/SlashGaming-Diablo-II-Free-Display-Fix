/**
 * SlashGaming Diablo II Free Display Fix
 * Copyright (C) 2019  Mir Drualga
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

#include "game_restore_ddraw.hpp"

#include <windows.h>

#include <sgd2mapi.hpp>

namespace sgd2fdf::patches {
namespace {

#pragma pack(push, 1)

struct ConfigOptions_1_14A {
  mapi::UndefinedByte unkown_0x00[0x04 - 0x00];
  mapi::bool8 is_use_gdi;
  mapi::UndefinedByte unknown_0x05[0x06 - 0x05];
  mapi::bool8 is_use_glide;
  mapi::bool8 is_use_unknown_video_mode;
  mapi::UndefinedByte unknown_0x08[0x09 - 0x08];
  mapi::bool8 is_use_direct3d_else_ddraw;
  mapi::UndefinedByte unknown_0x0A[0x3C9 - 0x0A];
};

struct ConfigOptions_1_14D {
  mapi::UndefinedByte unkown_0x00[0x08 - 0x00];
  mapi::bool8 is_use_gdi;
  mapi::UndefinedByte unknown_0x09[0x0A - 0x09];
  mapi::bool8 is_use_glide;
  mapi::bool8 is_use_unknown_video_mode;
  mapi::UndefinedByte unknown_0x0C[0x0D - 0x0C];
  mapi::bool8 is_use_direct3d_else_ddraw;
  mapi::UndefinedByte unknown_0x0E[0x3CD - 0x0E];
};

#pragma pack(pop)

static_assert(sizeof(ConfigOptions_1_14A) == 969);
static_assert(sizeof(ConfigOptions_1_14D) == 973);

template <typename T>
void SetVideoModeFlags_Impl(T& config_options, DWORD reg_video_mode) {
  switch (reg_video_mode) {
    case 1: {
      config_options.is_use_direct3d_else_ddraw = true;
      break;
    }

    case 2: {
      config_options.is_use_unknown_video_mode = true;
      break;
    }

    case 3: {
      config_options.is_use_glide = true;
      break;
    }

    case 4: {
      config_options.is_use_gdi = true;
      break;
    }
  }
}

void SetVideoModeFlags(ConfigOptions& config_options, DWORD reg_video_mode) {
  switch (d2::GetRunningGameVersionId()) {
    case d2::GameVersion::kClassic1_14A:
    case d2::GameVersion::kLod1_14A:
    case d2::GameVersion::kClassic1_14B:
    case d2::GameVersion::kLod1_14B:
    case d2::GameVersion::kClassic1_14C:
    case d2::GameVersion::kLod1_14C: {
      SetVideoModeFlags_Impl(
          reinterpret_cast<ConfigOptions_1_14A&>(config_options),
          reg_video_mode
      );
      break;
    }

    case d2::GameVersion::kLod1_14D:
    case d2::GameVersion::kClassic1_14D: {
      SetVideoModeFlags_Impl(
          reinterpret_cast<ConfigOptions_1_14D&>(config_options),
          reg_video_mode
      );
      break;
    }
  }
}

template <typename T>
bool IsVideoModeCmdLineSet_Impl(const T& config_options) {
  return config_options.is_use_direct3d_else_ddraw
      || config_options.is_use_unknown_video_mode
      || config_options.is_use_glide
      || config_options.is_use_gdi;
}

bool IsVideoModeCmdLineSet(const ConfigOptions& config_options) {
  switch (d2::GetRunningGameVersionId()) {
    case d2::GameVersion::kClassic1_14A:
    case d2::GameVersion::kLod1_14A:
    case d2::GameVersion::kClassic1_14B:
    case d2::GameVersion::kLod1_14B:
    case d2::GameVersion::kClassic1_14C:
    case d2::GameVersion::kLod1_14C: {
      return IsVideoModeCmdLineSet_Impl(
          reinterpret_cast<const ConfigOptions_1_14A&>(config_options)
      );
    }

    case d2::GameVersion::kLod1_14D:
    case d2::GameVersion::kClassic1_14D: {
      return IsVideoModeCmdLineSet_Impl(
          reinterpret_cast<const ConfigOptions_1_14D&>(config_options)
      );
    }
  }
}

} // namespace

void __cdecl SGD2FDF_Game_ReadRegistryVideoMode(
    ConfigOptions* config_options
) {
  if (IsVideoModeCmdLineSet(*config_options)) {
    return;
  }

  // Read the key.
  HKEY key_handle;

  LSTATUS open_key_status = RegOpenKeyExW(
      HKEY_CURRENT_USER,
      L"SOFTWARE\\Blizzard Entertainment\\Diablo II\\VideoConfig",
      0,
      KEY_QUERY_VALUE,
      &key_handle
  );

  if (open_key_status != ERROR_SUCCESS) {
    open_key_status = RegOpenKeyExW(
        HKEY_LOCAL_MACHINE,
        L"SOFTWARE\\Blizzard Entertainment\\Diablo II\\VideoConfig",
        0,
        KEY_QUERY_VALUE,
        &key_handle
    );

    if (open_key_status != ERROR_SUCCESS) {
      return;
    }
  }

  // Get the video mode value from the registry.
  DWORD reg_video_mode = 0;
  DWORD data_type = 0;
  DWORD data_size = sizeof(reg_video_mode);

  LSTATUS query_key_status = RegQueryValueExW(
      key_handle,
      L"Render",
      nullptr,
      &data_type,
      reinterpret_cast<LPBYTE>(&reg_video_mode),
      &data_size
  );

  // Set the video flags.
  if (query_key_status == ERROR_SUCCESS) {
    SetVideoModeFlags(*config_options, reg_video_mode);
  }

  RegCloseKey(key_handle);
}

} // namespace sgd2fdf::patches
