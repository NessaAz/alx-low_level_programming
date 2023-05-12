#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: Number of command-line arguments
 * @argv: Array of pointers to strings containing the arguments
 * Return: 0 if successful, 1 if an error occurred
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)/*checks if no arguments are passed*/
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j, num = 0;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')/*symbols result to error*/
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (argv[i][j] - '0');
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
