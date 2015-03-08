struct Material
{
	Color ambient, diffuse, specular, reflective;
	float specular_power = 1;
};

Material newMaterial(float ar, float ag, float ab,
										 float dr, float dg, float db.
										 float sr, float sg, float sb, float sp,
										 float rr, float rg, float rb) {
	Material m;
	m.ambient = newColor(ar, ag, ab);
	m.diffuse = newColor(dr, dg, db);
	m.specular = newColor(sr, sg, sb);
	m.specular_power = sp;
	m.reflective = newColor(rr, rg, rb);
	return m;
}