#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 * @cmp: Pointer to the function used to compare values
 * Return: Index of the first element for which the cmp function
 * does not return 0,
 * -1 if no element matches or if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
