#ifndef LIGHT_H
#define LIGHT_H


class Light {
  Point p;
  Color intensity;
  float falloff = 0;

  Light newAmbientLight(float r, float g, float b);
  Light newPointLight(float x, float y, float z, float r, float g, float b, float falloff);
  Light newDirectLight(float x, float y, float z, float r, float g, float b);

};

#endif