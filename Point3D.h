#ifndef POINT3D_H
#define POINT3D_H

#include "header.h"

class Point3D {
public:
	Point3D();

	Point3D(int x, int y, int z);

	Point3D(const Point3D& p);

	Point3D& operator=(const Point3D& p);

	~Point3D();

	void moveUp(float dy);

	void moveDown(float dy);

	void moveLeft(float dx);

	void moveRight(float dx);

	void moveBackward(float dz);

	void moveForward(float dz);

	int x;
	int y;
	int z;

private:

};

#endif
