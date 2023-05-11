#include "main.h"

/**
 * wildcmp - compares two strings
 * and returns 1 if they can be considered identical
 * if not return 0.
 * @s1: the first string to compare
 * @s2: the second string to compare
 * Return: 1 if s1 and s2 can be considered identical
 * if not 0
 */

int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If s2 contains '*', we can replace it with any string */
	if (*s2 == '*')
	{
		/* If s2 only contains '*', we can consider it identical to s1 */
		if (*(s2 + 1) == '\0')
			return (1);

		/* Otherwise, try to match the '*' with a substring of s1 */
		if (*s1 != '\0' && wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}

	/* If s1 and s2 have the same first character or s2 contains '?',
	 * we can consider them identical and try to match the rest of the strings
	 */
	if (*s1 == *s2 || *s2 == '?')
		return (wildcmp(s1 + 1, s2 + 1));

	/* If none of the above conditions are met, the strings are not identical*/
	return (0);
}
