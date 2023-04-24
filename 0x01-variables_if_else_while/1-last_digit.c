#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of a randomly generated number
 * Return: 0 upon successful completion
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;
	
	if (lastDigit > 5)
        {
            printf("%d and is greater than 5\n", lastDigit);
        }
        else if (lastDigit == 0)
        {
            printf("%d and is 0\n", lastDigit);
        }
        else
        {
            printf("%d and is less than 6 and not 0\n", lastDigit);
        }
	return (0);
}
