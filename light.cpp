#include "vector.h"
#include "color.h"

Light Light::newAmbientLight(float r, float g, float b) {
	Light l;
	l.p = NULL;
	l.intensity = Color(r, g, b);
	return l;
}

Light Light::newPointLight(float x, float y, float z, float r, float g, float b, float falloff) {
	Light l;
	l.p = Vector(x, y, z);
	l.intensity = Color(r, g, b);
	l.falloff = falloff;
	return l;
}

Light Light::newDirectLight(float x, float y, float z, float r, float g, float b) {
	Light l;
	l.p = Vector(0.0 - x, 0.0 - y, 0.0 - z);
	l.intensity = Color(r, g, b);
	return l;
}
