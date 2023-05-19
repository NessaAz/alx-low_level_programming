#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory of an array using malloc
 * @nmemb: number of elements
 * @size: total bytes
 * Return: pointer to allocated array if success, NULL if failed
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	/* Check if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* Allocate memory for the array */
	ptr = malloc(nmemb * size);

	/* Check if malloc failed */
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* Set the memory to zero */
	memset(ptr, 0, nmemb * size);

	/* Return the pointer to the allocated memory */
	return (ptr);
}
