all: clean build

main.o: main.cc

Axis.o: Axis.hh Axis.cc Direction.o

Direction.o: Direction.hh Direction.cc

CartesianCoordinateSystem.o: CartesianCoordinateSystem.hh CartesianCoordinateSystem.cc Axis.o

Position.o: Position.cc Position.hh CartesianCoordinateSystem.o

Movment.o: Movment.hh Movment.cc CartesianCoordinateSystem.o

build: Axis.o Direction.o CartesianCoordinateSystem.o Position.o Movment.o main.o
	g++ Axis.o Direction.o CartesianCoordinateSystem.o Position.o Movment.o main.o -Wall -std=c++98

clean: 
	rm -f *.o *~ control a.out
