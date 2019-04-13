ShapeDriver1: Shape.o Rectangle.o Circle.o ShapeDriver1.o
	g++ -g -Wall -std=c++11 -o ShapeDriver1 Rectangle.o Circle.o ShapeDriver1.o Shape.o
	
ShapeDriver: Shape.o ShapeDriver.o
	g++ -g -Wall -std=c++11 -o ShapeDriver Shape.o ShapeDriver.o

Shape.o:  Shape.cpp Shape.h
	g++ -g -Wall -std=c++11 -c Shape.cpp

ShapeDriver.o: ShapeDriver.cpp Shape.h
	g++ -g -Wall -std=c++11 -c ShapeDriver.cpp

RectangleDriver:  Rectangle.o RectangleDriver.o
	g++ -g -Wall -std=c++11 -o RectangleDriver Rectangle.o RectangleDriver.o

Rectangle.o:  Rectangle.cpp Rectangle.h
	g++ -g -Wall -std=c++11 -c Rectangle.cpp

RectangleDriver.o: RectangleDriver.cpp Rectangle.h
	g++ -g -Wall -std=c++11 -c RectangleDriver.cpp

CircleDriver:  Circle.o CircleDriver.o
	g++ -g -Wall -std=c++11 -o CircleDriver Circle.o CircleDriver.o

Circle.o:  Circle.cpp Circle.h
	g++ -g -Wall -std=c++11 -c Circle.cpp

CircleDriver.o: CircleDriver.cpp Circle.h
	g++ -g -Wall -std=c++11 -c CircleDriver.cpp

