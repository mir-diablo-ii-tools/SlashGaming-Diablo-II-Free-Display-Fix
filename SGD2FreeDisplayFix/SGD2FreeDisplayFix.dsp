# Microsoft Developer Studio Project File - Name="SGD2FreeDisplayFix" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=SGD2FreeDisplayFix - Win32 Debug Dll
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "SGD2FreeDisplayFix.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "SGD2FreeDisplayFix.mak" CFG="SGD2FreeDisplayFix - Win32 Debug Dll"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "SGD2FreeDisplayFix - Win32 Release" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "SGD2FreeDisplayFix - Win32 Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "SGD2FreeDisplayFix - Win32 Release Dll" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "SGD2FreeDisplayFix - Win32 Debug Dll" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "SGD2FREEDISPLAYFIX_EXPORTS" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /I "../third_party/MDC/MDC/include" /I "../third_party/SGD2MAPI98/SGD2MAPIc/include" /D "WIN32" /D "NDEBUG" /D "_UNICODE" /D "UNICODE" /D "SGD2FDF_DLLEXPORT" /FD /c
# SUBTRACT CPP /YX
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386
# ADD LINK32 libunicows.lib libMDCc.lib libSGD2MAPIc.lib shlwapi.lib version.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 /out:"Release/SGD2FreeDisplayFix.static.dll" /libpath:"../third_party/MDC/MDC/Release" /libpath:"../third_party/SGD2MAPI98/SGD2MAPIc/Release"

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "SGD2FREEDISPLAYFIX_EXPORTS" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /I "../third_party/MDC/MDC/include" /I "../third_party/SGD2MAPI98/SGD2MAPIc/include" /D "WIN32" /D "_DEBUG" /D "_UNICODE" /D "UNICODE" /D "SGD2FDF_DLLEXPORT" /FD /GZ /c
# SUBTRACT CPP /YX
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo /o"Debug/SGD2FreeDisplayFixD.bsc"
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 libunicows.lib libMDCcD.lib libSGD2MAPIcD.lib shlwapi.lib version.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /out:"Debug/SGD2FreeDisplayFixD.static.dll" /pdbtype:sept /libpath:"../third_party/MDC/MDC/Debug" /libpath:"../third_party/SGD2MAPI98/SGD2MAPIc/Debug"

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release Dll"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "ReleaseDll"
# PROP BASE Intermediate_Dir "ReleaseDll"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "ReleaseDll"
# PROP Intermediate_Dir "ReleaseDll"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /I "../third_party/MDC/MDC/include" /I "../third_party/SGD2MAPI98/SGD2MAPIc/include" /D "WIN32" /D "NDEBUG" /D "_UNICODE" /D "UNICODE" /D "SGD2FDF_DLLEXPORT" /FD /c
# SUBTRACT BASE CPP /YX
# ADD CPP /nologo /MD /W3 /GX /O2 /I "../third_party/MDC/MDC/include" /I "../third_party/SGD2MAPI98/SGD2MAPIc/include" /D "WIN32" /D "NDEBUG" /D "_UNICODE" /D "UNICODE" /D "SGD2FDF_DLLEXPORT" /D "SGD2MAPIC_DLLIMPORT" /D "MDC_DLLIMPORT" /FD /c
# SUBTRACT CPP /YX
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 libunicows.lib libMDCc.lib libSGD2MAPIc.lib shlwapi.lib version.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 /out:"Release/SGD2FreeDisplayFix.static.dll" /libpath:"../third_party/MDC/MDC/Release" /libpath:"../third_party/SGD2MAPI98/SGD2MAPIc/Release"
# ADD LINK32 libunicows.lib MDCc.lib SGD2MAPIc.lib shlwapi.lib version.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 /libpath:"../third_party/MDC/MDC/ReleaseDll" /libpath:"../third_party/SGD2MAPI98/SGD2MAPIc/ReleaseDll"
# SUBTRACT LINK32 /pdb:none

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug Dll"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "DebugDll"
# PROP BASE Intermediate_Dir "DebugDll"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "DebugDll"
# PROP Intermediate_Dir "DebugDll"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /I "../third_party/MDC/MDC/include" /I "../third_party/SGD2MAPI98/SGD2MAPIc/include" /D "WIN32" /D "_DEBUG" /D "_UNICODE" /D "UNICODE" /D "SGD2FDF_DLLEXPORT" /FD /GZ /c
# SUBTRACT BASE CPP /YX
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /I "../third_party/MDC/MDC/include" /I "../third_party/SGD2MAPI98/SGD2MAPIc/include" /D "WIN32" /D "_DEBUG" /D "_UNICODE" /D "UNICODE" /D "SGD2FDF_DLLEXPORT" /D "SGD2MAPIC_DLLIMPORT" /D "MDC_DLLIMPORT" /FD /GZ /c
# SUBTRACT CPP /YX
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo /o"DebugDll/SGD2FreeDisplayFixD.bsc"
LINK32=link.exe
# ADD BASE LINK32 libunicows.lib libMDCcD.lib libSGD2MAPIcD.lib shlwapi.lib version.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /out:"Debug/SGD2FreeDisplayFix.static.dll" /pdbtype:sept /libpath:"../third_party/MDC/MDC/Debug" /libpath:"../third_party/SGD2MAPI98/SGD2MAPIc/Debug"
# ADD LINK32 libunicows.lib MDCcD.lib SGD2MAPIcD.lib shlwapi.lib version.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /out:"DebugDll/SGD2FreeDisplayFixD.dll" /pdbtype:sept /libpath:"../third_party/MDC/MDC/DebugDll" /libpath:"../third_party/SGD2MAPI98/SGD2MAPIc/DebugDll"

