#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: max number of characters to concatenate from s2
 * Return: pointer to newly allocated concatenated string, Null if failed
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = (s1 != NULL) ? strlen(s1) : 0;
	unsigned int len2 = (s2 != NULL) ? strlen(s2) : 0;

	/* adjust n if it's greater than or equal to len of s2 */
	if (n >= len2)
	{
		n = len2;
	}

	/* allocate memory for the concatenated string */
	char *result = malloc((len1 + n + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	/* copy s1 to the result string */
	if (s1 != NULL)
		memcpy(result, s1, len1);

	/* copy n characters from s2 to the result string */
	if (s2 != NULL)
		memcpy(result + len1, s2, n);

	/* add null terminator */
	result[len1 + n] = '\0';

	return (result);
}
