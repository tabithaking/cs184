#include "BRDF.h"

BRDF::BRDF(Color a, Color d, Color s, Color r) {
  ka = a;
  kd = d;
  ks = s;
  kr = r;
}