/* Determines number of digits in user entered number up to 4 digits */

#include <stdio.h>

int main(void)
{
	int number, numdig;
	
	printf("\n\nEnter a number (up to 4 digits): ");
	scanf("%d", &number);
	
	if (number >= 0 && number <= 9) {
		numdig = 1;
		printf("\n\nThe number %d has %d digits.\n\n", number, numdig);
	}
	else if (number >= 10 && number <= 99) {
		numdig = 2;
		printf("\n\nThe number %d has %d digits.\n\n", number, numdig);
	}
	else if (number >= 100 && number <= 999) {
		numdig = 3;
		printf("\n\nThe number %d has %d digits.\n\n", number, numdig);
	}
	else if (number >= 1000 && number <= 9999) {
		numdig = 4;
		printf("\n\nThe number %d has %d digits.\n\n", number, numdig);
	}
	else {
		printf("\n\nInvalid number!\n\n");
	}
	return 0;		
}