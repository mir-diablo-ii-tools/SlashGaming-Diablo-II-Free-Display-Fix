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

#include "d2direct3d_fix_corner_text_patch_1_11b.hpp"

#include "../../../asm_x86_macro.h"
#include "d2direct3d_fix_corner_text.hpp"

namespace sgd2fdf::patches {
namespace {

__declspec(naked) void __cdecl InterceptionFunc_01() {
  ASM_X86(push ebp);
  ASM_X86(mov ebp, esp);

  ASM_X86(push ecx);
  ASM_X86(push edx);

  ASM_X86(call ASM_X86_FUNC(SGD2FDF_D2Direct3D_CreateCompatibleDC));

  ASM_X86(pop edx);
  ASM_X86(pop ecx);

  ASM_X86(leave);
  ASM_X86(ret);
}

__declspec(naked) void __cdecl InterceptionFunc_02() {
  ASM_X86(push ebp);
  ASM_X86(mov ebp, esp);

  // Original code.
  ASM_X86(mov esi, eax);
  ASM_X86(mov dword ptr [ebp + 0x30], eax);

  ASM_X86(push ecx);
  ASM_X86(push edx);

  ASM_X86(push esi);
  ASM_X86(call ASM_X86_FUNC(SGD2FDF_D2Direct3D_CreateCompatibleBitmap));
  ASM_X86(add esp, 4)

  ASM_X86(pop edx);
  ASM_X86(pop ecx);

  ASM_X86(leave);
  ASM_X86(ret);
}

} // namespace

std::vector<mapi::GamePatch> Make_D2Direct3D_FixCornerTextPatch_1_11B() {
  std::vector<mapi::GamePatch> patches;

  // Fix device context creation.
  mapi::GameAddress game_address_01 = mapi::GameAddress::FromOffset(
      mapi::DefaultLibrary::kD2Direct3D,
      0xFFB2
  );

  patches.push_back(
      mapi::GamePatch::MakeGameBranchPatch(
          std::move(game_address_01),
          mapi::BranchType::kCall,
          InterceptionFunc_01,
          0xFFC0 - 0xFFB2
      )
  );

  // Fix bitmap creation.
  mapi::GameAddress game_address_02 = mapi::GameAddress::FromOffset(
      mapi::DefaultLibrary::kD2Direct3D,
      0xFFE0
  );

  patches.push_back(
      mapi::GamePatch::MakeGameBranchPatch(
          std::move(game_address_02),
          mapi::BranchType::kCall,
          InterceptionFunc_02,
          0xFFF5 - 0xFFE0
      )
  );

  return patches;
}

} // namespace sgd2fdf::patches
