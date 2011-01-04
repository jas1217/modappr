/* Converts user entered phone number from (xxx) xxx-xxxx format to
	xxx.xxx.xxxx format */

#include <stdio.h>

int main(void)
{
	int ac, pre, num;

	printf("\nEnter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &ac, &pre, &num);

	printf("\nYou entered %d.%d.%d\n\n", ac, pre, num);

	return 0;
}
