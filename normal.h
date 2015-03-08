#ifndef NORMAL_H
#define NORMAL_H

class Normal {
  float x, y, z;

  /* Normalize normal */
  Normal normalize(Normal n);

  /* Init normal */
  Normal(float x, float y, float z);

  /* Add two normals */
  Normal operator+(Normal n1);

  /* Subtract two normals */
  Normal operator-(Normal n1);

  /* Assign normal */
  void operator=(normal n);
};

#endif
