#include "main.h"
#include <stdio.h>

int main(void)
{
	int n = 17;
	printf("%d\n", is_prime_number(n));

	n = 27;
	printf("%d\n", is_prime_number(n));

	n = 2;
	printf("%d\n", is_prime_number(n));

	n = 1;
	printf("%d\n", is_prime_number(n));

	return (0);
}
