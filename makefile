all: clean build

main.o: main.cc

Single.o: Single.hh Single.cc

Multy.o: Multy.hh Multy.cc

Direction.o: Direction.hh Direction.cc

Position.o: Position.cc Position.hh Single.o

Movment.o: Movment.hh Movment.cc

Universal.o: Universal.hh Universal.cc Multy.o

build: Direction.o Movment.o Single.o Position.o Multy.o Universal.o main.o
	g++ Direction.o Movment.o Single.o Position.o Multy.o Universal.o main.o -Wall -std=c++98

clean: 
	rm -f *.o *~ control a.out
