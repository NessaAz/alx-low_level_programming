#include "main.h"

/*
 * Function: print_numbers
 * print_numbers - prints the numbers 0 to 9 followed by a new line using _putchar function
 *
 *  returns: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}

