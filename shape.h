#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"
#include "BRDF.h"
#include "normal.h"

class Shape {
  int sphere; // 1 if the shape is a sphere, 0 if shape is a triangle
  BRDF f;
  Point center;
  float radius;
  Point a, b, c; // Points for if a triangle
  Normal n;

public: 
  Shape(Point center, float radius, Point a, Point b, Point c, BRDF f, int type);
  // Shape Sphere(Point center, float radius, BRDF f);
  // Shape Triangle(Point a, Point b, Point c, BRDF f);

};

#endif
