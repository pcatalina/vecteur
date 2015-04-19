#include <stdio.h>
#include "type.h"
#include "norme.h"
#include "produit.h"

void checkPrograms()
{
	Vecteur v1;
	Vecteur v2;
	printf("Enter 1st vector:\n");
	scanf("%f %f %f", &v1.x, &v1.y, &v1.z);
	printf("Enter 2nd vector:\n");
	scanf("%f %f %f", &v2.x, &v2.y, &v2.z);
	float n1 = norme(v1);
	float n2 = norme(v2);
	float pS = produitScalaire(v1, v2);
	Vecteur pV = produitVectoriel(v1, v2);
	printf("Norme 1ft vector : %f\n", n1);
	printf("Norme 2nd vector : %f\n", n2);
	printf("Produit scalaire : %f\n", pS);
	printf("Produit vectoriel: %f %f %f", pV.x, pV.y, pV.z);
}