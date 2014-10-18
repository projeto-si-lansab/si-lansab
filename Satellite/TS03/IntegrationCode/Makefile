#############################################################
#
# makefile
#
#############################################################

CC = gcc
CFLAGS = -ansi -Wall -Wextra
INCLUDES = -I. \
		   -I../UserApplication/KCG \
		   -I../../../CommunicationFramework \
		   -I"$(SCADE_PATH)/SCADE" \
		   -I"$(SCADE_PATH)/SCADE/include"
SRC := ./IntegrationCode.c \
	   ../../../CommunicationFramework/CommunicationFramework.c \
	   ../UserApplication/KCG/$(UA_NODE).c \
	   ../UserApplication/KCG/kcg_consts.c \
	   ../UserApplication/KCG/kcg_types.c \
	   ../UserApplication/KCG/ua.c
LIBS = -lpthread
MKDIR = mkdir -p
RM = rm -rf

VPATH := $(dir $(SRC))
OBJS := $(patsubst %.c, $(OBJDIR)/%.o, $(notdir $(SRC)))
EXEC := $(addprefix $(OBJDIR)/, $(EXEC))

all: $(EXEC)

$(OBJS): | $(OBJDIR)

$(OBJDIR):
	$(MKDIR) $(OBJDIR)

$(EXEC): $(OBJS)
	@echo 'Building target: $@'
	$(CC) $(LDFLAGS) -o $(EXEC) $(OBJS) $(LIBS)
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
