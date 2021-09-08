# Name of the project
PROJECT_NAME = StepIn-PeriodicTable

# comments added by hash operator

# below is the syntax for adding makefile commands

# Target : Dependencies
#<1 TAB SPACE>Command

BUILD = Build

SRC = main.c\
src/periodictable.c\

INC = inc

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# Default target built
$(PROJECT_NAME):all

$(PROJECT_NAME): $(SRC)
	gcc -I $(INC) $(SRC) -o cquizgame.exe
	
run: $(PROJECT_NAME)
	$(PROJECT_NAME)
	
clean:
	del /q *.exe
