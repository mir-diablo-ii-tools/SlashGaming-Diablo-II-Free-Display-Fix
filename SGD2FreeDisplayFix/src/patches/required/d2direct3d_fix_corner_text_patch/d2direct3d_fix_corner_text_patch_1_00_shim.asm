;
; SlashGaming Diablo II Free Display Fix
; Copyright (C) 2019-2021  Mir Drualga
;
; This file is part of SlashGaming Diablo II Free Display Fix.
;
; This program is free software: you can redistribute it and/or modify
; it under the terms of the GNU Affero General Public License as published
; by the Free Software Foundation, either version 3 of the License, or
; (at your option) any later version.
;
; This program is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU Affero General Public License for more details.
;
; You should have received a copy of the GNU Affero General Public License
; along with this program.  If not, see <http://www.gnu.org/licenses/>.
;
; Additional permissions under GNU Affero General Public License version 3
; section 7
;
; If you modify this Program, or any covered work, by linking or combining
; it with Diablo II (or a modified version of that game and its
; libraries), containing parts covered by the terms of Blizzard End User
; License Agreement, the licensors of this Program grant you additional
; permission to convey the resulting work. This additional permission is
; also extended to any combination of expansions, mods, and remasters of
; the game.
;
; If you modify this Program, or any covered work, by linking or combining
; it with any Graphics Device Interface (GDI), DirectDraw, Direct3D,
; Glide, OpenGL, or Rave wrapper (or modified versions of those
; libraries), containing parts not covered by a compatible license, the
; licensors of this Program grant you additional permission to convey the
; resulting work.
;
; If you modify this Program, or any covered work, by linking or combining
; it with any library (or a modified version of that library) that links
; to Diablo II (or a modified version of that game and its libraries),
; containing parts not covered by a compatible license, the licensors of
; this Program grant you additional permission to convey the resulting
; work.
;

global _D2Direct3D_FixCornerTextPatch_1_00_InterceptionFunc01
global _D2Direct3D_FixCornerTextPatch_1_00_InterceptionFunc02

extern _Sgd2fdf_D2Direct3D_CreateCompatibleDC
extern _Sgd2fdf_D2Direct3D_CreateCompatibleBitmap

section .data

section .bss

section .text

_D2Direct3D_FixCornerTextPatch_1_00_InterceptionFunc01:
    ; Original code.
    mov dword [esp + 0x28], ecx

    push ebp
    mov ebp, esp

    push ecx
    push edx

    call _Sgd2fdf_D2Direct3D_CreateCompatibleDC

    pop edx
    pop ecx

    leave
    ret

_D2Direct3D_FixCornerTextPatch_1_00_InterceptionFunc02:
    ; Original code.
    mov dword [esp + 0x30], edi

    push ebp
    mov ebp, esp

    push ecx
    push edx

    push esi
    call _Sgd2fdf_D2Direct3D_CreateCompatibleBitmap
    add esp, 4

    pop edx
    pop ecx

    leave
    ret
