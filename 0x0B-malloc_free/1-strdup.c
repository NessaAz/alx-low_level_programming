#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - creates a duplicate of a string
 * @str: the string to duplicate
 * Return: a pointer to the duplicated string, NULL if failed
*/

char *_strdup(char *str)
{
	char *duplicate;
	size_t length;

	if (str == NULL)
		return (NULL);

	length = strlen(str) + 1;
	duplicate = malloc(length * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	return (strcpy(duplicate, str));
}
