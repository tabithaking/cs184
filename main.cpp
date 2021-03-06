#include <string>
#include <iostream>
#include <vector>

#include "point.h"
#include "color.h"
#include "vector.h"
#include "camera.h"
#include "light.h"
#include "matrix.h"
#include "shape.h"
#include "BRDF.h"
#include "tests.h"


#define CAMERA "cam"
#define	SPHERE "sph"
#define TRIANGLE "tri"
#define OBJ_FILE "obj"
#define POINT_LIGHT "ltp"
#define DIRECT_LIGHT "ltd"
#define AMB_LIGHT "lta"
#define MATERIAL "mat"
#define TRANSLATE "xft"
#define ROTATE "xfr"
#define SCALE "xfs"

/* Globals */
Camera camera = Camera();
std::vector<Light> lights;
std::vector<Shape> shapes;


int main(int argc, char const *argv[])
{

	int count;

	count = 0;

	BRDF f = BRDF();
	while (count != argc) {
		if (strcmp(argv[count], "test") == 0) {
			Tests t = Tests();
			t.checkAll();
			exit(0);
		} else if (strcmp(argv[count], CAMERA) == 0) {
			Point eye = Point(std::stof(argv[count + 1]), std::stof(argv[count + 2]), std::stof(argv[count + 3]));
			count += 3;
			Point ll = Point(std::stof(argv[count + 1]), std::stof(argv[count + 2]), std::stof(argv[count + 3]));
			count += 3;
			Point lr = Point(std::stof(argv[count + 1]), std::stof(argv[count + 2]), std::stof(argv[count + 3]));
			count += 3;
			Point ul = Point(std::stof(argv[count + 1]), std::stof(argv[count + 2]), std::stof(argv[count + 3]));
			Point ur = Point(std::stof(argv[count + 1]), std::stof(argv[count + 2]), std::stof(argv[count + 3]));
			count += 3;
			camera = Camera(eye, ll, lr, ul, ur);
		} else if (strcmp(argv[count], SPHERE) == 0) {
			float cx = std::stof(argv[count + 1]);
			float cy = std::stof(argv[count + 2]);
			float cz = std::stof(argv[count + 3]);
			float rad = std::stof(argv[count + 4]);
			Point center = Point(cx, cy, cz);
			
			Shape sphere = Shape(center, rad, Point(), Point(), Point(), f, 1);
			shapes.push_back(sphere);

			count += 4;
		} else if (strcmp(argv[count], TRIANGLE) == 0) {
			Point a = Point(std::stof(argv[count+1]), std::stof(argv[count+2]), std::stof(argv[count+3]));
			Point b = Point(std::stof(argv[count+4]), std::stof(argv[count+5]), std::stof(argv[count+6]));
			Point c = Point(std::stof(argv[count+7]), std::stof(argv[count+8]), std::stof(argv[count+9]));

			Shape tri = Shape(Point(), 0.0, a, b, c, f, 0);
			shapes.push_back(tri);
			
			count += 9;
		} else if (strcmp(argv[count], OBJ_FILE) == 0) {

		} else if (strcmp(argv[count], POINT_LIGHT) == 0) {

			Light pl = Light(std::stof(argv[count + 1]), std::stof(argv[count + 2]), std::stof(argv[count + 3]), std::stof(argv[count + 4]), std::stof(argv[count + 5]), std::stof(argv[count + 6]), std::stof(argv[count + 7]));
			count += 7;

			lights.push_back(pl);

		} else if (strcmp(argv[count], DIRECT_LIGHT) == 0) {
			
			Light dl = Light(std::stof(argv[count + 1]), std::stof(argv[count + 2]), std::stof(argv[count + 3]), std::stof(argv[count + 4]), std::stof(argv[count + 5]), std::stof(argv[count + 6]));
			count += 6;

			lights.push_back(dl);
		} else if (strcmp(argv[count], AMB_LIGHT) == 0) {
			
			Light al = Light(std::stof(argv[count + 1]), std::stof(argv[count + 2]), std::stof(argv[count + 3]));
			count += 3;

			lights.push_back(al);

		} else if (strcmp(argv[count], MATERIAL) == 0) {
			Color ka = Color(std::stof(argv[count+1]), std::stof(argv[count+2]), std::stof(argv[count+3]));
			Color kd = Color(std::stof(argv[count+4]), std::stof(argv[count+5]), std::stof(argv[count+6]));
			Color ks = Color(std::stof(argv[count+7]), std::stof(argv[count+8]), std::stof(argv[count+9]));
			float sp = std::stof(argv[count+10]);
			Color kr = Color(std::stof(argv[count+11]), std::stof(argv[count+12]), std::stof(argv[count+13]));
			f = BRDF(ka, kd, ks, sp, kr);
			count += 13;
		} else if (strcmp(argv[count], TRANSLATE) == 0) {
			Matrix trans = Matrix(std::stof(argv[count + 1]), std::stof(argv[count + 2]), std::stof(argv[count + 3]), 1);
			// PUT THIS MATRIX INTO SOME SORT OF LIST
			count += 3;
		} else if (strcmp(argv[count], ROTATE) == 0) {
			Matrix rot = Matrix(std::stof(argv[count + 1]), std::stof(argv[count + 2]), std::stof(argv[count + 3]), 2);
			// PUT THIS MATRIX INTO SOME SORT OF LIST
			count += 3;
		} else if (strcmp(argv[count], SCALE) == 0) {
			Matrix scale = Matrix(std::stof(argv[count + 1]), std::stof(argv[count + 2]), std::stof(argv[count + 3]), 3);
			// PUT THIS MATRIX INTO SOME SORT OF LIST
			count += 3;
		}
		count += 1;
	}

	return 0;
}