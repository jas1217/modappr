/* Calculates volume of a sphere from a user supplied radius */

#include <stdio.h>

#define PI 3.14159f

int main(void)
{
	float volume, r;

	printf("This program calculates the area of a sphere given the radius.\n\n");
	printf("Enter the radius (meters): ");
	scanf("%f", &r);
	
	volume = (4.0f / 3.0f) * PI * (r * r * r);
	printf("Volume (cubic meters): %.2f\n", volume);

	return 0;
}

	
