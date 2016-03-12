#include "Point.h"

Point::Point() { // CTOR
	x=0;
	y=0;
	z=0;
}

Point::Point(int x, int y, int z) { //CTOR PARAM
	this->x=x;
	this->y=y;
	this->z=z;
}

Point::Point(const Point& p) { // CCTOR
	x=p.x;
	y=p.y;
	z=p.z;
}

Point& Point::operator=(const Point& p) { // OPERATOR=
	x=p.x;
	y=p.y;
	z=p.z;

	return *this;
}

Point::~Point() { // DTOR

}

void Point::moveUp(float dy) {
	y-=dy;
}

void Point::moveDown(float dy) {
	y+=dy;	
}

void Point::moveLeft(float dx) {
	x-=dx;
}

void Point::moveRight(float dx) {
	x+=dx;		
}

void Point::moveBackward(float dz) {
	z-=dz;
}

void Point::moveForward(float dz) {
	z+=dz;		
}