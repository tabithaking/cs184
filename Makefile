OBJS = point.o vector.o main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

all: $(OBJS) 
	$(CC) $(LFLAGS) $(OBJS) -o main

point.o: point.h point.cpp
	$(CC) $(CFLAGS) point.cpp

vector.o: vector.h vector.cpp
	$(CC) $(CFLAGS) vector.cpp

main.o: point.o vector.o main.cpp
	$(CC) $(CFLAGS) main.cpp



clean:
	\rm *.o 