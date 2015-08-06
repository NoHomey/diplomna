all: clean build

main.o: main.cc

Axis.o: Axis.hh Axis.cc Direction.o

Direction.o: Direction.hh Direction.cc

CartesianCoordinateSystem.o: CartesianCoordinateSystem.hh CartesianCoordinateSystem.cc Axis.o

build: Axis.o Direction.o CartesianCoordinateSystem.o main.o
	g++ Axis.o Direction.o CartesianCoordinateSystem.o main.o -Wall -std=c++98

clean: 
	rm -f *.o *~ control a.out
