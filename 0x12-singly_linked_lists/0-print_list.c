#include "lists.h"

/**
 * print_list - prints the value of each node's str
 * @h: pointer to the head of list_h
 * Return: count ie, number of nodes traversed
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("%s\n", h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		h = (*h).next;
		count++;
	}

	return (count);
}