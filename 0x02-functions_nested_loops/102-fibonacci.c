#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int fib1 = 1, fib2 = 2, fib3, i;

	printf("%d, %d", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		fib3 = fib1 + fib2;
		printf(", %d", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("\n");
	return (0);
}
