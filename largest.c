/*  Returns the largest and the smallest of 4 integers entered by user */

#include <stdio.h>

int main(void)
{
	int i1, i2, i3, i4, lg, sm;
	
	printf("Enter four integers: ");
	scanf("%d %d %d %d", &i1, &i2, &i3, &i4);
	
	sm = i1;
	if (i2 < sm)
		sm = i2;
	if (i3 < sm)
		sm = i3;
	if (i4 < sm)
		sm = i4;
}