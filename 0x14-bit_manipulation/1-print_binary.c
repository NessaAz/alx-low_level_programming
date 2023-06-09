#include "main.h"

/*
 * print_binary: prints the binary representation of a number
 * n: The number to be printed in binary representation
 */

void print_binary(unsigned long int n)
{
    unsigned long int bitwise_mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
    int first_zeros = 1;
    
    while (bitwise_mask > 0)
    {
        if ((n & bitwise_mask) != 0)
        {
            first_zeros = 0;
            printf("1");
        }
        else if (!first_zeros)
        {
            printf("0");
        }
        
        bitwise_mask >>= 1;
    }
}
