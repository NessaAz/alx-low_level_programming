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
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
