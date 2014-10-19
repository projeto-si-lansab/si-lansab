@echo off

call Configuration.bat

set INCLUDE=C:/cygwin/usr/include
set LIB=C:/cygwin/lib

call "%SCADE_PATH%\SCADE\bin\scade.exe" -code "%USER_UA%" -node %UA_NODE% -conf KCG

call "%SCADE_PATH%\SCADE\bin\uaadaptor.exe" -n "%A661_XML%" -k "%UA_CODE_PATH%\kcg_trace.xml" -d "%CUSTOM_DF%" "%DF_UA_CONNECTION_FILE%" -outdir "%UA_CODE_PATH%"
IF %ERRORLEVEL% NEQ 0 GOTO failed

call "C:\cygwin\bin\make.exe" clean
call "C:\cygwin\bin\make.exe"

:failed
pause