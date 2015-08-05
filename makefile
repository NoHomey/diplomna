all: build

main.o: main.cc

Axis.o: Axis.hh Axis.cc Direction.o

Direction.o: Direction.hh Direction.cc

build: main.o Axis.o Direction.o
	g++ main.o Axis.o Direction.o -Wall -std=c++98

clean: 
	rm -f *.o *~ control a.out
