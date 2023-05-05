#include <stdio.h>
#include <stdlib.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number to add
 * @n2: The second number to add
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 * Return: Pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int digit1, digit2, sum;
	int i = 0, j = 0, k = 0;
	int len1 = 0, len2 = 0;

	/* Find the lengths of n1 and n2 */
	while (n1[len1] != '\0') len1++
	;
	while (n2[len2] != '\0') len2++
	;

	/* If the result is too large to fit in r, return 0 */
	if (len1 + len2 + 1 > size_r) 
	return (0);

	/* Add the digits of n1 and n2, starting from the rightmost digit */
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--) 
	{
		digit1 = (i >= 0) ? n1[i] - '0' : 0;
		digit2 = (j >= 0) ? n2[j] - '0' : 0;
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[k++] = (sum % 10) + '0';
	}

	/* If there is a carry at the end, add it to the result */
	if (carry > 0) r[k++] = carry + '0'
	;

	/* Reverse the order of the digits in the result */
	for (i = 0, j = k - 1; i < j; i++, j--) 
	{
		char tmp = r[i];
		r[i] = r[j];
		r[j] = tmp;
	}

	/* Add the terminating null character to the end of the result */
	r[k] = '\0';

	return (r);
}
