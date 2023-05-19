#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes of the new memory block
 * Return: pointer to reallocated mem block, NULL if failed
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	void *new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	unsigned char *src = (unsigned char *)ptr;
	unsigned char *dest = (unsigned char *)new_ptr;
	unsigned int i;

	for (i = 0; i < old_size && i < new_size; i++)
		dest[i] = src[i];
	free(ptr);

	return (new_ptr);
}
