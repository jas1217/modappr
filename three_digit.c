/* Reverses a three-digit number entered by the user. */

#include <stdio.h>

int main(void)
{
	int digit, dd, d1, d2, d3;
	
	printf("\n\nEnter a three digit number: ");
	scanf("%d", &digit);
	dd = digit % 100;
	d1 = dd % 10;
	d2 = dd / 10;
	d3 = digit / 100;
	printf("The reversal is: %d%d%d\n\n", d1, d2, d3);
	
	return 0;
}