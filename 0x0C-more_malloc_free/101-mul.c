#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply_numbers - function multiplies 2 positive numbers
 * @num1: first positive number
 * @num2: second positive number
 * Return: pointer to array, 0 if failed
*/

int multiplyNumbers(const char *num1, const char *num2)
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

void printNumber(int number)
{
    if (number == 0) {
        _putchar('0');
        return;
    }

    int reversedNumber = 0;
    while (number != 0) {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }

    while (reversedNumber != 0) {
        _putchar(reversedNumber % 10 + '0');
        reversedNumber /= 10;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3 || !_isNumber(argv[1]) || !_isNumber(argv[2])) {
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

    int result = multiplyNumbers(argv[1], argv[2]);
    printNumber(result);
    _putchar('\n');

    return (0);
}