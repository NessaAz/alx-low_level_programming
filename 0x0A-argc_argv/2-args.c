#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of command-line arguments
 * @argv: array of pointers to strings containing the arguments
 * return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			_putchar(argv[i][j]);
		}
		_putchar('\n');
	}

	return (0);
}