!ENDIF 

# Begin Target

# Name "SGD2FreeDisplayFix - Win32 Release"
# Name "SGD2FreeDisplayFix - Win32 Debug"
# Name "SGD2FreeDisplayFix - Win32 Release Dll"
# Name "SGD2FreeDisplayFix - Win32 Debug Dll"
# Begin Group "Files"

# PROP Default_Filter ""
# Begin Group "include"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\include\dllexport_define.inc
# End Source File
# Begin Source File

SOURCE=.\include\dllexport_undefine.inc
# End Source File
# Begin Source File

SOURCE=.\include\license.h
# End Source File
# End Group
# Begin Group "resource"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\resource\resource.rc
# End Source File
# Begin Source File

SOURCE=.\resource\slashgaming_game_loader.ico
# End Source File
# End Group
# Begin Group "src"

# PROP Default_Filter ""
# Begin Group "helper"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\helper\patch_address_and_size.c
# End Source File
# Begin Source File

SOURCE=.\src\helper\patch_address_and_size.h
# End Source File
# End Group
# Begin Group "patches"

# PROP Default_Filter ""
# Begin Group "required"

# PROP Default_Filter ""
# Begin Group "d2ddraw_fctp"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_1_00.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_1_00.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_1_00_shim.asm

!IF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\required\d2ddraw_fix_corner_text_patch
IntDir=.\Release
InputPath=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_1_00_shim.asm
InputName=d2ddraw_fix_corner_text_patch_1_00_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\required\d2ddraw_fix_corner_text_patch
IntDir=.\Debug
InputPath=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_1_00_shim.asm
InputName=d2ddraw_fix_corner_text_patch_1_00_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\required\d2ddraw_fix_corner_text_patch
IntDir=.\ReleaseDll
InputPath=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_1_00_shim.asm
InputName=d2ddraw_fix_corner_text_patch_1_00_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\required\d2ddraw_fix_corner_text_patch
IntDir=.\DebugDll
InputPath=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_1_00_shim.asm
InputName=d2ddraw_fix_corner_text_patch_1_00_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_1_11.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_1_11.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_1_11_shim.asm

!IF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\required\d2ddraw_fix_corner_text_patch
IntDir=.\Release
InputPath=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_1_11_shim.asm
InputName=d2ddraw_fix_corner_text_patch_1_11_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\required\d2ddraw_fix_corner_text_patch
IntDir=.\Debug
InputPath=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_1_11_shim.asm
InputName=d2ddraw_fix_corner_text_patch_1_11_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\required\d2ddraw_fix_corner_text_patch
IntDir=.\ReleaseDll
InputPath=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_1_11_shim.asm
InputName=d2ddraw_fix_corner_text_patch_1_11_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\required\d2ddraw_fix_corner_text_patch
IntDir=.\DebugDll
InputPath=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_1_11_shim.asm
InputName=d2ddraw_fix_corner_text_patch_1_11_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_classic_1_14d.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_classic_1_14d.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_classic_1_14d_shim.asm

