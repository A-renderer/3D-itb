#include <cstring>
#include <termios.h>
#include <fstream>
#include "FrameBuffer.cpp"
#include "assets.h"
#include "ThreeD.h"

using namespace std;

FrameBuffer FB;
bool quit = false;
int key;

int kbhit(void);
vector<Point> matrixToPolygon(int object[][2], int col);

int main() {
	Point3D p0(100,100,100);
	Point3D p1(200,100,100);
	Point3D p2(200,100,200);
	Point3D p3(100,100,200);
	Point3D p4(100,200,100);
	Point3D p5(200,200,100);
	Point3D p6(200,200,200);
	Point3D p7(100,200,200);

	vector<Point3D> n;
	n.push_back(p0);
	n.push_back(p1);
	n.push_back(p2);
	n.push_back(p3);
	n.push_back(p4);
	n.push_back(p5);
	n.push_back(p6);
	n.push_back(p7);

	int e[][2] = {
		{0,1},{1,2},{2,3},{3,0},
		{4,5},{5,6},{6,7},{7,4},
		{0,4},{1,5},{2,6},{3,7}
	};
	
	int ne = sizeof(e)/sizeof(*e);

	ThreeD t(n,e,ne);
	//FB.draw3D(t,255,255,255,0);

	printf("LALALA\n");

	return 0;
}

int kbhit(void) {
	struct termios oldt, newt;
	int ch;
	int oldf;

	tcgetattr(STDIN_FILENO, &oldt);
	newt = oldt;
	newt.c_lflag &= ~(ICANON | ECHO);
	tcsetattr(STDIN_FILENO, TCSANOW, &newt);
	oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
	fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

	ch = getchar();

	tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
	fcntl(STDIN_FILENO, F_SETFL, oldf);

	if(ch != EOF) {
		ungetc(ch, stdin);
		return 1;
	}

	return 0;
}

vector<Point> matrixToPolygon(int object[][2], int col) {
	vector<Point> points;
	points.clear();
	for(int i=0;i<col;i++) {
		points.push_back(Point(object[i][0],object[i][1]));
	}
	return points;
}