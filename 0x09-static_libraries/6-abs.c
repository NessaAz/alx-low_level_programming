#include "main.h"

/**
 * _abs - computes the absolute value of integer n
 * @n: The integer whose absolute value we need to compute
 *
 * Return: the absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
