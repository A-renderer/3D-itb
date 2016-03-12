all:
	g++ -o main FrameBuffer.cpp Point.cpp Point3D.cpp Line.cpp Polygon.cpp Curve.cpp ThreeD.cpp main.cpp

run:
	./main

clean:
	rm main
