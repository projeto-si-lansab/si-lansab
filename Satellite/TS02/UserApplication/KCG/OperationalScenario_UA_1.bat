@cd "C:/Paulo/ITA/237/TS02_2Sprint_v6/TS02_2Sprint_v6/TS02_2Sprint/UserApplication/KCG"
@set OCAMLRUNPARAM=b
"C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE/bin/uaadaptor.exe"  -d "C:\Paulo\ITA\237\TS02_2Sprint_v6\TS02_2Sprint_v6\TS02_2Sprint\DefinitionFile\SatelliteControlCommunication_DF.sgfx" -n "C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE/bin/../../SCADE Display/config/Workspace/environments/UAPageCreator/A661Norm/a661.xml" -outdir "C:/Paulo/ITA/237/TS02_2Sprint_v6/TS02_2Sprint_v6/TS02_2Sprint/UserApplication/KCG" -k "C:/Paulo/ITA/237/TS02_2Sprint_v6/TS02_2Sprint_v6/TS02_2Sprint/UserApplication/KCG/kcg_trace.xml" -o "OperationalScenario_UA_1" -node OperationalScenario  "C:\Paulo\ITA\237\TS02_2Sprint_v6\TS02_2Sprint_v6\TS02_2Sprint\UserApplication\missionPhases.sdy"
@IF ERRORLEVEL 1 GOTO failed
@move "OperationalScenario_UA_1.log" "OperationalScenario_UA_1_uaadaptor.log"
"C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE Display/../SCADE A661/bin/dfgen.exe" -n "C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE/bin/../../SCADE Display/config/Workspace/environments/UAPageCreator/A661Norm/a661.xml" -outdir "C:/Paulo/ITA/237/TS02_2Sprint_v6/TS02_2Sprint_v6/TS02_2Sprint/UserApplication/KCG" -o "OperationalScenario_UA_1"  "C:\Paulo\ITA\237\TS02_2Sprint_v6\TS02_2Sprint_v6\TS02_2Sprint\DefinitionFile\SatelliteControlCommunication_DF.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "OperationalScenario_UA_1.log" "OperationalScenario_UA_1_dfgen.log"
"C:\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE Display\bin\ScadeDisplayConsole.exe" batch generateA661ServerConf "C:\Paulo\ITA\237\TS02_2Sprint_v6\TS02_2Sprint_v6\TS02_2Sprint\DefinitionFile\SatelliteControlCommunication_DF.sgfx" "C:/Paulo/ITA/237/TS02_2Sprint_v6/TS02_2Sprint_v6/TS02_2Sprint/UserApplication/KCG/OperationalScenario_UA_1_conf.xml"
@exit 0
:failed
@exit 1
