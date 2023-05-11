#include "main.h"
#include <stdio.h>

int main(void)
{
	int n, result;

	n = 5;
	result = is_prime_number(n);
	printf("%d is prime: %d\n", n, result);

	n = 15;
	result = is_prime_number(n);
	printf("%d is prime: %d\n", n, result);

	return (0);
}
