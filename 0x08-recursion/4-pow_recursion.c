#include "main.h"

/**
 * _pow_recursion - Returns the value of x power y
 * @x: The base number
 * @y: The exponent
 * Return: The result of x raised power y
 * -1 if y < 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}