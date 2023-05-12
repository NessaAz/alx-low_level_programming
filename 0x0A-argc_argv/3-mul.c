#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies num1 & num2
 * @argc: number of command-line arguments
 * @argv: array of pointers to strings containing the arguments
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	int num1, num2, product;

	/* ensure its only 2 numbers*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	product = num1 * num2;

	printf("%d\n", product);

	return (0);
}
