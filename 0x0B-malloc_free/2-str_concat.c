#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string, Null if failed
*/

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, size;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	size = len1 + len2 + 1;

	concatenated = malloc(sizeof(char) * size);

	if (concatenated == NULL)
		return (NULL);

	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
