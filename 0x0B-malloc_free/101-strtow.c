#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: the string to be split
*/

char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count;

	if (str == NULL || *str == '\0')
		return (NULL);
	len = strlen(str);
	words = malloc((len + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	word_count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '\0')
			break;
		j = i;
		while (str[j] != ' ' && str[j] != '\0')
			j++;
		words[word_count] = malloc((j - i + 1) * sizeof(char));
		if (words[word_count] == NULL)
		{
			while (word_count > 0)
				free(words[--word_count]);
			free(words);
			return (NULL);
		}
		k = 0;
		while (i < j)
			words[word_count][k++] = str[i++];
		words[word_count][k] = '\0';
		word_count++;
	}
	words[word_count] = NULL;
	return (words);
}
