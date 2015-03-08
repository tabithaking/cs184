#include "math.h"

class Normal {
  float x, y, z;

  Normal normalize(Normal n) {
    Normal  n2;
    float length = sqrt(pow(n.x,2)+pow(n.y,2)+pow(n.z,2));
    n2.x = n.x/length;
    n2.y = n.y/length;
    n2.z = n.z/length;
    return n2;
  }

  Normal(float x, float y, float z) {
    Normal n;
    n.x = x;
    n.y = y;
    n.z = z;
    return normalize(n);
  }

  Normal operator+(Normal n1, Normal n2) {
    Normal n;
    n.x = n1.x + n2.x;
    n.y = n1.y + n2.y;
    n.z = n1.z + n2.z;
    return normalize(n);
  }
}