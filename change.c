/* Calculates bills for change based on amount entered */

#include <stdio.h>

int main(void)
{
	int amount, twenties, tens, fives, ones;
	
	printf("Calculates # of bills to return as change for given amount.\n\n");
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	twenties = amount / 20;
	amount = amount % 20;
	tens = amount / 10;
	amount = amount % 10;
	fives = amount / 5;
	ones = amount % 5;

	printf("$20 bills: %d\n", twenties);
	printf("$10 bills: %d\n", tens);
	printf(" $5 bills: %d\n", fives);
	printf(" $1 bills: %d\n", ones);

	return 0;
}

	

