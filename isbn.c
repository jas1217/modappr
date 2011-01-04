/* Breaks down a user entered ISBN number */

#include <stdio.h>

int main(void)
{
	int gs1, group, pub_code, item_num, chk_digit;

	printf("\nEnter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &group, &pub_code, &item_num, &chk_digit);
	
	printf("\nGS1 prefix: %d\n", gs1);
	printf("Group identifier: %d\n", group);
	printf("Publisher code: %d\n", pub_code);
	printf("Item number: %d\n", item_num);
	printf("Check digit: %d\n\n", chk_digit);

	return 0;
}
	
