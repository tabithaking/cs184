#include "camera.h"
#include "point.h"

Camera::Camera(Point e, Point llp, Point lrp, Point ulp, Point urp) {
  this->eye = e;
  this->ll = llp;
  this->lr = lrp;
  this->ul = ulp;
  this->ur = urp;
}
Camera::Camera() {
  this->eye = Point();
  this->ll = Point();
  this->lr = Point();
  this->ul = Point();
  this->ur = Point();
}
