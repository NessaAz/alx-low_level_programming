#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Changes all lowercase letters of a string to UPPERCASE
 * @str: The string to modify
 * Return: A pointer to the UPPERCASE string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
		}
		i++;
	}

	return (str);
}

