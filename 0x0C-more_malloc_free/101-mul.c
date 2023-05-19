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

char *multiply_numbers(const char *num1, const char *num2)
{
	char *result;
	int i, j, k, len1 = 0, len2 = 0, len_result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	len_result = len1 + len2;
	result = malloc((len_result + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len_result; i++)
		result[i] = '0';
	result[len_result] = '\0';

	for (i = len2 - 1; i >= 0; i--)
	{
		int carry = 0;
		int n2 = num2[i] - '0';

		for (j = len1 - 1, k = len_result - (len2 - i); j >= 0; j--, k--)
		{
			int n1 = num1[j] - '0';
			int sum = (result[k] - '0') + (n1 * n2) + carry;

			result[k] = (sum % 10) + '0';
			carry = sum / 10;
		}

		result[k] += carry;
	}

	return (result);
}

/**
 * print_number - Prints a number string
 * @number: The number string to be printed
 */

void print_number(const char *number)
{
	int i = 0;
	while (number[i] == '0' && number[i + 1] != '\0')
		i++;

	while (number[i])
	{
		_putchar(number[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 on success, 98 on error
 */

int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3 || _isNumber(argv[1]) || _isNumber(argv[2]))
	{
		for (int i = 0; i < 6; i++)
			_putchar("Error\n"[i]);
		return (98);
	}

	result = multiply_numbers(argv[1], argv[2]);
	if (result == NULL)
	{
		free(result);
		return (0);
	}

	print_number(result);
	free(result);

	return (0);
}