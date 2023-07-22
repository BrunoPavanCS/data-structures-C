CFLAGS = -Wall -Werror

all: array_client

array_client: array_client.o array.o
	gcc array_client.o array.o -o array_client

array.o: array.c array.h
	gcc $(CFLAGS) -c array.c

array_client.o: array_client.c array.h
	gcc $(CFLAGS) -c array_client.c
