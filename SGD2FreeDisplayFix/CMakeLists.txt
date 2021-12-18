# SlashGaming Diablo II Free Display Fix
# Copyright (C) 2019-2021  Mir Drualga
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU Affero General Public License as published
# by the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Affero General Public License for more details.
#
# You should have received a copy of the GNU Affero General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
# Additional permissions under GNU Affero General Public License version 3
# section 7
#
# If you modify this Program, or any covered work, by linking or combining
# it with Diablo II (or a modified version of that game and its
# libraries), containing parts covered by the terms of Blizzard End User
# License Agreement, the licensors of this Program grant you additional
# permission to convey the resulting work. This additional permission is
# also extended to any combination of expansions, mods, and remasters of
# the game.
#
# If you modify this Program, or any covered work, by linking or combining
# it with any Graphics Device Interface (GDI), DirectDraw, Direct3D,
# Glide, OpenGL, or Rave wrapper (or modified versions of those
# libraries), containing parts not covered by a compatible license, the
# licensors of this Program grant you additional permission to convey the
# resulting work.
#
# If you modify this Program, or any covered work, by linking or combining
# it with any library (or a modified version of that library) that links
# to Diablo II (or a modified version of that game and its libraries),
# containing parts not covered by a compatible license, the licensors of
# this Program grant you additional permission to convey the resulting
# work.

cmake_minimum_required(VERSION 3.11)

# Name of the project, also is the name of the file
project(SGD2FreeDisplayFix)

# Define requirements for C
set(CMAKE_C_STANDARD 90)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Enable NASM
set(CMAKE_ASM_NASM_OBJECT_FORMAT win32)
enable_language(ASM_NASM)

# Remove MinGW compiled binary "lib" prefix
if (MINGW)
    set(CMAKE_IMPORT_LIBRARY_PREFIX "")
    set(CMAKE_SHARED_LIBRARY_PREFIX "")
    set(CMAKE_STATIC_LIBRARY_PREFIX "")
endif (MINGW)

# List all of the source files here
set(HELPER_FILES
    "src/helper/patch_address_and_size.c"
    "src/helper/patch_address_and_size.h"
)

