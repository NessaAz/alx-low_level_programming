#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98;  followed by a new line
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (int i = n; i >= 98; i--)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (int i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			}
		}
	}

	printf("\n");
}
