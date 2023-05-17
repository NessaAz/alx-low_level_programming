#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of command-line arguments
 * @argv: array of pointers to strings containing the arguments
 * Return: 0 on success, non-zero on failure
 */


int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
