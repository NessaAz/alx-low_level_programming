#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: Pointer to string to be printed in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int i, len;

	/* Find length of string */
	for (len = 0; s[len] != '\0'; len++)
		;

	/* Print characters in reverse order */
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	/* Print newline character */
	_putchar('\n');
}

