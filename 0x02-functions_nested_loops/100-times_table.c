#include "main.h"
#include <stdio.h>

/**
 * print_times_table - This program defines a function
 * which prints out a multiplication table of
 * integers from 0 to n inclusive, where 
 * @n: is the input parameter to the function.
 * The function only prints the table if n is between 0 and 15 inclusive. 
 * If n is outside of this range, the function returns without printing anything
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			printf("%4d", i * j);
		}

		printf("\n");
	}
}
