#include "Point3D.h"

Point3D::Point3D() { // CTOR
	x=0;
	y=0;
	z=0;
}

Point3D::Point3D(int x, int y, int z) { //CTOR PARAM
	this->x=x;
	this->y=y;
	this->z=z;
}

Point3D::Point3D(const Point3D& p) { // CCTOR
	x=p.x;
	y=p.y;
	z=p.z;
}

Point3D& Point3D::operator=(const Point3D& p) { // OPERATOR=
	x=p.x;
	y=p.y;
	z=p.z;

	return *this;
}

Point3D::~Point3D() { // DTOR

}

void Point3D::moveUp(float dy) {
	y-=dy;
}

void Point3D::moveDown(float dy) {
	y+=dy;	
}

void Point3D::moveLeft(float dx) {
	x-=dx;
}

void Point3D::moveRight(float dx) {
	x+=dx;		
}

void Point3D::moveBackward(float dz) {
	z-=dz;
}

void Point3D::moveForward(float dz) {
	z+=dz;		
}