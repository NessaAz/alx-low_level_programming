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
	char *src = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *dest = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			if (str[i] == src[j])
			{
				str[i] = dest[j];
				break;
			}
		}
	}

	return (str);
}
