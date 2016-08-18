CC = gcc
OBJS = main.o forma.o
CFLAGS = -Wall -c
LFLAGS = -Wall 

main: $(OBJS)
	$(CC) $(OBJS) $(LFLAGS) -o main

main.o: main.c forma.h 
	$(CC) $(CFLAGS) main.c 

forma.o: forma.h forma.c
	$(CC) $(CFLAGS) forma.c

clean: 
	\rm *.o *~ main


