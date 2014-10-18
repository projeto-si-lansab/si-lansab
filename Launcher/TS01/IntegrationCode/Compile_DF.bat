@echo off
set SCADE_PATH=C:\Arquivos de Programas\Esterel Technologies\Esterel SCADE 6.4.2
set PATH=C:\cygwin\bin;%SCADE_PATH%\SCADE A661\bin;%PATH%
set DF_NAME=DisplayTS01
set CUSTOM_DF=..\DefinitionFile\custom_%DF_NAME%.sgfx
set DF_PATH=..\DefinitionFile\%DF_NAME%DF
set APP_ID=1
set LAYER_ID=1
set CYGWIN=nodosfilewarning

cp ../DefinitionFile/%DF_NAME%.sgfx %CUSTOM_DF%
bash fix_df_id.sh %APP_ID% %CUSTOM_DF%

dfgen.exe -n "%SCADE_PATH%\SCADE Display\config\Workspace\environments\UAPageCreator\A661Norm\a661.xml" -outdir "%DF_PATH%" -o %DF_NAME% "%CUSTOM_DF%"

"%SCADE_PATH%\SCADE Display\bin\ScadeDisplayConsole.exe" batch generateA661ServerConf "%CUSTOM_DF%" "%DF_PATH%\server_conf.xml"

REM sed -i -e "s|visible=\".\"|visible=\"true\"|g" "%DF_PATH%\server_conf.xml"

pause