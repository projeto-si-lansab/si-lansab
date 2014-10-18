#############################################################
#
# makefile
#
#############################################################

CC = gcc
OBJDIR = bin
BIN = ts01UA.exe
ROOTNODE = Main
CFLAGS = -ansi -Wall -Wextra
INCLUDES = -I. \
		   -I../UserApplication/KCG \
		   -I../../../CommunicationFramework \
		   -I"C:/Arquivos de Programas/Esterel Technologies/Esterel SCADE 6.4.2/SCADE" \
		   -I"C:/Arquivos de Programas/Esterel Technologies/Esterel SCADE 6.4.2/SCADE/include"
SRC := ./ts01UA.c \
	   ../../../CommunicationFramework/CommunicationFramework.c \
	   ../UserApplication/KCG/$(ROOTNODE).c \
	   ../UserApplication/KCG/kcg_consts.c \
	   ../UserApplication/KCG/kcg_types.c \
	   ../UserApplication/KCG/ua.c
LIBS = -lpthread
MKDIR = mkdir -p
RM = rm -rf

VPATH := $(dir $(SRC))
OBJS := $(patsubst %.c, $(OBJDIR)/%.o, $(notdir $(SRC)))
BIN := $(addprefix $(OBJDIR)/, $(BIN))

all: $(BIN)

$(OBJS): | $(OBJDIR)

$(OBJDIR):
	$(MKDIR) $(OBJDIR)

$(BIN): $(OBJS)
	@echo 'Building target: $@'
	$(CC) $(LDFLAGS) -o $(BIN) $(OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

$(OBJDIR)/%.o: %.c
	@echo 'Building file: $<'
	$(CC) -c $(CFLAGS) $(INCLUDES) $< -o $@
	@echo 'Finished building: $<'
	@echo ' '

clean:
	-$(RM) $(OBJDIR)

.PHONY: all clean
