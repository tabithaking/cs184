#include <string>

#include "point.h"
#include "color.h"
#include "vector.h"
#include "camera.h"
#include "light.h"


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

int main(int argc, char const *argv[])
{
	int count;

	count = 0;
	//TEMPORARILY COMMENT TO AVOID MAKE ERRORS
	while (count != argc) {
		if (strcmp(argv[count], CAMERA) == 0) {
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
			// NEED TO TALK ABOUT SHAPE STUFF
		} else if (strcmp(argv[count], TRIANGLE) == 0) {
			// NEED TO TALK ABOUT SHAPE STUFF
		} else if (strcmp(argv[count], OBJ_FILE) == 0) {

		} else if (strcmp(argv[count], POINT_LIGHT) == 0) {
			// LIGHT STUFF DOESN'T COMPILE

			// Light pl = newPointLight(std::stof(argv[count + 1]), std::stof(argv[count + 2]), std::stof(argv[count + 3]), std::stof(argv[count + 4]), std::stof(argv[count + 5]), std::stof(argv[count + 6]), std::stof(argv[count + 7]));
			// count += 7;

			// PUT LIGHT INTO LINKED LIST? DIFFERENT LIST FOR DIFFERENT LIGHTS?
		} else if (strcmp(argv[count], DIRECT_LIGHT) == 0) {
			// LIGHT STUFF DOESN'T COMPILE
			
			// Light dl = newDirectLight(std::stof(argv[count + 1]), std::stof(argv[count + 2]), std::stof(argv[count + 3]), std::stof(argv[count + 4]), std::stof(argv[count + 5]), std::stof(argv[count + 6]));
			// count += 6;

			// PUT LIGHT INTO LINKED LIST? DIFFERENT LIST FOR DIFFERENT LIGHTS?
		} else if (strcmp(argv[count], AMB_LIGHT) == 0) {
			// LIGHT STUFF DOESN'T COMPILE
			
			// Light al = newAmbientLight(std::stof(argv[count + 1]), std::stof(argv[count + 2]), std::stof(argv[count + 3]));
			// count += 3;

			// PUT LIGHT INTO LINKED LIST? DIFFERENT LIST FOR DIFFERENT LIGHTS?
		} else if (strcmp(argv[count], MATERIAL) == 0) {
			
		} else if (strcmp(argv[count], TRANSLATE) == 0) {
			
		} else if (strcmp(argv[count], ROTATE) == 0) {
			
		} else if (strcmp(argv[count], SCALE) == 0) {
			
		}
		count += 1;
	}

	return 0;
}