#ifndef NORMAL_H
#define NORMAL_H

class Normal {
  float x, y, z;
  Normal normalize(Normal n);
  Normal(float x, float y, float z);
  Normal operator+(Normal n1, Normal n2);
  Normal operator-(Normal n1, Normal n2);
};

#endif
