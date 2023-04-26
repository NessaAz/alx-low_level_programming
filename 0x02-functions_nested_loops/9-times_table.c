#include "main.h"

/**
 * times_table - function prints the 9 times table starting with 0
 */

void times_table(void)
{
	int i, j, r;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			r = i * j;
			_putchar(',');
			_putchar(' ');

			if (r <= 9)
				_putchar(' ');
			else
				_putchar((r / 10) + '0');

			_putchar((r % 10) + '0');
		}

		_putchar('\n');
	}
}
