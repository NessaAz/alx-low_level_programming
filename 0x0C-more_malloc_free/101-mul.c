#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _atoi_digit - converts char to integer
 * @x: char to be converted
*/

int _atoi_digit(char c)
{
	unsigned int result;

	if (c >= '0' && c <= '9')
		result = c - '0';
	else
		result = 0;

	return (result);
}

/**
 * _isNumber - Checks if a string is a number
 * @str: The string to be checked
 * Return: 1 if the string is not a number, 0 otherwise
 */

int _is_number(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}


/**
 * _calloc - allocates memory of an array using malloc
 * @nmemb: number of elements
 * @size: total bytes
 * Return: pointer to allocated array if success, NULL if failed
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tab;
	unsigned int i;

	tab = malloc(size * nmemb);

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		tab[i] = '0';

	return (tab);
}


/**
 * mul_array - multiplies 2 arrays
 * @a1: 
 * @len1:
 * @a2:
 * @a3:
 * @lena: 
 * Return: 
*/

void *mul_array(const char *a1, int len1, char a2, char *a3, int lena)
{
	int mul = 0, i, k;

	k = lena - 1;
	for (i = len1 - 1; i >= 0; i--)
	{
		mul += (_atoi_digit(a1[i]) * _atoi_digit(a2)) + (_atoi_digit(a3[k]));
		a3[k] = (mul % 10) + '0';
		mul /= 10;
		k--;
	}

	while (mul != 0)
	{
		mul += _atoi_digit(a3[k]);
		a3[k] = (mul % 10) + '0';
		mul /= 10;
		k--;
	}

	return (a3);
}


/**
 * print_array - prints array
 * @a: 
 * @nb: 
 * Return: 
*/

void print_array(const char *a, int nb)
{
	int i = 0;

	while (a[i] == '0' && (i + 1) < nb)
		i++;

	for (; i < nb; i++)
		_putchar(a[i]);

	_putchar('\n');
}


/**
 * main - entry point
 * @argc:
 * @argv:
 * Return: 
*/

int main(int argc, char *argv[])
{
	int i, c, len1, len2, lenres;
	char *tabres;

	if (argc != 3 || !_is_number(argv[1]) || !_is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	len1 = 0;
	while (argv[1][len1])
		len1++;

	len2 = 0;
	while (argv[2][len2])
		len2++;

	lenres = len1 + len2;
	tabres = _calloc(lenres, sizeof(char));

	if (tabres == NULL)
	{
		free(tabres);
		return (0);
	}

	for (i = len2 - 1, c = 0; i >= 0; i--)
	{
		tabres = mul_array(argv[1], len1, argv[2][i], tabres, lenres - c);
		c++;
	}

	print_array(tabres, lenres);
	free(tabres);

	return (0);
}
