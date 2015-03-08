struct Eye
{
	float x, y, z;
};

struct ViewBox
{
	Vector ll, lr, ul, ur;
};

struct Camera
{
	Eye e;
	ViewBox vb;
};