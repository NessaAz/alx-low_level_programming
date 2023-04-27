#include "main.h"

/**
 * _isdigit - function checks for digits
 * @c: parameter
 * Return: either 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

