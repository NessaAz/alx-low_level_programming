#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function allocates memory using malloc
 * @b: unsigned integer
 * Return: pointer if success, NULL if failed
*/

void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);
    if (ptr == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(98);
    }
    return (ptr);
}