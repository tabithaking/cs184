#include "math.h"

class Vector {
	public:
		float x, y, z;

	public:
		Vector(float a, float b, float c) {
			x = a;
			y = b;
			z = c;
		}

		Vector(Point a, Point b) {
			x = a.x - b.x;
			y = a.y - b.y;
			z = a.z - b.z;
		}

		/* Returns the vector length of V */
		float getLength() {
			return sqrt(pow(x,2)+pow(y,2)+pow(z,2));
		}

		/* Normalize vector V */
		void normalize() {
			float v_len = vectorLen(v);
			x = x/v_len;
			y = y/v_len;
			z = z/v_len;
		}

		/* Multiply V1 by scalar float F */
		void multVector_Scalar(Vector v1, float f) {
			Vector v (0.0, 0.0, 0.0);
			v.x = v1.x * f;
			v.y = v1.y * f;
			v.z = v1.z * f;
			return v;
		}

		/* Multiply V1 and V2, returning V */
		Vector multVector(Vector v1, Vector v2) {
			Vector v (0.0, 0.0, 0.0);
			x = v1.x * v2.x;
			y = v1.y * v2.y;
			z = v1.z * v2.z;
			return v;
		}

		/* Add vector V1 and V2, returning V */
		Vector addVector(Vector v1, Vector v2) {
			Vector v (0.0, 0.0, 0.0); 
			v.x = v1.x + v2.x;
			v.y = v1.y + v2.y;
			v.z = v1.z + v2.z;
			return v;
		}

		/* Subtract V2 from V1, returning V */
		Vector subVector(Vector v1, Vector v2) {
			Vector v (0,0, 0.0, 0.0); 
			v.x = v1.x - v2.x;
			v.y = v1.y - v2.y;
			v.z = v1.z - v2.z;
			return v;
		}

		/* Returns the dot product of V1 and V2 */
		float dotProduct(Vector v1, Vector v2) {
			return v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;
		}

	};