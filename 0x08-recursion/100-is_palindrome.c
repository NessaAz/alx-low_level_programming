#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to get the length of.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - Checks if a string,s is a palindrome.
 * @s: The string to check.
  * Return: 1 if s is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) -1;

	/* base case: empty string or single-character string */
	if (len <= 0)
		return (1);

	/* compare first and last character */
	if (*s == *(s + len))
	{
		*(s + len) = '\0';
		return (is_palindrome(s + 1));
	}
	return (0);
}
