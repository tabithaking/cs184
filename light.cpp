#include "vector.h"
#include "color.h"

class Light
{
	Point p;
	Color intensity;
	float falloff = 0;

	Light newAmbientLight(float r, float g, float b) {
		Light l;
		l.v = NULL;
		l.intensity = Color(r, g, b);
		return l;
	}

	Light newPointLight(float x, float y, float z, float r, float g, float b, float falloff) {
		Light l;
		l.v = Vector(x, y, z);
		l.intensity = Color(r, g, b);
		l.falloff = falloff;
		return l;
	}

	Light newDirectLight(float x, float y, float z, float r, float g, float b) {
		Light l;
		l.v = Vector(0.0 - x, 0.0 - y, 0.0 - z);
		l.intensity = Color(r, g, b);
		return l;
	}
};
