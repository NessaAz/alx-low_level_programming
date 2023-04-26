#include "main.h"
#include <stdio.h>

/**
 * This program calculates the sum of all the multiples of 3 or 5
 * below 1024 (excluded)
 */

int main()
{
	int sum = 0;

	for (int i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
