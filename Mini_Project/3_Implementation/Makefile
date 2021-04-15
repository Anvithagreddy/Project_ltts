# comments

#Target : dependency
#<TAB>Command

PROJECT_NAME = all.exe
SRC = src\init.c\
src\add.c\
src\view.c\
src\search.c\
src\update.c\
src\bookCount.c\
main.c

INC = -Iinc

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)
	
run: $(PROJECT_NAME)
	$(PROJECT_NAME)