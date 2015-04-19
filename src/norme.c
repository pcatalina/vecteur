#include "norme.h"

float square(float x)
{
	return (x*x);
}
float norme(Vecteur v)
{
	return (sqrt(square(v.x) + square(v.y) + square(v.z)));
}