@echo off

cd .\TS02\IntegrationCode

call Configuration.bat

setlocal enableextensions
md %CUSTOM_DF_PATH%
endlocal

java -jar DisplayReconfigurator.jar %USER_DF% %CUSTOM_DF% %APP_ID% 1024 1024 0 512 20 20

call "%SCADE_PATH%\SCADE A661\bin\dfgen.exe" -n "%A661_XML%" -outdir "%CUSTOM_DF_PATH%" -o %DF_NAME% "%CUSTOM_DF%"

call "%SCADE_PATH%\SCADE Display\bin\ScadeDisplayConsole.exe" batch generateA661ServerConf "%CUSTOM_DF%" "%CUSTOM_DF_CONF%"

cd ..\..

cd .\TS03\IntegrationCode

call Configuration.bat

setlocal enableextensions
md %CUSTOM_DF_PATH%
endlocal

java -jar DisplayReconfigurator.jar %USER_DF% %CUSTOM_DF% %APP_ID% 1024 1024 512 512 20 20

call "%SCADE_PATH%\SCADE A661\bin\dfgen.exe" -n "%A661_XML%" -outdir "%CUSTOM_DF_PATH%" -o %DF_NAME% "%CUSTOM_DF%"

call "%SCADE_PATH%\SCADE Display\bin\ScadeDisplayConsole.exe" batch generateA661ServerConf "%CUSTOM_DF%" "%CUSTOM_DF_CONF%"

cd ..\..

cd .\TS05\IntegrationCode

call Configuration.bat

setlocal enableextensions
md %CUSTOM_DF_PATH%
endlocal

java -jar DisplayReconfigurator.jar %USER_DF% %CUSTOM_DF% %APP_ID% 1024 1024 0 0 20 20

call "%SCADE_PATH%\SCADE A661\bin\dfgen.exe" -n "%A661_XML%" -outdir "%CUSTOM_DF_PATH%" -o %DF_NAME% "%CUSTOM_DF%"

call "%SCADE_PATH%\SCADE Display\bin\ScadeDisplayConsole.exe" batch generateA661ServerConf "%CUSTOM_DF%" "%CUSTOM_DF_CONF%"

pause