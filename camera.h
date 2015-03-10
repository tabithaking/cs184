#ifndef CAMERA_H
#define CAMERA_H

#include "point.h"

class Camera {
  Point eye, ll, lr, ul, ur;

public:
  Camera(Point e, Point llp, Point lrp, Point ulp, Point urp);
  Camera();
};

#endif