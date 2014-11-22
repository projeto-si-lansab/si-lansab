@cd "C:/GitHub/si-lansab/Satellite/TS02/UserApplication/KCG"
@set OCAMLRUNPARAM=b
"C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE/bin/uaadaptor.exe"  -d "C:\GitHub\si-lansab\Satellite\TS02\DefinitionFile\SatelliteControlCommunication_DF.sgfx" -n "C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE/bin/../../SCADE Display/config/Workspace/environments/UAPageCreator/A661Norm/a661.xml" -outdir "C:/GitHub/si-lansab/Satellite/TS02/UserApplication/KCG" -k "C:/GitHub/si-lansab/Satellite/TS02/UserApplication/KCG/kcg_trace.xml" -o "OperationalScenario_UA_1" -node OperationalScenario  "C:\GitHub\si-lansab\Satellite\TS02\UserApplication\missionPhases.sdy"
@IF ERRORLEVEL 1 GOTO failed
@move "OperationalScenario_UA_1.log" "OperationalScenario_UA_1_uaadaptor.log"
"C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE Display/../SCADE A661/bin/dfgen.exe" -n "C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE/bin/../../SCADE Display/config/Workspace/environments/UAPageCreator/A661Norm/a661.xml" -outdir "C:/GitHub/si-lansab/Satellite/TS02/UserApplication/KCG" -o "OperationalScenario_UA_1"  "C:\GitHub\si-lansab\Satellite\TS02\DefinitionFile\SatelliteControlCommunication_DF.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "OperationalScenario_UA_1.log" "OperationalScenario_UA_1_dfgen.log"
"C:\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE Display\bin\ScadeDisplayConsole.exe" batch generateA661ServerConf "C:\GitHub\si-lansab\Satellite\TS02\DefinitionFile\SatelliteControlCommunication_DF.sgfx" "C:/GitHub/si-lansab/Satellite/TS02/UserApplication/KCG/OperationalScenario_UA_1_conf.xml"
@exit 0
:failed
@exit 1
