#include "vector.h"
#include "color.h"

struct Light
{
	Vector v;
	Color intensity;
	float falloff = 0;
};

Light newAmbientLight(float r, float g, float b) {
	Light l;
	l.v = NULL;
	l.intensity = newColor(r, g, b);
	return l;
}

Light newPointLight(float x, float y, float z, float r, float g, float b, float falloff) {
	Light l;
	l.v = newVector(x, y, z);
	l.intensity = newColor(r, g, b);
	l.falloff = falloff;
	return l;
}

Light newDirectLight(float x, float y, float z, float r, float g, float b) {
	Light l;
	l.v = newVector(0.0 - x, 0.0 - y, 0.0 - z);
	l.intensity = newColor(r, g, b);
	l.falloff = falloff;
	return l;
}
