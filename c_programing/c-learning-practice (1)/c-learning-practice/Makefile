# Builds every chapter's exercise.c into bin/<chapter-name>
CC = gcc
CFLAGS = -Wall -Wextra -g

CHAPTERS := $(wildcard */exercise.c)
BINARIES := $(patsubst %/exercise.c,bin/%,$(CHAPTERS))

all: $(BINARIES)

bin/%: %/exercise.c
	@mkdir -p bin
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf bin

.PHONY: all clean
