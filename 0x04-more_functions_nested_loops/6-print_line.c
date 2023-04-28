#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: number of times to print the character '_'
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (int i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}

