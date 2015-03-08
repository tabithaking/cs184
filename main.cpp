

#include "color.h"
#include "vector.h"


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




int main(int argc, char const *argv[])
{

	int count;

	count = 0;
	//TEMPORARILY COMMENTED TO AVOID MAKE ERRORS
	while (count != argc) {
		switch(argv[count]) {
			case CAMERA:
				break;
			case SPHERE:
			case TRIANGLE:
			case OBJ_FILE:
			case POINT_LIGHT:
			case DIRECT_LIGHT:
			case AMB_LIGHT:
			case MATERIAL:
			default:
				exit(0); 
		}

		count += 1;
	}

	return 0;
}