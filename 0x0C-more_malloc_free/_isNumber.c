#include <stdio.h>
#include <stdlib.h>

/**
 * _isNumber - Checks if a string is a number
 * @str: The string to be checked
 * Return: 1 if the string is not a number, 0 otherwise
 */

int _isNumber(const char *str) {
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
