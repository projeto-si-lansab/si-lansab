@echo off

call "%SCADE_PATH%\SCADE A661\bin\A661Server.exe" "server_conf.xml" "TS02\DefinitionFile\INTEGRATION_SatelliteControlCommunication_DFDF\SatelliteControlCommunication_DF.bin" "TS03\DefinitionFile\INTEGRATION_TS03DF\TS03.bin" "TS05\DefinitionFile\INTEGRATION_ts05DF\ts05.bin"
