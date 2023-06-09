#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index in a number
 * @n: Pointer to the number where the bit needs to be cleared
 * @index: The index of the bit to clear (starting from 0)
 * Return: 1 if successful, otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		/* Error: Invalid index or null pointer*/
		return (-1);

	unsigned long int bitwise_mask;
	bitwise_mask = 1UL << index;
	*n = *n & (~bitwise_mask);

	return (1);/* Bit set to 0 */
}
