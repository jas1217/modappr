/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void)
{
	int d, i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5, j6, first_sum, second_sum, total;
	
	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &j1, &j2, &j3, &j4, &j5, &j6);
	
	first_sum = i2 + i4 + i6 + j2 + j4 + j6;
	second_sum = i1 + i3 + i5 + j1 + j3 + j5;
	total = ((first_sum * 3) + second_sum) - 1;
		
	printf("Check digit: %d\n", 9 - (total % 10));
	
	return 0;
}