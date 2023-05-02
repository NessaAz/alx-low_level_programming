#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: A pointer to the string to reverse.
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	if (s == NULL)
		return;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

