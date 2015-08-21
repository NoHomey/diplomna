# !!! Self reminder
#Once cloned Run:
#[git config credential.helper store]
#[git push https://github.com/NoHomey/diplomna.git]
#Type Username & Password 
#[make git m="a message"] => auto commiting and pushing! 

C = g++ -std=c++14

all: clear clean build

main.o: main.cc
	${C} main.cc -c

Direction.o: Direction.hh Direction.cc
	${C} Direction.cc -c

Movment.o: Movment.hh Movment.cc Direction.o
	${C} Movment.cc -c

Converters.o: Converters.hh Converters.cc Direction.o Movment.o
	${C} Converters.cc -c

Position.o: Position.hh Position.cc Direction.o Movment.o
	${C} Position.cc -c

Color.o: Color.hh Color.cc
	${C} Color.cc -c

RGBColor.o: RGBColor.hh RGBColor.cc Color.o
	${C} RGBColor.cc -c

Object.o: Object.hh Object.cc
	${C} Object.cc -c

Visible.o: Visible.hh Visible.cc RGBColor.o
		${C} Visible.cc -c

ScreenObject.o: ScreenObject.hh ScreenObject.cc Object.o Visible.o
	${C} ScreenObject.cc -c

Positionable.o: Positionable.hh Positionable.cc Position.o
	${C} Positionable.cc -c

Pixel.o: Pixel.hh Pixel.cc View.o Positionable.o
	${C} Pixel.cc -c

Render.o: Render.hh Render.cc
	${C} Render.cc -c

Size.o: Size.hh Size.cc
	${C} Size.cc -c

Loaded.o: Loaded.hh Loaded.cc Position.o Size.o
	${C} Loaded.cc -c

Loader.o: Loader.hh Loader.cc Loaded.o Render.o
	${C} Loader.cc -c

View.o: View.hh View.cc Size.o
	${C} View.cc -c

build: Direction.o Movment.o Converters.o Position.o Color.o RGBColor.o Object.o Visible.o ScreenObject.o Positionable.o Pixel.o Render.o Size.o Loaded.o Loader.o View.o main.o
	${C} Direction.o Movment.o Converters.o Position.o Color.o RGBColor.o Object.o Visible.o ScreenObject.o Positionable.o Pixel.o Render.o Size.o Loaded.o Loader.o View.o main.o -Wall

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