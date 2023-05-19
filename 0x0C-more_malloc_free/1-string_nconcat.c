#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: max number of characters to concatenate from s2
 * Return: pointer to newly allocated concatenated string, NULL if failed
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
    char *result;

	/* Ceck if either s1 or s2 is null */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s2 and s1 */
	len1 = strlen(s1);
	len2 = strlen(s2);

	/* if n>= length of s2, use the entire s2 */
	if (n >= len2)
	{
		n = len2;
	}
	/* Allocate memory for the concatenated string */
	result = malloc((len1 + n + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}

	/* Copy s1 to the result string */
	memcpy(result, s1, len1);

	/* Copy n characters from s2 to the result string */
	memcpy(result + len1, s2, n);

	/* Add a null terminator to the end of the result string */
	result[len1 + n] = '\0';

	/* Return the pointer to the allocated memory */
	return (result);
}
/*
{
	unsigned int len1 = (s1 != NULL) ? strlen(s1) : 0;
	unsigned int len2 = (s2 != NULL) ? strlen(s2) : 0;

	/* adjust n if it's greater than or equal to len of s2 
	if (n >= len2)
		n = len2;

	/* allocate memory for the concatenated string 
	char *result = malloc((len1 + n + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	/* copy s1 to the result string 
	if (s1 != NULL)
		memcpy(result, s1, len1);

	/* copy n characters from s2 to the result string 
	if (s2 != NULL)
		memcpy(result + len1, s2, n);

	/* add null terminator 
	result[len1 + n] = '\0';

	return (result);
}
*/
