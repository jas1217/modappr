/* Formats product information entered by the user */

#include <stdio.h>

int main(void)
{
	int item_num, month, day, year;
	float unit_price;	

	printf("\nEnter item number: ");
	scanf("%d", &item_num);

	printf("Enter unit price: ");
	scanf("%f", &unit_price);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("\n\nItem\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$ %7.2f\t%d/%d/%d\n\n", item_num, unit_price, month, day, year);

	return 0;
}
