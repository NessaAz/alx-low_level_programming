#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337(leet).
 * @str: the string to encode.
 * Return: a pointer to the encoded string.
 */

char *leet(char *s)
{
	int i;
	char leet_map[128] = {0};

	/* Build the leet map */
	leet_map['a'] = leet_map['A'] = '4';
	leet_map['e'] = leet_map['E'] = '3';
	leet_map['o'] = leet_map['O'] = '0';
	leet_map['t'] = leet_map['T'] = '7';
	leet_map['l'] = leet_map['L'] = '1';

	/* Encode the string */
	for (i = 0; s[i] != '\0'; i++)
	{
		if (leet_map[s[i]])
		{
			/* Replace the character with its leet counterpart */
			s[i] = leet_map[s[i]];
		}
	}

	return (s);
}
