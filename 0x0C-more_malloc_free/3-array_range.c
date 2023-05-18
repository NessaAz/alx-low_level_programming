#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to array, NULL if failed
*/

int *array_range(int min, int max)
{
	if (min > max)
	{
		return (NULL);
	}

	/* Calculate the number of elements in the array */
	int n = max - min + 1;

	/* Allocate memory for the array */
	int *ptr = malloc(n * sizeof(int));

	/* Check if malloc failed */
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* Populate the array with the values from min to max */
	for (int i = 0; i < n; i++)
	{
		ptr[i] = min + i;
	}

	/* Return the pointer to the allocated memory */
	return (ptr);
}
