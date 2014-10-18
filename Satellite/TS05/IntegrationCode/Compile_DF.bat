@echo off

call Configuration.bat

setlocal enableextensions
md %CUSTOM_DF_PATH%
endlocal

copy %USER_DF% %CUSTOM_DF% >NUL
call "%CYGWIN_PATH%\sed" -i -e "s|<intprop name=\"ApplicationId\">[^<]*</intprop>|<intprop name=\"ApplicationId\">%APP_ID%</intprop>|g" '%CUSTOM_DF%'

call "%SCADE_PATH%\SCADE A661\bin\dfgen.exe" -n "%A661_XML%" -outdir "%CUSTOM_DF_PATH%" -o %DF_NAME% "%CUSTOM_DF%"

call "%SCADE_PATH%\SCADE Display\bin\ScadeDisplayConsole.exe" batch generateA661ServerConf "%CUSTOM_DF%" "%CUSTOM_DF_CONF%"

pause