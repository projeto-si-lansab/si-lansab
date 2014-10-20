set CYGWIN_PATH=C:\cygwin\bin

set CYGWIN=nodosfilewarning

set A661_XML=%SCADE_PATH%\SCADE Display\config\Workspace\environments\UAPageCreator\A661Norm\a661.xml

set DF_PATH=..\DefinitionFile
set DF_NAME=ts05

set USER_DF=%DF_PATH%\%DF_NAME%.sgfx

set CUSTOM_DF_PATH=%DF_PATH%\INTEGRATION_%DF_NAME%DF

set CUSTOM_DF=%CUSTOM_DF_PATH%\%DF_NAME%.sgfx

set CUSTOM_DF_CONF=%CUSTOM_DF_PATH%\server_conf.xml
set CUSTOM_DF_BIN=%CUSTOM_DF_PATH%\%DF_NAME%.bin

set UA_PATH=..\UserApplication
set UA_NAME=ts05
set UA_NODE=ts05

set USER_UA=%UA_PATH%\%UA_NAME%.etp

set UA_CODE_PATH=%UA_PATH%\KCG

set DF_UA_CONNECTION_FILE=%UA_PATH%\%UA_NAME%.sdy

set APP_ID=10

set OBJDIR=bin
set EXEC=UserApplication.exe

set DF_SERVER_IP=127.0.0.1
set /a DF_SERVER_PORT=1230+%APP_ID%
set BROADCAST_GROUP=224.255.255.255
set BROADCAST_PORT=12340
set NETWORK_INTERFACE=127.0.0.1
