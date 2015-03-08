#ifndef VECTOR_H
#define VECTOR_H

#include "point.h"
class Vector {
public:
	float x;
	float y;
	float z;

public:
	Vector() {};
	Vector(float a, float b, float c);
	Vector(Point a, Point b);

	/* Returns the vector length of V */
	float getLength();

	/* Normalize vector V */
	void normalize();

	/* Multiply V1 by scalar float F */
	Vector multVector_Scalar(Vector v1, float f);

	/* Multiply V1 and V2, returning V */
	Vector multVector(Vector v1, Vector v2);

	/* Add vector V1 and V2, returning V */
	Vector addVector(Vector v1, Vector v2);

	/* Subtract V2 from V1, returning V */
	Vector subVector(Vector v1, Vector v2);

	/* Returns the dot product of V1 and V2 */
	float dotProduct(Vector v1, Vector v2);
};

#endif