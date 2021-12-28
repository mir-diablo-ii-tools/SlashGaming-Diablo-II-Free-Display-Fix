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

#include "game_restore_ddraw.h"

#include <stddef.h>
#include <windows.h>

#include <sgd2mapi98.h>

/**
 * ConfigOptions
 */

#pragma pack(push, 1)

struct ConfigOptions_Classic1_14A {
  Mapi_UndefinedByte unkown_0x00[0x04 - 0x00];
  mapi_bool8 is_use_gdi;
  Mapi_UndefinedByte unknown_0x05[0x06 - 0x05];
  mapi_bool8 is_use_glide;
  mapi_bool8 is_use_unknown_video_mode;
  Mapi_UndefinedByte unknown_0x08[0x09 - 0x08];
  mapi_bool8 is_use_direct3d_else_ddraw;
  Mapi_UndefinedByte unknown_0x0A[0x3C9 - 0x0A];
};

struct ConfigOptions_Classic1_14D {
  Mapi_UndefinedByte unkown_0x00[0x08 - 0x00];
  mapi_bool8 is_use_gdi;
  Mapi_UndefinedByte unknown_0x09[0x0A - 0x09];
  mapi_bool8 is_use_glide;
  mapi_bool8 is_use_unknown_video_mode;
  Mapi_UndefinedByte unknown_0x0C[0x0D - 0x0C];
  mapi_bool8 is_use_direct3d_else_ddraw;
  Mapi_UndefinedByte unknown_0x0E[0x3CD - 0x0E];
};

#pragma pack(pop)

union ConfigOptions_View {
  const struct ConfigOptions_Classic1_14A* ptr_classic_1_14a;
  const struct ConfigOptions_Classic1_14D* ptr_classic_1_14d;
};

union ConfigOptions_Wrapper {
  struct ConfigOptions_Classic1_14A* ptr_classic_1_14a;
  struct ConfigOptions_Classic1_14D* ptr_classic_1_14d;
};

static int ConfigOptions_GetIsUseGdi(
    const struct ConfigOptions* config_options
) {
  union ConfigOptions_View view;

  enum D2_GameVersion running_game_version;

  running_game_version = D2_GameVersion_GetRunning();

  if (running_game_version >= D2_GameVersion_kClassic1_14A
      && running_game_version <= D2_GameVersion_kLod1_14C) {
    view.ptr_classic_1_14a = (const struct ConfigOptions_Classic1_14A*)
        config_options;

    return view.ptr_classic_1_14a->is_use_gdi;
  } else /* if (running_game_version >= D2_GameVersion_kClassic1_14D) */ {
    view.ptr_classic_1_14d = (const struct ConfigOptions_Classic1_14D*)
        config_options;

    return view.ptr_classic_1_14d->is_use_gdi;
  }
}

static void ConfigOptions_SetIsUseGdi(
    const struct ConfigOptions* config_options,
    int is_use_gdi
) {
  union ConfigOptions_Wrapper wrapper;

  enum D2_GameVersion running_game_version;

  running_game_version = D2_GameVersion_GetRunning();

  if (running_game_version >= D2_GameVersion_kClassic1_14A
      && running_game_version <= D2_GameVersion_kLod1_14C) {
    wrapper.ptr_classic_1_14a = (struct ConfigOptions_Classic1_14A*)
        config_options;

    wrapper.ptr_classic_1_14a->is_use_gdi = is_use_gdi;
  } else /* if (running_game_version >= D2_GameVersion_kClassic1_14D) */ {
    wrapper.ptr_classic_1_14d = (struct ConfigOptions_Classic1_14D*)
        config_options;

    wrapper.ptr_classic_1_14d->is_use_gdi = is_use_gdi;
  }
}

static int ConfigOptions_GetIsUseGlide(
    const struct ConfigOptions* config_options
) {
  union ConfigOptions_View view;

  enum D2_GameVersion running_game_version;

  running_game_version = D2_GameVersion_GetRunning();

  if (running_game_version >= D2_GameVersion_kClassic1_14A
      && running_game_version <= D2_GameVersion_kLod1_14C) {
    view.ptr_classic_1_14a = (const struct ConfigOptions_Classic1_14A*)
        config_options;

    return view.ptr_classic_1_14a->is_use_glide;
  } else /* if (running_game_version >= D2_GameVersion_kClassic1_14D) */ {
    view.ptr_classic_1_14d = (const struct ConfigOptions_Classic1_14D*)
        config_options;

    return view.ptr_classic_1_14d->is_use_glide;
  }
}

static void ConfigOptions_SetIsUseGlide(
    const struct ConfigOptions* config_options,
    int is_use_glide
) {
  union ConfigOptions_Wrapper wrapper;

  enum D2_GameVersion running_game_version;

  running_game_version = D2_GameVersion_GetRunning();

  if (running_game_version >= D2_GameVersion_kClassic1_14A
      && running_game_version <= D2_GameVersion_kLod1_14C) {
    wrapper.ptr_classic_1_14a = (struct ConfigOptions_Classic1_14A*)
        config_options;

    wrapper.ptr_classic_1_14a->is_use_glide = is_use_glide;
  } else /* if (running_game_version >= D2_GameVersion_kClassic1_14D) */ {
    wrapper.ptr_classic_1_14d = (struct ConfigOptions_Classic1_14D*)
        config_options;

    wrapper.ptr_classic_1_14d->is_use_glide = is_use_glide;
  }
}

