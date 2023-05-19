#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isNumber - Checks if a string is a number
 * @str: The string to be checked
 * Return: 1 if the string is not a number, 0 otherwise
 */

int _is_number(const char *str) 
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}


/**
 * multiply_numbers - function multiplies 2 positive numbers
 * @num1: first positive number
 * @num2: second positive number
 * Return: pointer to array, 0 if failed
*/

int multiply_numbers(const char *num1, const char *num2)
{
    int result = 0;
    int i, j;

    for (i = 0; num1[i] != '\0'; i++) {
        if (!isdigit(num1[i]))
            return -1;

        for (j = 0; num2[j] != '\0'; j++) {
            if (!isdigit(num2[j]))
                return -1;

            result += (num1[i] - '0') * (num2[j] - '0');
            result *= 10;
        }
    }

    result /= 10;
    return (result);
}

void print_number(int number)
{
    if (number == 0) {
        _putchar('0');
        return;
    }

    int reversed_number = 0;
    while (number != 0) {
        reversed_number = reversed_number * 10 + number % 10;
        number /= 10;
    }

    while (reversed_number != 0) {
        _putchar(reversed_number % 10 + '0');
        reversed_number /= 10;
    }
}

int main(int argc, char *argv[]) 
{
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    
    if (argc != 3 || !_is_number(argv[1]) || !_is_number(argv[2])) {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return (98);
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int result = multiply_numbers(argv[1], argv[2]);
    print_number(result);
    _putchar('\n');

    return (0);
}