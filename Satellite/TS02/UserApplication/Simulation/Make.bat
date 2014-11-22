@SET PATH=D:/Programas/SCADE/SCADE/../contrib/Msys/mingw/bin;%PATH%
@SET INCLUDE=D:/Programas/SCADE/SCADE/../contrib/Msys/mingw/include
@SET LIB=D:/Programas/SCADE/SCADE/../contrib/Msys/mingw/lib
@IF "-B"=="%1" SET ARG=%1
@mingw32-make.exe %ARG%
