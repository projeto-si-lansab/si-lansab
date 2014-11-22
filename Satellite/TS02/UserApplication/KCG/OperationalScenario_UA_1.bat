@cd "D:/Embraer ITA/Doutorado/Projetos/TS02_2Sprint_v9/TS02_2Sprint/UserApplication/KCG"
@set OCAMLRUNPARAM=b
"D:/Programas/SCADE/SCADE/bin/uaadaptor.exe"  -d "D:\Embraer ITA\Doutorado\Projetos\TS02_2Sprint_v9\TS02_2Sprint\DefinitionFile\SatelliteControlCommunication_DF.sgfx" -n "D:/Programas/SCADE/SCADE/bin/../../SCADE Display/config/Workspace/environments/UAPageCreator/A661Norm/a661.xml" -outdir "D:/Embraer ITA/Doutorado/Projetos/TS02_2Sprint_v9/TS02_2Sprint/UserApplication/KCG" -k "D:/Embraer ITA/Doutorado/Projetos/TS02_2Sprint_v9/TS02_2Sprint/UserApplication/KCG/kcg_trace.xml" -o "OperationalScenario_UA_1" -node OperationalScenario  "D:\Embraer ITA\Doutorado\Projetos\TS02_2Sprint_v9\TS02_2Sprint\UserApplication\missionPhases.sdy"
@IF ERRORLEVEL 1 GOTO failed
@move "OperationalScenario_UA_1.log" "OperationalScenario_UA_1_uaadaptor.log"
"D:/Programas/SCADE/SCADE Display/../SCADE A661/bin/dfgen.exe" -n "D:/Programas/SCADE/SCADE/bin/../../SCADE Display/config/Workspace/environments/UAPageCreator/A661Norm/a661.xml" -outdir "D:/Embraer ITA/Doutorado/Projetos/TS02_2Sprint_v9/TS02_2Sprint/UserApplication/KCG" -o "OperationalScenario_UA_1"  "D:\Embraer ITA\Doutorado\Projetos\TS02_2Sprint_v9\TS02_2Sprint\DefinitionFile\SatelliteControlCommunication_DF.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "OperationalScenario_UA_1.log" "OperationalScenario_UA_1_dfgen.log"
"D:\Programas\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe" batch generateA661ServerConf "D:\Embraer ITA\Doutorado\Projetos\TS02_2Sprint_v9\TS02_2Sprint\DefinitionFile\SatelliteControlCommunication_DF.sgfx" "D:/Embraer ITA/Doutorado/Projetos/TS02_2Sprint_v9/TS02_2Sprint/UserApplication/KCG/OperationalScenario_UA_1_conf.xml"
@exit 0
:failed
@exit 1
