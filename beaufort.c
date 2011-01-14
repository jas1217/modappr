/* Takes input from user for wind speed and outputs beaufort scale description */

#include <stdio.h>

int main(void)
{
	int speed;
	
	printf("\nEnter wind speed in knots: ");
	scanf("%d", &speed);
	
	if (speed < 1)
		printf("\nCalm\n\n");
	else if (speed <= 3)
		printf("\nLight air\n\n");
	else if (speed <= 27)
		printf("\nBreeze\n\n");
	else if (speed <= 47)
		printf("\nGale\n\n");
	else if (speed <= 63)
		printf("\nStorm\n\n");
	else 
		printf("\nHurricane\n\n");
		
	return 0;
	
}