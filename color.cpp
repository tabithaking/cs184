struct Color
{
	float r,g,b;
};

float dotProduct(Color c1, Color c2) {
	return (c1.r*c2.r) + (c1.g*c2.g) + (c1.b*c2.b);
}

Color newColor(float r, float g, float b) {
  Color c;
  c.r = r;
  c.g = g;
  c.b = b;
  return c;
}

Color addColor(Color c1, Color c2) {
  Color c;
  c.r = c1.r + c2.r;
  c.g = c1.g + c2.g;
  c.b = c1.b + c2.b;
  return c;
} 
Color multColor_Scalar(Color c1, float f) {
  Color c;
  c.r = c1.r * f;
  c.g = c1.g * f;
  c.b = c1.b * f;
  return c;
}

Color multColor(Color c1, Color c2) {
  Color c;
  c.r = c1.r * c2.r;
  c.g = c1.g * c2.g;
  c.b = c1.b * c2.b;
  return c;
}
