#include "lists.h"

/**
 * add_node_end - add new node at the end of list_t
 * @head: pointer to the head of list_t
 * @str: string to be duplicated and stored in created_node
 * Return: address of created_node, NULL if otherwise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *created_node, *current_node;

	created_node = malloc(sizeof(list_t));
	if (created_node == NULL)
		return (NULL);

	created_node->str = strdup(str);
	if (created_node->str == NULL)
	{
		free(created_node);
		return (NULL);
	}

	created_node->len = strlen(str);
	created_node->next = NULL;

	if (*head == NULL)
	{
		*head = created_node;
	}
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = created_node;
	}

	return (created_node);
}
