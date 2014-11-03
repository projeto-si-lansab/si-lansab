ROOT=./
CC_FLAGS=-ansi -I . -I ../UserApplication/KCG/ -I ../../CommunicationFramework/ -I "C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE/" -I "C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE/include" -Wall -Wno-unused-variable -Wno-unused-function -Wno-unused-value
SRC=team1UA.c ../../CommunicationFramework/CommunicationFramework.c ../UserApplication/KCG/kcg_consts.c ../UserApplication/KCG/kcg_types.c ../UserApplication/KCG/project1.c ../UserApplication/KCG/ua.c

OBJ=$(SRC:.c=.o)

team1UA.exe: $(OBJ)
	gcc -o $@ $(OBJ)

.c.o:
	gcc $(CC_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) team1UA.exe

.PHONY: clean
