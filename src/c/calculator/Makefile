CC = gcc
CFLAGS = -Wall -std=c11

all: bin/calculator

bin/calculator: src/calculator.c
	$(CC) $(CFLAGS) -o bin/calculator src/calculator.c

run: all
	./bin/calculator

clean:
	rm -f bin/calculator
