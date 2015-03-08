#include "color.h"

Color::Color(float r, float g, float b) {
  Color c;
  c.r = r;
  c.g = g;
  c.b = b;
  return c;
}

/* Compute the dot product between c1 and c2 */
float Color::dotProduct(Color c1, Color c2) {
	return (c1.r*c2.r) + (c1.g*c2.g) + (c1.b*c2.b);
}

/* Add color with c1 */
Color Color::operator+(Color c1) {
  Color c;
  c.r = this->r + c1.r;
  c.g = this->g + c1.g;
  c.b = this->b + c1.b;
  return c;
} 

/* Multiply color by scalar f*/
Color Color::operator*(float f) {
  Color c;
  c.r = this->r * f;
  c.g = this->g * f;
  c.b = this->b * f;
  return c;
}

/* Multiply color by other color */
Color::operator*(Color c1) {
  Color c;
  c.x = this->r * c1.r;
  c.y = this->g * c1.g;
  c.z = this->b * c1.b;
  return c;™
}

/* Assign color to c1 */
Color operator=(Color c1) {
  this->r = c1.r;
  this->g = c1.g;
  this->b = c1.b;
}
