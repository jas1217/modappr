/* Program to evaluate polynomial for user provided 'x' */
/* 3x^5 + 2x^4 - 5x^3 - x^2 +7x - 6 */

#include <stdio.h>

int main(void)
{
	int x;
	float y;

	printf("This program calculates the following polynomial given a value for x.\n");
	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n\n");
	printf("Enter value for x: ");
	scanf("%d", &x);

	y = (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6;

	printf("The answer is: %.2f\n", y);

	return 0;
}



	

