#include "main.h"
#include <math.h>

/**
 * divisibilityCheck - helper function that checks if a number is divisible
 * by any number less than its square root
 * @n: the number to check
 * @divisor: the current divisor being tested
 * Return: 1 if n is prime, 0 otherwise
 */

int divisibilityCheck(int n, int divisor)
{
	if (divisor >= sqrt(n))
		return (1);
	if (n % divisor == 0)
		return (0);
	return (divisibilityCheck(n, divisor + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (divisibilityCheck(n, 2));
}
