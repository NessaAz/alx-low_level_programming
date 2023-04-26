#include "main.h"
#include <stdio.h>

/**
 * print_times_table - This program defines a function
 * which prints out a multiplication table of
 * integers from 0 to n inclusive, where
 * @n: is the input parameter to the function.
 * The function only prints the table if n is between 0 and 15 inclusive.
 * If n is outside of this range, the function returns without 
 * printing anything
 */

void print_times_table(int n)
{
	int row;
	int column;
	int product;

	if (n < 0 || n >= 15)
		return;
	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			product = (row * column);
			if (column == 0)
				_putchar('0' + product);
			else
			{
				_putchar(',');
				_putchar(' ');
				if (product <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				}
				else if (product > 9 && product < 100)
				{
					_putchar(' ');
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
				else if (product >= 100)
				{
					_putchar('0' + (product / 100));
					_putchar('0' + ((product / 10) % 10));
					_putchar('0' + (product % 10));
				}
			}
		}
		_putchar('\n');
	}
}
