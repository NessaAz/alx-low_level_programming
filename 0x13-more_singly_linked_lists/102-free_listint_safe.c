#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list, even if it contains a loop
 * @h: pointer to a pointer to the head of the list.
 * Return: size of list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tort, *hare, *temporary;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	tort = *h;
	hare = (*h)->next;

	while (hare && hare->next && hare != tort)
	{
		tort = tort->next;
		hare = hare->next->next;
	}

	if (hare == tort)
	{
		tort = *h;
		while (tort != hare->next)
		{
			temporary = tort;
			tort = tort->next;
			free(temporary);
			count++;
		}
		free(hare->next);
		count++;
	}

	while (*h != NULL)
	{
		temporary = *h;
		*h = (*h)->next;
		free(temporary);
		count++;
	}

	*h = NULL;

	return (count);
}
