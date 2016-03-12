#include "ThreeD.h"

ThreeD::ThreeD(){
	n_edges = 0;
}

ThreeD::ThreeD(vector<Point3D> n, int e[][2], int ne){
	nodes = n;
	n_edges = ne;

	/*for(int i = 0; i < n_edges; i++) {
		edges[i][0] = e[i][0];
		edges[i][1] = e[i][1];
		printf("masuk edge %d | n_edges = %d\n", i, n_edges);
	}

	projection();
	edgesProjection();*/
}

ThreeD::~ThreeD(){
	nodes.clear();
	nodes_proj.clear();
	edges_proj.clear();
}

void ThreeD::projection(){
	int fl = 300;
	nodes_proj.clear();
	int size = nodes.size();
	for(int i = 0; i < size; i++) {
		printf("masuk projection %d\n",i);
		Point q;

		int scale = fl / (fl + nodes[i].z);
		q.x = nodes[i].x * scale;
		q.y = nodes[i].y * scale;

		nodes_proj.push_back(q);
	}
	printf("selesai projection");
}

void ThreeD::edgesProjection(){
	edges_proj.clear();
	for(int i = 0; i < n_edges; i++) {
		printf("masuk edges projection %d\n",i);
		edges_proj.push_back(Line(nodes_proj.at(edges[i][0]), nodes_proj.at(edges[i][1])));
	}
}

void ThreeD::translate(int x, int y, int z) {
	for(int i = 0; i < nodes.size(); i++) {
		nodes[i].x += x;
		nodes[i].y += y;
		nodes[i].z += z;
	}
	projection();
	edgesProjection();
}