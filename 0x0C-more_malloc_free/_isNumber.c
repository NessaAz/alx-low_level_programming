#include <stdio.h>
#include <stdlib.h>

/**
 * _isNumber - Checks if a string is a number
 * @str: The string to be checked
 * Return: 1 if the string is not a number, 0 otherwise
 */

int _isNumber(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}
