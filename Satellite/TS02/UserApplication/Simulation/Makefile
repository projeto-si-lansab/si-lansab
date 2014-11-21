#############################################################
######    Begin of Makefile
#############################################################

SCADE=C:\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\.

SHELL=cmd.exe

C_FLAGS = -O2 -pedantic

all: OperationalScenario.exe OperationalScenario.dll 

win32/OperationalScenario.o: OperationalScenario.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "OperationalScenario.c" -o "win32\OperationalScenario.o"	
	ar -r OperationalScenario.a "win32\OperationalScenario.o"

win32/controlAlgorithm.o: controlAlgorithm.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "controlAlgorithm.c" -o "win32\controlAlgorithm.o"	
	ar -r OperationalScenario.a "win32\controlAlgorithm.o"

win32/TestActuators.o: TestActuators.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "TestActuators.c" -o "win32\TestActuators.o"	
	ar -r OperationalScenario.a "win32\TestActuators.o"

win32/ReadSensors.o: ReadSensors.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "ReadSensors.c" -o "win32\ReadSensors.o"	
	ar -r OperationalScenario.a "win32\ReadSensors.o"

win32/kcg_types.o: kcg_types.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "kcg_types.c" -o "win32\kcg_types.o"	
	ar -r OperationalScenario.a "win32\kcg_types.o"

win32/kcg_consts.o: kcg_consts.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "kcg_consts.c" -o "win32\kcg_consts.o"	
	ar -r OperationalScenario.a "win32\kcg_consts.o"

win32/OperationalScenario_type.o: OperationalScenario_type.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "OperationalScenario_type.c" -o "win32\OperationalScenario_type.o"

win32/OperationalScenario_mapping.o: OperationalScenario_mapping.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "OperationalScenario_mapping.c" -o "win32\OperationalScenario_mapping.o"

win32/OperationalScenario_interface.o: OperationalScenario_interface.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "OperationalScenario_interface.c" -o "win32\OperationalScenario_interface.o"

win32/SmuProxy.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/Esterel\ SCADE\ 6.4.2/SCADE/lib/SmuProxy.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\lib\SmuProxy.c" -o "win32\SmuProxy.o"

OperationalScenario.dll: win32/OperationalScenario.o win32/controlAlgorithm.o win32/TestActuators.o win32/ReadSensors.o win32/kcg_types.o win32/kcg_consts.o win32/OperationalScenario_type.o win32/OperationalScenario_mapping.o win32/OperationalScenario_interface.o win32/SmuProxy.o SmuExport.def 
	dllwrap --driver-name=gcc  "win32\OperationalScenario_type.o" "win32\OperationalScenario_mapping.o" "win32\OperationalScenario_interface.o" "win32\SmuProxy.o" "OperationalScenario.a" --def "SmuExport.def" -lm -lwsock32 --dllname "OperationalScenario.dll" 

SmuExport.def: C:/Program\ Files\ (x86)/Esterel\ Technologies/Esterel\ SCADE\ 6.4.2/SCADE/lib/SmuExport.def
	copy "C:\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\lib\SmuExport.def" "SmuExport.def"

win32/OperationalScenario_dll.o: OperationalScenario_dll.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "OperationalScenario_dll.c" -o "win32\OperationalScenario_dll.o"

win32/SmuMainWindows.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/Esterel\ SCADE\ 6.4.2/SCADE/lib/SmuMainWindows.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\lib\SmuMainWindows.c" -o "win32\SmuMainWindows.o"

OperationalScenario.exe: win32/OperationalScenario_dll.o win32/SmuMainWindows.o 
	gcc "win32\OperationalScenario_dll.o" "win32\SmuMainWindows.o" -lm -lwsock32 -o "OperationalScenario.exe" 

#############################################################
######    End of Makefile
#############################################################
