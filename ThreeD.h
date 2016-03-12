#ifndef THREED_H
#define THREED_H

#include "Point.h"
#include "Point3D.h"
#include "Line.h"

class ThreeD {
public:
	ThreeD();
	ThreeD(vector<Point3D> n, int e[][2], int ne);
	~ThreeD();

	void projection();
	void edgesProjection();
	void translate(int x, int y, int z);

	int n_edges;
	vector<Point3D> nodes;
	vector<Point> nodes_proj;
	int edges[][2];
	vector<Line> edges_proj;

private:
	
};

#endif
