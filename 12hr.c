/* Convert user entered 24 hour time into 12 hour format */

#include <stdio.h>

int main(void)
{
	int hour, minute, ampm;
	
	printf("\n\nEnter a time in 24 hour format: ");
	scanf("%d:%d", &hour, &minute);
	
	if (hour == 12)
	{
		printf("\n\nEquivalent 12-hour time: %d:%d PM\n\n", hour, minute);
	}
	else if ( hour >= 13 && hour <= 23) 
	{
		hour = hour - 12;
		printf("\n\nEquivalent 12-hour time: %d:%d PM\n\n", hour, minute);
	}
	else if (hour == 0){
		hour = 12;
		printf("\n\nEquivalent 12-hour time: %d:%d AM\n\n", hour, minute);
	}
	else if (hour >= 1 && hour <= 11)
	{
		printf("\n\nEquivalent 12-hour time: %d:%d AM\n\n", hour, minute);
	}
	else
	{
	printf("\n\nInvalid time!\n\n");
}
}