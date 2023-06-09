#include "main.h"

/**
 * flip_bits - counts number of bits needed to be flipped to get from n to m
 * @n: The first number
 * @m: The second number
 * Return: count ie number of bits needed to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int xor_nm = n ^ m;
    unsigned int count = 0;
    
    while (xor_nm != 0)
    {
        xor_nm = xor_nm & (xor_nm - 1);
        count++;
    }
    
    return (count);
}
