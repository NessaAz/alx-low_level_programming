#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list, even if it contains a loop
 * @h: pointer to the pointer to the head of the list
 * Return: The number of nodes in the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current_node, *temporary_node;
	size_t count = 0;


	if (h == NULL || *h == NULL)
		return (count);

	current_node = *h;
	while (current_node != NULL)
	{
		temporary_node = current_node;
		current_node = current_node->next;
		free(temporary_node);

		if (temporary_node <= current_node)
			break;
	}

	*h = NULL;

	return (count);
}
