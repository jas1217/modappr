/* takes input of a date in the form mm/dd/yyyy and prints it out in the form
	yyyymmdd */

#include <stdio.h>

int main(void)
{
	int month, day, year;

	printf("Enter date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("\nYou entered %d%d%d.\n\n", year, month, day);
	
	return 0;
}
