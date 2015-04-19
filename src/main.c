#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define CUBE(x) ((x)*(x)*(x))
#define VOLUME_SPHERE(r) ((4 * PI * CUBE(r)) / 3)

int main(int argc, char** argv)
{
	int i;
	float sumSpheres = 0;
	for (i = 1; i < argc; i++)
	{
		float r = atof(argv[i]);
		sumSpheres += VOLUME_SPHERE(r);
	}

	printf("Volume total : %f", sumSpheres);
	getchar();
	return 0;
}


