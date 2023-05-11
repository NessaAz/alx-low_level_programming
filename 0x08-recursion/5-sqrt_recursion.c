#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * _sqrt - helper fucntion to compute square root
 * @n: The number to find the square root of
 * @i: integer to pass as square root
 * Return: The square root of n, or -1 if n doesn't have a natural square root.
 */

int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	/* Return -1 for negative numbers */
	if (n < 0)
		return (-1);

	/* Call helper function to compute square root */
	return (_sqrt(n, 0));
}

int _sqrt(int n, int i)
{
	/* Base case: if n is a perfect square, return the square root */
	if (i * i == n)
		return (i);

	/* If i*i is greater than n, n doesn't have a natural square root */
	if (i * i > n)
		return (-1);

	/* Recursive case: try the next integer */
	return (_sqrt(n, i + 1));
}
