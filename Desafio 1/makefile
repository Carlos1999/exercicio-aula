#Feito por Carlos Vinícius dos Santos
CC = g++
CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)
SRC = ./src
INC = ./include
BIN = ./bin
OBJ = ./build

PROG = $(BIN)/teste
OBJS = desafio1.cpp

all:$(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

run:
	$(BIN)/teste
