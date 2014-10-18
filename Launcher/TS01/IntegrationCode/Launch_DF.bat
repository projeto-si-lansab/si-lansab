@echo off
set SCADE_PATH=C:\Arquivos de Programas\Esterel Technologies\Esterel SCADE 6.4.2
set PATH=%SCADE_PATH%/SCADE A661/bin;%PATH%
set DF_NAME=DisplayTS01
set DF_PATH=..\DefinitionFile\%DF_NAME%DF

start A661Server.exe "%DF_PATH%\server_conf.xml" "%DF_PATH%\%DF_NAME%.bin"
