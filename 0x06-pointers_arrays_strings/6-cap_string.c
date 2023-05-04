#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 * Return: A pointer to the capitalized string.
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		/* Capitalize first letter of each word */
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
			str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' ||
			str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
			str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
			str[i - 1] == '{' || str[i - 1] == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}

	return (str);
}
