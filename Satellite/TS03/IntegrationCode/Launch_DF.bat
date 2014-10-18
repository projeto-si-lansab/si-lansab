@echo off

call Configuration.bat

call "%SCADE_PATH%\SCADE A661\bin\A661Server.exe" "%CUSTOM_DF_CONF%" "%CUSTOM_DF_BIN%"
