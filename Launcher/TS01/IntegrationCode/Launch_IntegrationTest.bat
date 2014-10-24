@echo off

set INTEGRATION_WITH=TS01IntegrationTest
set INTEGRATION_PATH=..\..\%INTEGRATION_WITH%\IntegrationCode

start /B Launch_DF.bat
start /B Launch_UA.bat

start /B /D %INTEGRATION_PATH% Launch_DF.bat
start /B /D %INTEGRATION_PATH% Launch_UA.bat

pause