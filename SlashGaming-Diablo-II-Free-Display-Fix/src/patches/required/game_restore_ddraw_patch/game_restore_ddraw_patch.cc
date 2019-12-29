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

#include "game_restore_ddraw_patch.hpp"

#include "game_restore_ddraw_patch_lod_1_14c.hpp"

namespace sgd2fdf::patches {

std::vector<mapi::GamePatch> Make_Game_RestoreDDrawPatch() {
  d2::GameVersion running_game_version_id = d2::GetRunningGameVersionId();

  switch (running_game_version_id) {
    /*case d2::GameVersion::kClassic1_14A: {
      return Make_D2DDraw_FixCornerTextPatch_Classic1_14A();
    }

    case d2::GameVersion::kLod1_14A: {
      return Make_D2DDraw_FixCornerTextPatch_LoD1_14A();
    }

    case d2::GameVersion::kClassic1_14B: {
      return Make_D2DDraw_FixCornerTextPatch_Classic1_14B();
    }

    case d2::GameVersion::kLod1_14B: {
      return Make_D2DDraw_FixCornerTextPatch_LoD1_14B();
    }

    case d2::GameVersion::kClassic1_14C: {
      return Make_D2DDraw_FixCornerTextPatch_Classic1_14C();
    }*/

    case d2::GameVersion::kLod1_14C: {
      return Make_Game_RestoreDDrawPatch_LoD1_14C();
    }

    /*case d2::GameVersion::kClassic1_14D: {
      return Make_D2DDraw_FixCornerTextPatch_Classic1_14D();
    }

    case d2::GameVersion::kLod1_14D: {
      return Make_D2DDraw_FixCornerTextPatch_LoD1_14D();
    }*/
  }
}

} // namespace sgd2fdf::patches