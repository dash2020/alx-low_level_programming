#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date
* and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int dayOfYear;

	if (year % 4 == 0)
	{
		if (month >= 2 && day >= 60)
		{
			day++;
		}

		dayOfYear = convert_day(month, day);

		printf("Day of the year: %d\n", dayOfYear);
		printf("Remaining days: %d\n", 366 - dayOfYear);
	}
	else
	{
		dayOfYear = convert_day(month, day);
		printf("Day of the year: %d\n", dayOfYear);
		printf("Remaining days: %d\n", 365 - dayOfYear);
	}
}
