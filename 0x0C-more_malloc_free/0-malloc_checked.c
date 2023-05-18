#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function allocates memory using malloc
 * @b: unsigned integer, size of the memory to allocate
 * Return: pointer if success, status 98 if failed
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
