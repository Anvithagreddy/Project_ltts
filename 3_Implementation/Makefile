# comments

#Target : dependency
#<TAB>Command

PROJECT_NAME = Library
SRC = unity\unity.c\
src\init.c\
src\add.c\
src\view.c\
src\search.c\
src\update.c\
src\bookCount.c\
test\test.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME).exe
	
run: $(PROJECT_NAME)
	./$(PROJECT_NAME)