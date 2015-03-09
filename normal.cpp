#include "math.h"
#include "normal.h"

/* Init normal */
Normal::Normal(float x, float y, float z) {
  float length = sqrt(pow(x,2)+pow(y,2)+pow(z,2));
  this->x = x/length;
  this->y = y/length;
  this->z = z/length;
}

/* Add two normals */
Normal Normal::operator+(Normal n1) {
  Normal n(this->x + n1.x, this->y + n1.y, this->z + n1.z);
  return n;
}

/* Subtract two normals */
Normal Normal::operator-(Normal n1) {
  Normal n(this->x - n1.x, this->y - n1.y, this->z - n1.z);
  return n;
}

/* Assign normal */
void Normal::operator=(Normal n) {
  this->x = n.x;
  this->y = n.y;
  this->z = n.z;
}
