/* Reverses a two-digit number entered by the user. */

#include <stdio.h>

int main(void)
{
	int digit, d1, d2;
	
	printf("\n\nEnter a two digit number: ");
	scanf("%d", &digit);
	d1 = digit % 10;
	d2 = digit / 10;
	printf("The reversal is: %d%d\n\n", d1, d2);
	
	return 0;
}