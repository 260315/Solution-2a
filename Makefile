# comments

#Target : dependency
#<TAB>Command

PROJECT_NAME =all.exe
SRC = main.c\
src\separate_csv.c

INC= inc

$(PROJECT_NAME): $(SRC)
	gcc -I $(INC) $(SRC) -o all.exe

run :all.exe
	all.exe	


clean:
	del/q *.exe
	