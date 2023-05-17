#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program & new line
 * @argc: number of command-line arguments
 * @argv: array of pointers to strings containing the arguments
 * Return: Always 0
 */

int main(int argc, char ***argv)
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
