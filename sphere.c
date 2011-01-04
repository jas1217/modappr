/* Computes volume of a sphere */

#include <stdio.h>

int main(void)
{
	float volume, pi, r;

	r = 10;
	pi = 3.14159;
	volume = (4.0f / 3.0f) * pi * (r * r * r);
	
	printf("Find the colume of a sphere with a radius of 10 meters\n\n");
	printf("Volume (cubic meters): %.2f\n", volume);
	
	return 0;
}
