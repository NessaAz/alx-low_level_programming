#include "lists.h"

/**
 * add_node - add a new node at the beginning of list_t
 * @head: pointer to the head list_t
 * @str: string to be duplicated and stored in created_node
 * Return: created_node, NULL if otherwise
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *created_node;

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
	created_node->next = *head;
	*head = created_node;

	return (created_node);
}
