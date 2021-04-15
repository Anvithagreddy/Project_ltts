# comments

#Target : dependency
#<TAB>Command

# PROJECT_NAME = Library
# SRC = unity\unity.c\
# src\init.c\
# src\add.c\
# src\view.c\
# src\search.c\
# src\update.c\
# src\bookCount.c\
# test\test.c\
# main.c

# INC = -Iunity\
# -Iinc\
# -Itest

# $(PROJECT_NAME): $(SRC)
# 	gcc $(SRC) $(INC) -o $(PROJECT_NAME).exe
	
# run: $(PROJECT_NAME)
# 	./$(PROJECT_NAME)

PROJ_NAME = Library
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC =src\init.c\
src\add.c\
src\view.c\
src\search.c\
src\update.c\
src\bookCount.c\

COV_SRC = main.c

TEST_SRC = test/test.c \
unity/unity.c 
INC_H = inc
INC_T = unity

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
.PHONY: run clean test doc all

all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))

