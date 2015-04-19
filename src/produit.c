#include "produit.h"

float produitScalaire(Vecteur v1, Vecteur v2)
{
	return ((v1.x*v2.x) + (v1.y*v2.y) + (v1.z*v2.z));
}

Vecteur produitVectoriel(Vecteur v1, Vecteur v2)
{
	Vecteur v;
	v.x = (v1.y*v2.z) - (v1.z*v2.y);
	v.y = (v1.z*v2.x) - (v1.x*v2.z);
	v.z = (v1.x*v2.y) - (v1.y*v2.x);
	return v;
}