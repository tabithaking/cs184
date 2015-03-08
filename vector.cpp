#include "math.h"

struct Vector
{
	float x, y, z;
};

/* Returns a new Vector */
Vector newVector(float x, float y, float z) {
	Vector v;
	v.x = x;
	v.y	= y;
	v.z = z;
	return v;
}

/* Returns the vector length of V */
float vectorLen(Vector v) {
	return sqrt(pow(v.x,2)+pow(v.y,2)+pow(v.z,2));
}

/* Normalize vector V */
void normalize(Vector *v) {
	float v_len = vectorLen(v);
	v->x = v->x/v_len;
	v->y = v->y/v_len;
	v->z = v->z/v_len;
}

/* Multiply V1 by scalar float F */
void multVector_Scalar(Vector *v, float f) {
	v->x = v->x * f;
	v->y = v->y * f;
	v->z = v->z * f;
}

/* Multiply V1 and V2, returning V */
Vector multVector(Vector v1, Vector v2) {
	Vector v; 
	v.x = v1.x * v2.x;
	v.y = v1.y * v2.y;
	v.z = v1.z * v2.z;
	return v;
}

/* Add vector V1 and V2, returning V */
Vector addVector(Vector v1, Vector v2) {
	Vector v; 
	v.x = v1.x + v2.x;
	v.y = v1.y + v2.y;
	v.z = v1.z + v2.z;
	return v;
}

/* Subtract V2 from V1, returning V */
Vector subVector(Vector v1, Vector v2) {
	Vector v; 
	v.x = v1.x - v2.x;
	v.y = v1.y - v2.y;
	v.z = v1.z - v2.z;
	return v;
}

/* Returns the dot product of V1 and V2 */
float dotProduct(Vector v1, Vector v2) {
	return v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;
}

