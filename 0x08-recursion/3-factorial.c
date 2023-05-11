#include "main.h"

/**
 * factorial - returns the factorial of a given number n
 * @n: the number to be 'factorialed'
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} 
	else if (n == 0)
	{
		return (1);
	} 
	else
	{
		return (n * factorial(n-1));
	}
}
