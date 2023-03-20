CC=gcc
BIN=2048_new
OBJ=main.o direction.o game2048.o tools.o
FLAG=-Wall -Werror

all:$(OBJ)
	$(CC) -o $(BIN) $(OBJ)
main.o:main.c tools.h direction.h game2048.h
	$(CC) -c main.c $(FLAG)
direction.o:direction.c direction.h tools.h
	$(CC) -c direction.c $(FLAG)
game2048.o:game2048.c game2048.h direction.h tools.h
	$(CC) -c game2048.c
tools.o:tools.c tools.h
	$(CC) -c tools.c

clean:
	rm $(BIN) $(OBJ)
