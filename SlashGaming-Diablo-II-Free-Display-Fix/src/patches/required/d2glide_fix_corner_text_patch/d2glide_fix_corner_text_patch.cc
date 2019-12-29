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

#include "d2glide_fix_corner_text_patch.hpp"

#include "d2glide_fix_corner_text_patch_1_00.hpp"
#include "d2glide_fix_corner_text_patch_1_02.hpp"
#include "d2glide_fix_corner_text_patch_1_03.hpp"
#include "d2glide_fix_corner_text_patch_1_04b.hpp"
#include "d2glide_fix_corner_text_patch_1_07_beta.hpp"
#include "d2glide_fix_corner_text_patch_1_09d.hpp"
#include "d2glide_fix_corner_text_patch_1_10_beta.hpp"
#include "d2glide_fix_corner_text_patch_1_11.hpp"
#include "d2glide_fix_corner_text_patch_1_11b.hpp"
#include "d2glide_fix_corner_text_patch_1_12a.hpp"
#include "d2glide_fix_corner_text_patch_1_13a_beta.hpp"
#include "d2glide_fix_corner_text_patch_1_13c.hpp"
#include "d2glide_fix_corner_text_patch_1_13d.hpp"
#include "d2glide_fix_corner_text_patch_lod_1_14a.hpp"

namespace sgd2fdf::patches {

std::vector<mapi::GamePatch> Make_D2Glide_FixCornerTextPatch() {
  d2::GameVersion running_game_version_id = d2::GetRunningGameVersionId();

  switch (running_game_version_id) {
    case d2::GameVersion::k1_00: {
      return Make_D2Glide_FixCornerTextPatch_1_00();
    }

    case d2::GameVersion::k1_02: {
      return Make_D2Glide_FixCornerTextPatch_1_02();
    }

    case d2::GameVersion::k1_03: {
      return Make_D2Glide_FixCornerTextPatch_1_03();
    }

    case d2::GameVersion::k1_04B_C:
    case d2::GameVersion::k1_05:
    case d2::GameVersion::k1_05B:
    case d2::GameVersion::k1_06:
    case d2::GameVersion::k1_06B: {
      return Make_D2Glide_FixCornerTextPatch_1_04B();
    }

    case d2::GameVersion::k1_07Beta: {
      return Make_D2Glide_FixCornerTextPatch_1_07Beta();
    }

    case d2::GameVersion::k1_07:
    case d2::GameVersion::k1_08:
    case d2::GameVersion::k1_09:
    case d2::GameVersion::k1_09B:
    case d2::GameVersion::k1_09D: {
      return Make_D2Glide_FixCornerTextPatch_1_09D();
    }

    case d2::GameVersion::k1_10Beta:
    case d2::GameVersion::k1_10SBeta:
    case d2::GameVersion::k1_10: {
      return Make_D2Glide_FixCornerTextPatch_1_10Beta();
    }

    case d2::GameVersion::k1_11: {
      return Make_D2Glide_FixCornerTextPatch_1_11();
    }

    case d2::GameVersion::k1_11B: {
      return Make_D2Glide_FixCornerTextPatch_1_11B();
    }

    case d2::GameVersion::k1_12A: {
      return Make_D2Glide_FixCornerTextPatch_1_12A();
    }

    case d2::GameVersion::k1_13ABeta: {
      return Make_D2Glide_FixCornerTextPatch_1_13ABeta();
    }

    case d2::GameVersion::k1_13C: {
      return Make_D2Glide_FixCornerTextPatch_1_13C();
    }

    case d2::GameVersion::k1_13D: {
      return Make_D2Glide_FixCornerTextPatch_1_13D();
    }

    case d2::GameVersion::kLod1_14A: {
      return Make_D2Glide_FixCornerTextPatch_LoD1_14A();
    }

    case d2::GameVersion::kLod1_14B:
    case d2::GameVersion::kLod1_14C:
    case d2::GameVersion::kLod1_14D: {
      // This version does not need these patches.
      return {};
    }
  }
}

} // namespace sgd2fdf::patches
