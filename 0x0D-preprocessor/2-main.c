#include <stdio.h>

/**
 * main - program's entry point, prints the name of
 * file it was compiled from
 * Return: 0, Success
*/
int main(void)
{
    printf("%s\n", __FILE__);
    return (0);
}
