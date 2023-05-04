#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string to append to
 * @src: Source string to copy from
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i;

	/* Find the length of dest */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append src to dest */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* Add null terminator to the end of the resulting string */
	dest[dest_len + i] = '\0';

	return (dest);
}
