#include "math.h"
#include "normal.h"

/* Normalize normal */
Normal Normal::normalize(Normal n) {
  if (n.x == 0 && n.y == 0 && n.z == 0) {
    return n;
  }
  Normal  n2;
  float length = sqrt(pow(n.x,2)+pow(n.y,2)+pow(n.z,2));
  n2.x = n.x/length;
  n2.y = n.y/length;
  n2.z = n.z/length;
  return n2;
}

/* Init normal */
Normal Normal::Normal(float x, float y, float z) {
  Normal n;
  n.x = x;
  n.y = y;
  n.z = z;
  return normalize(n);
}

/* Add two normals */
Normal Normal::operator+(Normal n1) {
  Normal n;
  n.x = this->x + n1.x;
  n.y = this->y + n1.y;
  n.z = this->z + n1.z;
  return normalize(n);
}

/* Subtract two normals */
Normal Normal::operator-(Normal n1) {
  Normal n;
  n.x = this->x - n1.x;
  n.y = this->y - n1.y;
  n.z = this->z - n1.z;
  return normalize(n);
}

/* Assign normal */
void Normal::operator=(Normal n) {
  this->x = n.x;
  this->y = n.y;
  this->z = n.z;
}
