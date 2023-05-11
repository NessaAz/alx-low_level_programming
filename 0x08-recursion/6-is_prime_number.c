#include "main.h"
#include <math.h>

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int i;

	if (n < 2)
		return (0);

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
