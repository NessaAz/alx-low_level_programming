#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into individual words
 * @str: the string to be split
 * Return: all words as string if success, NULL if failed
*/

char **strtow(char *str)
{
	int len;
	int word_count;
	int i, j;
	int word_index, word_start, word_len;
	char **all_words;

	len = strlen(str);
	word_count = 0;
	
	if (str == NULL || *str == '\0')
		return (NULL);

	/*Count the number of words in the string*/
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}
	all_words = malloc((word_count + 1) * sizeof(char *));
	if (all_words == NULL)
		return (NULL);

	word_index = 0;
    word_start = 0;
    word_len = 0;

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (word_len > 0)
			{
				all_words[word_index] = malloc((word_len + 1) * sizeof(char));
				if (all_words[word_index] == NULL)
				{
					for (j = 0; j < word_index; j++)
						free(all_words[j]);
					free(all_words);
					return (NULL);
				}

				strncpy(all_words[word_index], str + word_start, word_len);
				all_words[word_index][word_len] = '\0';
				word_index++;
				word_len = 0;
			}
		}
		 else
		{
			if (word_len == 0)
				word_start = i;
			word_len++;
		}
	}

	all_words[word_index] = NULL;

	return (all_words);
}