static int ConfigOptions_GetIsUseUnknownVideoMode(
    const struct ConfigOptions* config_options
) {
  union ConfigOptions_View view;

  enum D2_GameVersion running_game_version;

  running_game_version = D2_GameVersion_GetRunning();

  if (running_game_version >= D2_GameVersion_kClassic1_14A
      && running_game_version <= D2_GameVersion_kLod1_14C) {
    view.ptr_classic_1_14a = (const struct ConfigOptions_Classic1_14A*)
        config_options;

    return view.ptr_classic_1_14a->is_use_unknown_video_mode;
  } else /* if (running_game_version >= D2_GameVersion_kClassic1_14D) */ {
    view.ptr_classic_1_14d = (const struct ConfigOptions_Classic1_14D*)
        config_options;

    return view.ptr_classic_1_14d->is_use_unknown_video_mode;
  }
}

static void ConfigOptions_SetIsUseUnknownVideoMode(
    const struct ConfigOptions* config_options,
    int is_use_unknown_video_mode
) {
  union ConfigOptions_Wrapper wrapper;

  enum D2_GameVersion running_game_version;

  running_game_version = D2_GameVersion_GetRunning();

  if (running_game_version >= D2_GameVersion_kClassic1_14A
      && running_game_version <= D2_GameVersion_kLod1_14C) {
    wrapper.ptr_classic_1_14a = (struct ConfigOptions_Classic1_14A*)
        config_options;

    wrapper.ptr_classic_1_14a->is_use_unknown_video_mode =
        is_use_unknown_video_mode;
  } else /* if (running_game_version >= D2_GameVersion_kClassic1_14D) */ {
    wrapper.ptr_classic_1_14d = (struct ConfigOptions_Classic1_14D*)
        config_options;

    wrapper.ptr_classic_1_14d->is_use_unknown_video_mode =
        is_use_unknown_video_mode;
  }
}

static int ConfigOptions_GetIsUseDirect3DElseDDraw(
    const struct ConfigOptions* config_options
) {
  union ConfigOptions_View view;

  enum D2_GameVersion running_game_version;

  running_game_version = D2_GameVersion_GetRunning();

  if (running_game_version >= D2_GameVersion_kClassic1_14A
      && running_game_version <= D2_GameVersion_kLod1_14C) {
    view.ptr_classic_1_14a = (const struct ConfigOptions_Classic1_14A*)
        config_options;

    return view.ptr_classic_1_14a->is_use_direct3d_else_ddraw;
  } else /* if (running_game_version >= D2_GameVersion_kClassic1_14D) */ {
    view.ptr_classic_1_14d = (const struct ConfigOptions_Classic1_14D*)
        config_options;

    return view.ptr_classic_1_14d->is_use_direct3d_else_ddraw;
  }
}

static void ConfigOptions_SetIsUseDirect3DElseDDraw(
    const struct ConfigOptions* config_options,
    int is_use_direct3d_else_ddraw
) {
  union ConfigOptions_Wrapper wrapper;

  enum D2_GameVersion running_game_version;

  running_game_version = D2_GameVersion_GetRunning();

  if (running_game_version >= D2_GameVersion_kClassic1_14A
      && running_game_version <= D2_GameVersion_kLod1_14C) {
    wrapper.ptr_classic_1_14a = (struct ConfigOptions_Classic1_14A*)
        config_options;

    wrapper.ptr_classic_1_14a->is_use_direct3d_else_ddraw =
        is_use_direct3d_else_ddraw;
  } else /* if (running_game_version >= D2_GameVersion_kClassic1_14D) */ {
    wrapper.ptr_classic_1_14d = (struct ConfigOptions_Classic1_14D*)
        config_options;

    wrapper.ptr_classic_1_14d->is_use_direct3d_else_ddraw =
        is_use_direct3d_else_ddraw;
  }
}

/**
 * Helper Functions
 */

static void SetVideoModeFlags(
    struct ConfigOptions* config_options,
    DWORD reg_video_mode
) {
  enum D2_GameVersion running_game_version;

  running_game_version = D2_GameVersion_GetRunning();

  switch (reg_video_mode) {
    case 1: {
      ConfigOptions_SetIsUseDirect3DElseDDraw(config_options, 1);

      break;
    }

    case 2: {
      ConfigOptions_SetIsUseUnknownVideoMode(config_options, 1);

      break;
    }

    case 3: {
      ConfigOptions_SetIsUseGlide(config_options, 1);

      break;
    }

    case 4: {
      ConfigOptions_SetIsUseGdi(config_options, 1);

      break;
    }
  }
}

static int IsVideoModeCmdLineSet(
    const struct ConfigOptions* config_options
) {
  return ConfigOptions_GetIsUseDirect3DElseDDraw(config_options)
      || ConfigOptions_GetIsUseUnknownVideoMode(config_options)
      || ConfigOptions_GetIsUseGlide(config_options)
      || ConfigOptions_GetIsUseGdi(config_options);
}

/**
 * External
 */

void __cdecl Sgd2fdf_Game_ReadRegistryVideoMode(
    struct ConfigOptions* config_options
) {
  HKEY key_handle;
  LONG open_key_status;

  DWORD reg_video_mode;
  DWORD data_type;
  DWORD data_size;
  LONG query_key_status;

  if (IsVideoModeCmdLineSet(config_options)) {
    return;
  }

  /* Read the key. */
  open_key_status = RegOpenKeyExW(
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

  /* Get the video mode value from the registry.*/
  reg_video_mode = 0;
  data_type = 0;
  data_size = sizeof(reg_video_mode);

  query_key_status = RegQueryValueExW(
      key_handle,
      L"Render",
      NULL,
      &data_type,
      (LPBYTE) &reg_video_mode,
      &data_size
  );

  // Set the video flags.
  if (query_key_status == ERROR_SUCCESS) {
    SetVideoModeFlags(config_options, reg_video_mode);
  }

  RegCloseKey(key_handle);
}