!IF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\required\d2ddraw_fix_corner_text_patch
IntDir=.\Release
InputPath=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_classic_1_14d_shim.asm
InputName=d2ddraw_fix_corner_text_patch_classic_1_14d_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\required\d2ddraw_fix_corner_text_patch
IntDir=.\Debug
InputPath=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_classic_1_14d_shim.asm
InputName=d2ddraw_fix_corner_text_patch_classic_1_14d_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\required\d2ddraw_fix_corner_text_patch
IntDir=.\ReleaseDll
InputPath=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_classic_1_14d_shim.asm
InputName=d2ddraw_fix_corner_text_patch_classic_1_14d_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\required\d2ddraw_fix_corner_text_patch
IntDir=.\DebugDll
InputPath=.\src\patches\required\d2ddraw_fix_corner_text_patch\d2ddraw_fix_corner_text_patch_classic_1_14d_shim.asm
InputName=d2ddraw_fix_corner_text_patch_classic_1_14d_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# End Group
# Begin Group "d2direct3d_fctp"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\patches\required\d2direct3d_fix_corner_text_patch\d2direct3d_fix_corner_text.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2direct3d_fix_corner_text_patch\d2direct3d_fix_corner_text.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2direct3d_fix_corner_text_patch\d2direct3d_fix_corner_text_patch.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2direct3d_fix_corner_text_patch\d2direct3d_fix_corner_text_patch.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2direct3d_fix_corner_text_patch\d2direct3d_fix_corner_text_patch_1_00.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2direct3d_fix_corner_text_patch\d2direct3d_fix_corner_text_patch_1_00.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2direct3d_fix_corner_text_patch\d2direct3d_fix_corner_text_patch_1_00_shim.asm

!IF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\required\d2direct3d_fix_corner_text_patch
IntDir=.\Release
InputPath=.\src\patches\required\d2direct3d_fix_corner_text_patch\d2direct3d_fix_corner_text_patch_1_00_shim.asm
InputName=d2direct3d_fix_corner_text_patch_1_00_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\required\d2direct3d_fix_corner_text_patch
IntDir=.\Debug
InputPath=.\src\patches\required\d2direct3d_fix_corner_text_patch\d2direct3d_fix_corner_text_patch_1_00_shim.asm
InputName=d2direct3d_fix_corner_text_patch_1_00_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\required\d2direct3d_fix_corner_text_patch
IntDir=.\ReleaseDll
InputPath=.\src\patches\required\d2direct3d_fix_corner_text_patch\d2direct3d_fix_corner_text_patch_1_00_shim.asm
InputName=d2direct3d_fix_corner_text_patch_1_00_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\required\d2direct3d_fix_corner_text_patch
IntDir=.\DebugDll
InputPath=.\src\patches\required\d2direct3d_fix_corner_text_patch\d2direct3d_fix_corner_text_patch_1_00_shim.asm
InputName=d2direct3d_fix_corner_text_patch_1_00_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2direct3d_fix_corner_text_patch\d2direct3d_fix_corner_text_patch_1_11.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2direct3d_fix_corner_text_patch\d2direct3d_fix_corner_text_patch_1_11.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2direct3d_fix_corner_text_patch\d2direct3d_fix_corner_text_patch_1_11_shim.asm

