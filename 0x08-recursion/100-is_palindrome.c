#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - Checks if a string,s is a palindrome.
 * @s: The string to check.
  * Return: 1 if s is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	/* base case: empty string or single-character string */
	if (len <= 1)
		return (1);

	/* compare first and last character */
	if (s[0] != s[len - 1])
	return (0);

	/* recursive case: check remaining substring */
	s[len - 1] = '\0';  /* replace last character with null */
	return (is_palindrome(s + 1));
}
