#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 * Return: The integer value of the string
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* Skip any leading white space */
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' ||
			s[i] == '\f' || s[i] == '\r' || s[i] == '\v')
	{
		i++;
	}

	/* Handle optional sign */
	if (s[i] == '-' || s[i] == '+')
	{
		sign = (s[i] == '-') ? -1 : 1;
		i++;
	}

	/* Convert the string to an integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}

