#include <stdio.h>
#include <stdlib.h>

/**
 * main - program's entry point
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int num_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *main_ptr = (unsigned char *)main;
	/* Print the opcodes of the main function */
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", main_ptr[i]);
	}
	printf("\n");

	return (0);
}
