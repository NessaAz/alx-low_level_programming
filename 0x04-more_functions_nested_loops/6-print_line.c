#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: number of times to print the character '_'
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 1;

	while (i <=  n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
