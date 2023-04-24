#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	/* print lowercase */
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	/* PRINT UPPERCASE */
        for (i = 'A'; i <= 'Z'; i++)
        {
                putchar(i);
        }

	putchar('\n');

	return (0);
}
