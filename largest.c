/*  Returns the largest and the smallest of 4 integers entered by user */

#include <stdio.h>

int main(void)
{
	int i1, i2, i3, i4, lg, sm, lg1, lg2, sm1, sm2;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &i1, &i2, &i3, &i4);


	if (i1 < i2) {
		sm1 = i1;
		lg1 = i2;
	} else {
		sm1 = i2;
		lg1 = i1;
	}

	if (i3 < i4) {
		sm2 = i3;
		lg2 = i4;
	} else {
		sm2 = i4;
		lg2 = i3;
	}

	if (sm1 < sm2)
		sm = sm1;
	else
		sm = sm2;

	if (lg1 < lg2)
		lg = lg2;
	else
		lg = lg1;

	printf("\nLargest is: %d\n", lg);
	printf("\nSmallest is: %d\n", sm);

	return 0;
}
