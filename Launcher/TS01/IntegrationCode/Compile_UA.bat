@echo off
set SCADE_PATH=C:\Arquivos de Programas\Esterel Technologies\Esterel SCADE 6.4.2
set PATH=%SCADE_PATH%/SCADE/bin;C:/cygwin/bin;%PATH%
set A661_XML=%SCADE_PATH%\SCADE Display\config\Workspace\environments\UAPageCreator\A661Norm\a661.xml
set DF_PATH=..\DefinitionFile\DisplayTS01.sgfx
set CONN_PATH=..\UserApplication\TS01.sdy
set OUTDIR=..\UserApplication\KCG

set INCLUDE=C:/cygwin/usr/include
set LIB=C:/cygwin/lib
set CYGWIN=nodosfilewarning

call uaadaptor.exe -n "%A661_XML%" -k "%OUTDIR%\kcg_trace.xml" -d "%DF_PATH%" "%CONN_PATH%" -outdir "%OUTDIR%"
IF %ERRORLEVEL% NEQ 0 GOTO failed

call make.exe clean
call make.exe 

:failed
pause