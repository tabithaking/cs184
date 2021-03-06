#include "shape.h"
#include "BRDF.h"
#include "point.h"
#include "vector.h"
#include "normal.h"

Shape::Shape(Point center, float radius, Point a, Point b, Point c, BRDF f, int type) {
  if (type == 1) {
    this->sphere = 1;
    this->f = f;
    this->center = center;
    this->radius = radius;
  } else {
    this->sphere = 0;
    this->f = f;
    this->a = a;
    this->b = b;
    this->c = c;
    Vector ab = Vector(a, b);
    Vector ac = Vector(a, c);
    Vector temp = ab.cross(ac);
    this->n = Normal(temp.x, temp.y, temp.z);
  }
};
