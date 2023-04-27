#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int days_in_feb = 28;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		days_in_feb = 29;
	}

	if (month < 1 || month > 12 || day < 1 || day > 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	if (month == 2)
	{
		day += 31;
	}
	else if (month > 2 && month <= 7)
	{
		day += 31 + days_in_feb;
		for (int i = 3; i < month; i++)
		{
			if (i == 4 || i == 6)
			{
				day += 30;
			}
			else
			{
				day += 31;
			}
		}
	}
	else if (month > 7 && month <= 12)
	{
		day += 31 + days_in_feb + 31 * 3 + 30 * 2;
		for (int i = 8; i < month; i++)
		{
			if (i == 9 || i == 11)
			{
				day += 30;
			}
			else
			{
				day += 31;
			}
		}
	}

	if (day > 365 + days_in_feb)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31 - days_in_feb, year);
		return;
	}

	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 365 + days_in_feb - day);
}
