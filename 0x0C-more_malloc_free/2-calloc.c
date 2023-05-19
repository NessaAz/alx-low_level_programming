#include "main.h"
#include <stdlib.h>


/**
 * _memset - copy char
 * @s: string
 * @inp: input
 * @size: total bytes
 * Return: string,s
 */
char *_memset(char *s, char inp, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		s[i] = inp;
	}

	return (s);
}


/**
 * _calloc - allocates memory of an array using malloc
 * @nmemb: number of elements
 * @sizea: total bytes
 * Return: pointer to allocated array if success, NULL if failed
*/

void *_calloc(unsigned int nmemb, unsigned int sizea)
{
	void *ptr;

	/* Check if nmemb or size is 0 */
	if (nmemb == 0 || sizea == 0)
	{
		return (NULL);
	}

	/* Allocate memory for the array */
	ptr = malloc(nmemb * sizea);

	/* Check if malloc failed */
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* Set the memory to zero */
	_memset(ptr, 0, nmemb * sizea);

	/* Return the pointer to the allocated memory */
	return (ptr);
}
