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

	/* Returns the dot product of V1 and V2 */
	float dotProduct(Vector v1, Vector v2);

	/* Multiply vector by scalar float F */
	Vector operator*(float f);

	/* Multiply vector by v1 returning V */
	Vector operator*(Vector v1);

	/* Add vector and V1, returning V */
	Vector operator+(Vector v1);

	/* Subtract v1 from vector, returning V */
	Vector operator-(Vector v1);

	/* Assigns vector to v */
	void operator=(Vector v);
	
};

#endif