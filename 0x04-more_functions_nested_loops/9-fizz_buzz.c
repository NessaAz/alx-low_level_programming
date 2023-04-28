#include "main.h"
#include <stdio.h>

/**
 * fizzbuzz - prints numbers from 1 to 100
 * and substitutes multiples of 3 with Fizz,
 * multiples of 5 with Buzz
 * and multiples of both with FizzBuzz.
 *
 * Return: void
 */

#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
		printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	printf("\n");

	return (0);
}