!IF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\required\d2direct3d_fix_corner_text_patch
IntDir=.\Release
InputPath=.\src\patches\required\d2direct3d_fix_corner_text_patch\d2direct3d_fix_corner_text_patch_1_11_shim.asm
InputName=d2direct3d_fix_corner_text_patch_1_11_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\required\d2direct3d_fix_corner_text_patch
IntDir=.\Debug
InputPath=.\src\patches\required\d2direct3d_fix_corner_text_patch\d2direct3d_fix_corner_text_patch_1_11_shim.asm
InputName=d2direct3d_fix_corner_text_patch_1_11_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\required\d2direct3d_fix_corner_text_patch
IntDir=.\ReleaseDll
InputPath=.\src\patches\required\d2direct3d_fix_corner_text_patch\d2direct3d_fix_corner_text_patch_1_11_shim.asm
InputName=d2direct3d_fix_corner_text_patch_1_11_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\required\d2direct3d_fix_corner_text_patch
IntDir=.\DebugDll
InputPath=.\src\patches\required\d2direct3d_fix_corner_text_patch\d2direct3d_fix_corner_text_patch_1_11_shim.asm
InputName=d2direct3d_fix_corner_text_patch_1_11_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# End Group
# Begin Group "d2direct3d_fdmcbp"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\patches\required\d2direct3d_fix_display_mode_color_bits_patch\d2direct3d_fix_display_mode_color_bits_patch.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2direct3d_fix_display_mode_color_bits_patch\d2direct3d_fix_display_mode_color_bits_patch.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2direct3d_fix_display_mode_color_bits_patch\d2direct3d_fix_display_mode_color_bits_patch_1_00.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2direct3d_fix_display_mode_color_bits_patch\d2direct3d_fix_display_mode_color_bits_patch_1_00.h
# End Source File
# End Group
# Begin Group "d2glide_fctp"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_checksum.asm

!IF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\required\d2glide_fix_corner_text_patch
IntDir=.\Release
InputPath=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_checksum.asm
InputName=d2glide_fix_corner_text_checksum

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\required\d2glide_fix_corner_text_patch
IntDir=.\Debug
InputPath=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_checksum.asm
InputName=d2glide_fix_corner_text_checksum

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\required\d2glide_fix_corner_text_patch
IntDir=.\ReleaseDll
InputPath=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_checksum.asm
InputName=d2glide_fix_corner_text_checksum

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\required\d2glide_fix_corner_text_patch
IntDir=.\DebugDll
InputPath=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_checksum.asm
InputName=d2glide_fix_corner_text_checksum

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_1_00.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_1_00.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_1_00_shim.asm

!IF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\required\d2glide_fix_corner_text_patch
IntDir=.\Release
InputPath=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_1_00_shim.asm
InputName=d2glide_fix_corner_text_patch_1_00_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\required\d2glide_fix_corner_text_patch
IntDir=.\Debug
InputPath=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_1_00_shim.asm
InputName=d2glide_fix_corner_text_patch_1_00_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\required\d2glide_fix_corner_text_patch
IntDir=.\ReleaseDll
InputPath=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_1_00_shim.asm
InputName=d2glide_fix_corner_text_patch_1_00_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\required\d2glide_fix_corner_text_patch
IntDir=.\DebugDll
InputPath=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_1_00_shim.asm
InputName=d2glide_fix_corner_text_patch_1_00_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_1_11.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_1_11.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_1_11_shim.asm

!IF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\required\d2glide_fix_corner_text_patch
IntDir=.\Release
InputPath=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_1_11_shim.asm
InputName=d2glide_fix_corner_text_patch_1_11_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\required\d2glide_fix_corner_text_patch
IntDir=.\Debug
InputPath=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_1_11_shim.asm
InputName=d2glide_fix_corner_text_patch_1_11_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\required\d2glide_fix_corner_text_patch
IntDir=.\ReleaseDll
InputPath=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_1_11_shim.asm
InputName=d2glide_fix_corner_text_patch_1_11_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\required\d2glide_fix_corner_text_patch
IntDir=.\DebugDll
InputPath=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_1_11_shim.asm
InputName=d2glide_fix_corner_text_patch_1_11_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_classic_1_14a.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_classic_1_14a.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_classic_1_14a_shim.asm

!IF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\required\d2glide_fix_corner_text_patch
IntDir=.\Release
InputPath=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_classic_1_14a_shim.asm
InputName=d2glide_fix_corner_text_patch_classic_1_14a_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\required\d2glide_fix_corner_text_patch
IntDir=.\Debug
InputPath=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_classic_1_14a_shim.asm
InputName=d2glide_fix_corner_text_patch_classic_1_14a_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\required\d2glide_fix_corner_text_patch
IntDir=.\ReleaseDll
InputPath=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_classic_1_14a_shim.asm
InputName=d2glide_fix_corner_text_patch_classic_1_14a_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\required\d2glide_fix_corner_text_patch
IntDir=.\DebugDll
InputPath=.\src\patches\required\d2glide_fix_corner_text_patch\d2glide_fix_corner_text_patch_classic_1_14a_shim.asm
InputName=d2glide_fix_corner_text_patch_classic_1_14a_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# End Group
# Begin Group "game_rdp"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_classic_1_14a.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_classic_1_14a.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_classic_1_14a_shim.asm

