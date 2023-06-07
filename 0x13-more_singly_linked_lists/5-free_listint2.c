#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: pointer to a pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temporary_pointer;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temporary_pointer = *head;
		*head = (*head)->next;
		free(temporary_pointer);
	}

	*head = NULL; /* list is now empty*/
}