set(PATCH_FILES
    "src/patches/patches.c"
    "src/patches/patches.h"

    "src/patches/required/required_patches.c"
    "src/patches/required/required_patches.h"

    # D2DDraw fix corner text patch
    "src/patches/required/d2ddraw_fix_corner_text_patch/d2ddraw_fix_corner_text_patch_1_00_shim.asm"
    "src/patches/required/d2ddraw_fix_corner_text_patch/d2ddraw_fix_corner_text_patch_1_00.c"
    "src/patches/required/d2ddraw_fix_corner_text_patch/d2ddraw_fix_corner_text_patch_1_00.h"

    "src/patches/required/d2ddraw_fix_corner_text_patch/d2ddraw_fix_corner_text_patch_1_11_shim.asm"
    "src/patches/required/d2ddraw_fix_corner_text_patch/d2ddraw_fix_corner_text_patch_1_11.c"
    "src/patches/required/d2ddraw_fix_corner_text_patch/d2ddraw_fix_corner_text_patch_1_11.h"

    "src/patches/required/d2ddraw_fix_corner_text_patch/d2ddraw_fix_corner_text_patch_classic_1_14d_shim.asm"
    "src/patches/required/d2ddraw_fix_corner_text_patch/d2ddraw_fix_corner_text_patch_classic_1_14d.c"
    "src/patches/required/d2ddraw_fix_corner_text_patch/d2ddraw_fix_corner_text_patch_classic_1_14d.h"

    "src/patches/required/d2ddraw_fix_corner_text_patch/d2ddraw_fix_corner_text_patch.c"
    "src/patches/required/d2ddraw_fix_corner_text_patch/d2ddraw_fix_corner_text_patch.h"

    "src/patches/required/d2ddraw_fix_corner_text_patch/d2ddraw_fix_corner_text.c"
    "src/patches/required/d2ddraw_fix_corner_text_patch/d2ddraw_fix_corner_text.h"

    # D2Direct3D fix corner text patch
    "src/patches/required/d2direct3d_fix_corner_text_patch/d2direct3d_fix_corner_text_patch_1_00_shim.asm"
    "src/patches/required/d2direct3d_fix_corner_text_patch/d2direct3d_fix_corner_text_patch_1_00.c"
    "src/patches/required/d2direct3d_fix_corner_text_patch/d2direct3d_fix_corner_text_patch_1_00.h"

    "src/patches/required/d2direct3d_fix_corner_text_patch/d2direct3d_fix_corner_text_patch_1_11_shim.asm"
    "src/patches/required/d2direct3d_fix_corner_text_patch/d2direct3d_fix_corner_text_patch_1_11.c"
    "src/patches/required/d2direct3d_fix_corner_text_patch/d2direct3d_fix_corner_text_patch_1_11.h"

    "src/patches/required/d2direct3d_fix_corner_text_patch/d2direct3d_fix_corner_text_patch.c"
    "src/patches/required/d2direct3d_fix_corner_text_patch/d2direct3d_fix_corner_text_patch.h"

    "src/patches/required/d2direct3d_fix_corner_text_patch/d2direct3d_fix_corner_text.c"
    "src/patches/required/d2direct3d_fix_corner_text_patch/d2direct3d_fix_corner_text.h"

    # D2Direct3D fix display mode color bits patch
    "src/patches/required/d2direct3d_fix_display_mode_color_bits_patch/d2direct3d_fix_display_mode_color_bits_patch_1_00.c"
    "src/patches/required/d2direct3d_fix_display_mode_color_bits_patch/d2direct3d_fix_display_mode_color_bits_patch_1_00.h"

    "src/patches/required/d2direct3d_fix_display_mode_color_bits_patch/d2direct3d_fix_display_mode_color_bits_patch.c"
    "src/patches/required/d2direct3d_fix_display_mode_color_bits_patch/d2direct3d_fix_display_mode_color_bits_patch.h"

    # D2Glide fix corner text patch
    "src/patches/required/d2glide_fix_corner_text_patch/d2glide_fix_corner_text_checksum.asm"

    "src/patches/required/d2glide_fix_corner_text_patch/d2glide_fix_corner_text_patch_1_00_shim.asm"
    "src/patches/required/d2glide_fix_corner_text_patch/d2glide_fix_corner_text_patch_1_00.c"
    "src/patches/required/d2glide_fix_corner_text_patch/d2glide_fix_corner_text_patch_1_00.h"

    "src/patches/required/d2glide_fix_corner_text_patch/d2glide_fix_corner_text_patch_1_11_shim.asm"
    "src/patches/required/d2glide_fix_corner_text_patch/d2glide_fix_corner_text_patch_1_11.c"
    "src/patches/required/d2glide_fix_corner_text_patch/d2glide_fix_corner_text_patch_1_11.h"

    "src/patches/required/d2glide_fix_corner_text_patch/d2glide_fix_corner_text_patch_classic_1_14a_shim.asm"
    "src/patches/required/d2glide_fix_corner_text_patch/d2glide_fix_corner_text_patch_classic_1_14a.c"
    "src/patches/required/d2glide_fix_corner_text_patch/d2glide_fix_corner_text_patch_classic_1_14a.h"

    "src/patches/required/d2glide_fix_corner_text_patch/d2glide_fix_corner_text_patch.c"
    "src/patches/required/d2glide_fix_corner_text_patch/d2glide_fix_corner_text_patch.h"

    "src/patches/required/d2glide_fix_corner_text_patch/d2glide_fix_corner_text.c"
    "src/patches/required/d2glide_fix_corner_text_patch/d2glide_fix_corner_text.h"

    # Game restore DirectDraw patch
    "src/patches/required/game_restore_ddraw_patch/game_restore_ddraw_patch_classic_1_14a_shim.asm"
    "src/patches/required/game_restore_ddraw_patch/game_restore_ddraw_patch_classic_1_14a.c"
    "src/patches/required/game_restore_ddraw_patch/game_restore_ddraw_patch_classic_1_14a.h"

    "src/patches/required/game_restore_ddraw_patch/game_restore_ddraw_patch_classic_1_14d_shim.asm"
    "src/patches/required/game_restore_ddraw_patch/game_restore_ddraw_patch_classic_1_14d.c"
    "src/patches/required/game_restore_ddraw_patch/game_restore_ddraw_patch_classic_1_14d.h"

    "src/patches/required/game_restore_ddraw_patch/game_restore_ddraw_patch_lod_1_14a_shim.asm"
    "src/patches/required/game_restore_ddraw_patch/game_restore_ddraw_patch_lod_1_14a.c"
    "src/patches/required/game_restore_ddraw_patch/game_restore_ddraw_patch_lod_1_14a.h"

    "src/patches/required/game_restore_ddraw_patch/game_restore_ddraw_patch_lod_1_14d_shim.asm"
    "src/patches/required/game_restore_ddraw_patch/game_restore_ddraw_patch_lod_1_14d.c"
    "src/patches/required/game_restore_ddraw_patch/game_restore_ddraw_patch_lod_1_14d.h"

    "src/patches/required/game_restore_ddraw_patch/game_restore_ddraw_patch.c"
    "src/patches/required/game_restore_ddraw_patch/game_restore_ddraw_patch.h"

    "src/patches/required/game_restore_ddraw_patch/game_restore_ddraw.c"
    "src/patches/required/game_restore_ddraw_patch/game_restore_ddraw.h"
)

set(SOURCE_FILES
    # Include files
    "include/dllexport_define.inc"
    "include/dllexport_undefine.inc"
    "include/license.h"
    "include/sgd2modl_exports.h"

    # Resource files
    "resource/resource.rc"

    # Source files
    "src/dll_main.c"
    "src/license.c"
    "src/sgd2modl_exports.c"

    "${HELPER_FILES}"
    "${PATCH_FILES}"
)

# Output DLL
add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} SGD2MAPIc MDCc)
add_dependencies(${PROJECT_NAME} SGD2MAPIc MDCc)

# Output DLL (static linking)
add_library(${PROJECT_NAME}.static SHARED ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME}.static libSGD2MAPIc libMDCc)
add_dependencies(${PROJECT_NAME}.static libSGD2MAPIc libMDCc)

# Project source listing
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCE_FILES})
