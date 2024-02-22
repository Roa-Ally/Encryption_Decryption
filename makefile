CC=gcc
CFLAGS=-I. -g -w -lm
DEPS= main.h
OBJ = main.o encrypt.o decrypt.o
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
railcipher: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)