#include "WindowAddon.h"

int main(int argc, char **argv) {
	Window w(201, 201);

	Point2D points[4];
	points[0] = Point2D(90, 80);
	points[1] = Point2D(110, 80);
	points[2] = Point2D(120, 130);
	points[3] = Point2D(80, 130);

	w.polygon(points, 4, LINE_JOIN_NONE); //miter_limit is 0 by default. Using w drawing parameters (in this case, black drawing color and thickness 1.0)

	w.waitWindowCloseButton();
	
	return 0;
}