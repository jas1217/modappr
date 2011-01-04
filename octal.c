/* Takes integer input from user and displays in octal format. */

#include <stdio.h>

int main(void)
{
	int number, q1, q2, q3, q4, q5, r1, r2, r3, r4, r5;
	
	printf("\n\nEnter a number between 0 and 32767: ");
	scanf("%d", &number);
	
	q1 = number / 8;
	r1 = number % 8;
	// printf("\nR1 = %d", r1);
	
	q2 = q1 / 8;
	r2 = q1 % 8;
	// printf("\nR2 = %d", r2);
	
	q3 = q2 / 8;
	r3 = q2 % 8;
	// printf("\nR3 = %d", r3);
	
	q4 = q3 / 8;
	r4 = q3 % 8;
	// printf("\nR4 = %d", r4);
	
	q5 = q4 / 8;
	r5 = q4 % 8;
	// printf("\nR5 = %d", r5);

	printf("In octal your number is %d%d%d%d%d\n\n", r5, r4, r3, r2, r1);
	return 0;
	
}

	