@echo off
set SCADE_PATH=C:\Arquivos de Programas\Esterel Technologies\Esterel SCADE 6.4.2
set PATH=C:\cygwin\bin;%SCADE_PATH%\SCADE A661\bin;%PATH%
set DF_NAME=df
set DF_PATH=..\DefinitionFile\%DF_NAME%DF
set DF_CONF=%DF_PATH%/server_conf.xml

start A661Server.exe "%DF_CONF%" "%DF_PATH%\%DF_NAME%.bin"
