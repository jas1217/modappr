/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void)
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, chk, calc, first_sum, second_sum, total;
	
	printf("Enter the twelve digits of a UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &chk);
	
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;
	
	calc = 9 - ((total - 1) % 10);
	
	if (calc == chk)
		printf("\n\nVALID\n\n");
	else
		printf("\n\nNOT VALID\n\n");
	
	return 0;
}
