#include "main.h"

/**
 * _islower - checks if a character is lowercase if YES it returns 1
 * otherwise returns 0 just like islower() function in ctype.h
 * @c: Is the character to check
 * Return: 0 if successful. _islower - Entry point
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}
