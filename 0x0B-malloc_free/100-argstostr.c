#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: the argument count
 * @av: the argument vector
 * Return: a pointer to a new string, NULL if fails
*/

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len, total_len;

	/* Returns NULL if ac == 0 or av == NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		total_len += len + 1;/* +1 for the the newline character */
	}

	str = malloc((total_len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		for (j = 0; j < len; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}