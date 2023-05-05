#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i, j;
	char rot13_map[256] = {0};

	/* Build the rot13 map */
	for (i = 'a'; i <= 'z'; i++)
	{
		rot13_map[i] = i + 13;
		if (rot13_map[i] > 'z')
			rot13_map[i] -= 26;
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		rot13_map[i] = i + 13;
		if (rot13_map[i] > 'Z')
			rot13_map[i] -= 26;
	}

	/* Encode the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (rot13_map[str[i]] != 0)
		{
			/* Replace the character with its rot13 counterpart */
			str[i] = rot13_map[str[i]];
		}
	}

	return (str);
}
