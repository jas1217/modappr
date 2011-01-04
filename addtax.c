/* Add 5% tax to user entered amount */

#include <stdio.h>

#define TAX_RATE .05f

int main(void)
{
	float amount, total;

	printf("This program adds 5 percent tax to amount entered by user.\n\n");
	printf("Enter an amount: ");
	scanf("%f", &amount);

	total = amount * (1 + TAX_RATE);
	printf("With tax added: $%.2f\n", total);

	return 0;
}
