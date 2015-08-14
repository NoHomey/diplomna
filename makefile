# !!! Self reminder
#Once cloned Run:
#[git config credential.helper store]
#[git push https://github.com/NoHomey/diplomna.git]
#Type Username & Password 
#[make git m="a message"] => auto commiting and pushing! 

all: clear clean build

main.o: main.cc

Direction.o: Direction.hh Direction.cc 

Movment.o: Movment.hh Movment.cc Direction.o

Converters.o: Converters.hh Converters.cc Direction.o Movment.o

Position.o: Position.hh Position.cc Direction.o Movment.o 

Universal.o: Universal.hh Universal.cc

Color.o: Color.hh Color.cc

RGBColor.o: RGBColor.hh RGBColor.cc Color.o 

Object.o: Object.hh Object.cc RGBColor.o

GameObject.o: GameObject.hh GameObject.cc Object.o

EngineObject.o: EngineObject.hh EngineObject.cc Object.o

build: Direction.o Movment.o Converters.o Position.o Universal.o Color.o RGBColor.o Object.o GameObject.o EngineObject.o main.o
	g++ Direction.o Movment.o Converters.o Position.o Universal.o Color.o RGBColor.o Object.o GameObject.o EngineObject.o main.o -Wall -std=c++98

clean: 
	rm -f *.o *~ a.out message

clear:
	clear

git: message
	rm message
	git add -A
	git commit -F message.txt
	git push

message: clean
	g++ message.cc -o message
	./message ${m}