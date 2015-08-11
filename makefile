all: clean build

main.o: main.cc

Single.o: Single.hh Single.cc

Multy.o: Multy.hh Multy.cc

Direction.o: Direction.hh Direction.cc

Position.o: Position.cc Position.hh Single.o Universal.o

Movment.o: Movment.hh Movment.cc

Universal.o: Universal.hh Universal.cc Multy.o Position.o

Color.o: Color.hh Color.cc

RGBColor.o: RGBColor.hh RGBColor.cc Color.o

Object.o: Object.hh Object.cc RGBColor.o

build: Direction.o Movment.o Single.o Position.o Multy.o Universal.o Color.o RGBColor.o Object.o main.o
	g++ Direction.o Movment.o Single.o Position.o Multy.o Universal.o Color.o RGBColor.o Object.o main.o -Wall -std=c++98

clean: 
	rm -f *.o *~ control a.out
