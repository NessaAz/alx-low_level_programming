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
 * palindromeCheck - checks if a string is a palindrome recursively
 * @s: the string to check
 * @len: the length of s minus 1
 * @i: the current index
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int palindromeCheck(char *s, int len, int i)
{
	if (i >= len)
		return (1);
	if (s[i] != s[len])
		return (0);
	return (palindromeCheck(s, len - 1, i + 1));
}

/**
 * is_palindrome - Checks if a string,s is a palindrome.
 * @s: The string to check.
  * Return: 1 if s is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (palindromeCheck(s, len - 1, 0));
}
