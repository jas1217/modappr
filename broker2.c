/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
	float commission, value, price, rivalc;
	int num;
	
	printf("\n\nEnter the number of shares: ");
	scanf("%d", &num);
	
	printf("\nEnter the price per share ($): ");
	scanf("%f", &price);
	
	value = price * num;
	
	if (value < 2500.00f)
		commission = 30.00f + .017f * value;
	else if (value < 6250.00f)
		commission = 56.00f + .0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + .0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + .0011f * value;
	else
		commission = 255.00f + .0009f * value;
		
	if (commission < 39.00f)
		commission = 39.00f;
		
	if (num < 2000)
		rivalc = 33.00f + (.03f * num);
	else if (num > 2000)
		rivalc = 33.00f + (.02f * num);
	
	printf("\nCommission: $%.2f", commission);
	printf("\nRival commission: $%.2f\n\n", rivalc);
	return 0;
}