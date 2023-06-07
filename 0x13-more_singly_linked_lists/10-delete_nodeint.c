#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *temporary_pointer;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temporary_pointer = *head;
		*head = (*head)->next;
		free(temporary_pointer);
		return (1);
	}

	current_node = *head;
	for (i = 0; i < index - 1 && current_node != NULL; i++)
		current_node = current_node->next;

	if (current_node == NULL || current_node->next == NULL)
		return (-1);

	temporary_pointer = current_node->next;
	current_node->next = current_node->next->next;
	free(temporary_pointer);

	return (1);
}
