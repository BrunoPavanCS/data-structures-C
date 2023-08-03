CFLAGS = -Wall -Werror

all: sorted_array_client

sorted_array_client: sorted_array_client.o sorted_array.o
	gcc sorted_array_client.o sorted_array.o -o sorted_array_client

sorted_array.o: sorted_array.c sorted_array.h
	gcc $(CFLAGS) -c sorted_array.c

sorted_array_client.o: sorted_array_client.c sorted_array.h
	gcc $(CFLAGS) -c sorted_array_client.c