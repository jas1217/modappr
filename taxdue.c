/* Takes taxable income as input and outputs total tax due */

#include <stdio.h>

int main(void)
{
	float income, taxdue;
	
	printf("\nEnter your taxable income: ");
	scanf("%f", &income);
	
	if (income <= 750.00f)
		taxdue = income * .01f;
	else if (income <= 2250.00f)
		taxdue = 7.50f + (.02f * (income - 750.00f));
	else if (income <= 3750.00f)
		taxdue = 37.50f + (.03f * (income - 2250.00f));
	else if (income <= 5250.00f)
		taxdue = 82.50f + (.04f * (income - 3750.00f));
	else if (income <= 7000.00f)
		taxdue = 142.50f + (.05f * (income - 5250.00f));
	else 
		taxdue = 230.00f + (.06f * (income - 7000.00f));
		
	printf("\n\nYou owe $%.2f in income taxes.\n\n", taxdue);
	
	return 0;
}	