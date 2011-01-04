/* Reverses a three-digit number entered by the user. */

#include <stdio.h>

int main(void)
{
	int d1, d2, d3;
	
	printf("\n\nEnter a three digit number: ");
	scanf("%1d%1d%1d", &d1, &d2, &d3);

	printf("The reversal is: %d%d%d\n\n", d3, d2, d1);
	
	return 0;
}