#ifndef BRDF_H
#define BRDF_H

#include "color.h"
class BRDF {
  Color ka, kd, ks, kr;

  public:
    BRDF(Color a, Color d, Color s, Color r);
};

#endif