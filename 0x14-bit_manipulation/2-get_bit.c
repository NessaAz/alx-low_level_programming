#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index in a number
 * @n: The number to extract the bit from
 * @index: index of the bit to retrieve (starting from 0)
 * Return: The value of the bit at the given index, or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitwise_mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);  /*Error: Invalid index*/

	if ((n & bitwise_mask) != 0)
		return (1);/* bit is 1*/

	return (0);  /* bit is 0*/
}
