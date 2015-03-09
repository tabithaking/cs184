OBJS = point.o normal.o color.o vector.o BRDF.o light.o main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

all: $(OBJS) 
	$(CC) $(LFLAGS) $(OBJS) -o main

point.o: point.h point.cpp
	$(CC) $(CFLAGS) point.cpp

normal.o: normal.h normal.cpp
	$(CC) $(CFLAGS) normal.cpp

color.o: color.h color.cpp
	$(CC) $(CFLAGS) color.cpp

vector.o: vector.h vector.cpp
	$(CC) $(CFLAGS) vector.cpp

BRDF.o: BRDF.h BRDF.cpp
	$(CC) $(CFLAGS) BRDF.cpp

light.o: light.h light.cpp
	$(CC) $(CFLAGS) light.cpp

main.o: point.o vector.o main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	\rm *.o 