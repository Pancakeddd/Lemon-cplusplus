CC:=g++
CFLAGS:=
MAIN:=main.cpp
OUT:=lemon
BINDIR:=bin

default: all


all:
	$(CC) $(MAIN) -o $(BINDIR)/$(OUT)


debug:
	$(CC) $(MAIN) -Wall -g -o $(BINDIR)/$(OUT)


opt:
	$(CC) $(MAIN) -Ofast -o $(BINDIR)/$(OUT)



.PHONY: clean
clean:
	rm $(BINDIR)/$(OUT)