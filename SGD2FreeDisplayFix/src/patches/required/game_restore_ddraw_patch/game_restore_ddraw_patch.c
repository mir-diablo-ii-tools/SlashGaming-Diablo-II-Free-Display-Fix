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

#include "game_restore_ddraw_patch.h"

#include <mdc/malloc/malloc.h>

static int IsRequirePatch(void) {
  enum D2_GameVersion running_game_version;

  /*
  * DirectDraw mode was removed in 1.14 by ignoring registry values.
  */
  running_game_version = D2_GameVersion_GetRunning();

  return (running_game_version >= D2_GameVersion_kClassic1_14A);
}

/**
 * External
 */

struct Game_RestoreDDrawPatch
Game_RestoreDDrawPatch_Init(void) {
  struct Game_RestoreDDrawPatch patch;

  enum D2_GameVersion running_game_version;

  if (!IsRequirePatch()) {
    patch.patch.ptr_classic_1_14a = NULL;
    return patch;
  }
  
  running_game_version = D2_GameVersion_GetRunning();

  switch (running_game_version) {
    case D2_GameVersion_kClassic1_14A:
    case D2_GameVersion_kClassic1_14B:
    case D2_GameVersion_kClassic1_14C: {
      patch.patch.ptr_classic_1_14a = Mdc_malloc(
          sizeof(*patch.patch.ptr_classic_1_14a)
      );

      *patch.patch.ptr_classic_1_14a =
          Game_RestoreDDrawPatch_Classic1_14A_Init();

      break;
    }

    case D2_GameVersion_kLod1_14A:
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C: {
      patch.patch.ptr_lod_1_14a = Mdc_malloc(
          sizeof(*patch.patch.ptr_lod_1_14a)
      );

      *patch.patch.ptr_lod_1_14a =
          Game_RestoreDDrawPatch_Lod1_14A_Init();

      break;
    }

    case D2_GameVersion_kClassic1_14D: {
      patch.patch.ptr_classic_1_14d = Mdc_malloc(
          sizeof(*patch.patch.ptr_classic_1_14d)
      );

      *patch.patch.ptr_classic_1_14d =
          Game_RestoreDDrawPatch_Classic1_14D_Init();

      break;
    }

    case D2_GameVersion_kLod1_14D: {
      patch.patch.ptr_lod_1_14d = Mdc_malloc(
          sizeof(*patch.patch.ptr_lod_1_14d)
      );

      *patch.patch.ptr_lod_1_14d =
          Game_RestoreDDrawPatch_Lod1_14D_Init();

      break;
    }
  }

  return patch;
}

void Game_RestoreDDrawPatch_Deinit(
    struct Game_RestoreDDrawPatch* patch
) {
  enum D2_GameVersion running_game_version;

  if (!IsRequirePatch()) {
    return;
  }

  running_game_version = D2_GameVersion_GetRunning();

  switch (running_game_version) {
    case D2_GameVersion_kClassic1_14A:
    case D2_GameVersion_kClassic1_14B:
    case D2_GameVersion_kClassic1_14C: {
      Game_RestoreDDrawPatch_Classic1_14A_Deinit(
          patch->patch.ptr_classic_1_14a
      );
      Mdc_free(patch->patch.ptr_classic_1_14a);

      break;
    }

    case D2_GameVersion_kLod1_14A:
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C: {
      Game_RestoreDDrawPatch_Lod1_14A_Deinit(
          patch->patch.ptr_lod_1_14a
      );
      Mdc_free(patch->patch.ptr_lod_1_14a);

      break;
    }

    case D2_GameVersion_kClassic1_14D: {
      Game_RestoreDDrawPatch_Classic1_14D_Deinit(
          patch->patch.ptr_classic_1_14d
      );
      Mdc_free(patch->patch.ptr_classic_1_14d);

      break;
    }

    case D2_GameVersion_kLod1_14D: {
      Game_RestoreDDrawPatch_Lod1_14D_Deinit(
          patch->patch.ptr_lod_1_14d
      );
      Mdc_free(patch->patch.ptr_lod_1_14d);

      break;
    }
  }
}

void Game_RestoreDDrawPatch_Apply(
    struct Game_RestoreDDrawPatch* patch
) {
  enum D2_GameVersion running_game_version;

  if (!IsRequirePatch()) {
    return;
  }

  running_game_version = D2_GameVersion_GetRunning();

  switch (running_game_version) {
    case D2_GameVersion_kClassic1_14A:
    case D2_GameVersion_kClassic1_14B:
    case D2_GameVersion_kClassic1_14C: {
      Game_RestoreDDrawPatch_Classic1_14A_Apply(
          patch->patch.ptr_classic_1_14a
      );

      break;
    }

    case D2_GameVersion_kLod1_14A:
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C: {
      Game_RestoreDDrawPatch_Lod1_14A_Apply(
          patch->patch.ptr_lod_1_14a
      );

      break;
    }

    case D2_GameVersion_kClassic1_14D: {
      Game_RestoreDDrawPatch_Classic1_14D_Apply(
          patch->patch.ptr_classic_1_14d
      );

      break;
    }

    case D2_GameVersion_kLod1_14D: {
      Game_RestoreDDrawPatch_Lod1_14D_Apply(
          patch->patch.ptr_lod_1_14d
      );

      break;
    }
  }
}

void Game_RestoreDDrawPatch_Remove(
    struct Game_RestoreDDrawPatch* patch
) {
  enum D2_GameVersion running_game_version;

  if (!IsRequirePatch()) {
    return;
  }

  running_game_version = D2_GameVersion_GetRunning();

  switch (running_game_version) {
    case D2_GameVersion_kClassic1_14A:
    case D2_GameVersion_kClassic1_14B:
    case D2_GameVersion_kClassic1_14C: {
      Game_RestoreDDrawPatch_Classic1_14A_Remove(
          patch->patch.ptr_classic_1_14a
      );

      break;
    }

    case D2_GameVersion_kLod1_14A:
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C: {
      Game_RestoreDDrawPatch_Lod1_14A_Remove(
          patch->patch.ptr_lod_1_14a
      );

      break;
    }

    case D2_GameVersion_kClassic1_14D: {
      Game_RestoreDDrawPatch_Classic1_14D_Remove(
          patch->patch.ptr_classic_1_14d
      );

      break;
    }

    case D2_GameVersion_kLod1_14D: {
      Game_RestoreDDrawPatch_Lod1_14D_Remove(
          patch->patch.ptr_lod_1_14d
      );

      break;
    }
  }
}