!IF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\required\game_restore_ddraw_patch
IntDir=.\Release
InputPath=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_classic_1_14a_shim.asm
InputName=game_restore_ddraw_patch_classic_1_14a_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\required\game_restore_ddraw_patch
IntDir=.\Debug
InputPath=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_classic_1_14a_shim.asm
InputName=game_restore_ddraw_patch_classic_1_14a_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\required\game_restore_ddraw_patch
IntDir=.\ReleaseDll
InputPath=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_classic_1_14a_shim.asm
InputName=game_restore_ddraw_patch_classic_1_14a_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\required\game_restore_ddraw_patch
IntDir=.\DebugDll
InputPath=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_classic_1_14a_shim.asm
InputName=game_restore_ddraw_patch_classic_1_14a_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_classic_1_14d.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_classic_1_14d.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_classic_1_14d_shim.asm

!IF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\required\game_restore_ddraw_patch
IntDir=.\Release
InputPath=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_classic_1_14d_shim.asm
InputName=game_restore_ddraw_patch_classic_1_14d_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\required\game_restore_ddraw_patch
IntDir=.\Debug
InputPath=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_classic_1_14d_shim.asm
InputName=game_restore_ddraw_patch_classic_1_14d_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\required\game_restore_ddraw_patch
IntDir=.\ReleaseDll
InputPath=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_classic_1_14d_shim.asm
InputName=game_restore_ddraw_patch_classic_1_14d_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\required\game_restore_ddraw_patch
IntDir=.\DebugDll
InputPath=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_classic_1_14d_shim.asm
InputName=game_restore_ddraw_patch_classic_1_14d_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_lod_1_14a.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_lod_1_14a.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_lod_1_14a_shim.asm

!IF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\required\game_restore_ddraw_patch
IntDir=.\Release
InputPath=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_lod_1_14a_shim.asm
InputName=game_restore_ddraw_patch_lod_1_14a_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\required\game_restore_ddraw_patch
IntDir=.\Debug
InputPath=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_lod_1_14a_shim.asm
InputName=game_restore_ddraw_patch_lod_1_14a_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\required\game_restore_ddraw_patch
IntDir=.\ReleaseDll
InputPath=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_lod_1_14a_shim.asm
InputName=game_restore_ddraw_patch_lod_1_14a_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\required\game_restore_ddraw_patch
IntDir=.\DebugDll
InputPath=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_lod_1_14a_shim.asm
InputName=game_restore_ddraw_patch_lod_1_14a_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_lod_1_14d.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_lod_1_14d.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_lod_1_14d_shim.asm

!IF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\required\game_restore_ddraw_patch
IntDir=.\Release
InputPath=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_lod_1_14d_shim.asm
InputName=game_restore_ddraw_patch_lod_1_14d_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\required\game_restore_ddraw_patch
IntDir=.\Debug
InputPath=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_lod_1_14d_shim.asm
InputName=game_restore_ddraw_patch_lod_1_14d_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\required\game_restore_ddraw_patch
IntDir=.\ReleaseDll
InputPath=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_lod_1_14d_shim.asm
InputName=game_restore_ddraw_patch_lod_1_14d_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeDisplayFix - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\required\game_restore_ddraw_patch
IntDir=.\DebugDll
InputPath=.\src\patches\required\game_restore_ddraw_patch\game_restore_ddraw_patch_lod_1_14d_shim.asm
InputName=game_restore_ddraw_patch_lod_1_14d_shim

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# End Group
# Begin Source File

SOURCE=.\src\patches\required\required_patches.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\required\required_patches.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\src\patches\patches.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\patches.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\src\dll_main.c
# End Source File
# Begin Source File

SOURCE=.\src\license.c
# End Source File
# End Group
# End Group
# End Target
# End Project
