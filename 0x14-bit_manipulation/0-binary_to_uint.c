#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string containing a binary number
 * Return: converted number, 0 if null string or invalid character
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
    uint = 0;
	int i = 0;

	if (b == NULL)
		return (0);/*null string returns 0*/

	while (b[i] != '\0')/*iterate through each character in the string*/
	{
		if (b[i] == '0' || b[i] == '1')/*check if character is 0 or 1*/
		{
			/**
			 * convert the character to its corresponding integer value (0 or 1)
			 * update the result by shifting the bits to the left
			 */
			uint = uint * 2 + (b[i] - '0');
			i++;
		}
		else
		{
			/* invalid character returns 0*/
			return (0);
		}
	}
	return (uint);
}
