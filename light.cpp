#include "point.h"
#include "vector.h"
#include "color.h"
#include "light.h"

Light Light::newAmbientLight(float r, float g, float b) {
	Light l;
	l.intensity = Color(r, g, b);
	l.falloff = 0.0;
	return l;
}

Light Light::newPointLight(float x, float y, float z, float r, float g, float b, float falloff) {
	Light l;
	l.p = Point(x, y, z);
	l.intensity = Color(r, g, b);
	l.falloff = falloff;
	return l;
}

Light Light::newDirectLight(float x, float y, float z, float r, float g, float b) {
	Light l;
	l.p = Point(0.0 - x, 0.0 - y, 0.0 - z);
	l.intensity = Color(r, g, b);
	l.falloff = 0.0;
	return l;
}
