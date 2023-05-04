#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings up to n bytes
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to concatenate from src
 * Return: Pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Find length of dest string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append src string to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* Add null-terminator to dest */
	dest[dest_len + i] = '\0';

	return (dest);
}
