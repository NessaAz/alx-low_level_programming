#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random passwords for 101-crackme program
 * Return: Always 0
 */

int main(void)
{
	char password[7];
	int i;

	srand(time(NULL));

	password[0] = rand() % 26 + 'A';  // Generate a random capital letter
	password[1] = rand() % 26 + 'a';  // Generate a random lowercase letter
	password[2] = rand() % 10 + '0';  // Generate a random digit

	for (i = 3; i < 6; i++)
	{
		password[i] = rand() % 94 + 33;  // Generate a random printable ASCII character
	}

	password[6] = '\0';  // Null-terminate the password string

	printf("%s\n", password);

	return 0;
}
