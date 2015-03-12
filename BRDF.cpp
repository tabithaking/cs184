#include "BRDF.h"
#include "color.h"

BRDF::BRDF(Color a, Color d, Color s, Color r) : ka(a), kd(d), ks(s), kr(r) {}

BRDF::BRDF() : ka(Color()), kd(Color()), ks(Color()), kr(Color()) {}