#ifndef BRDF_H
#define BRDF_H

class BRDF {
  Color ka, kd, ks, kr;
  BRDF(Color a, Color d, Color s, Color r);
};

#endif