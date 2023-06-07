#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer to the head of the list
 * @n: value to be assigned to the new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *added_node;

    added_node = malloc(sizeof(listint_t));
    if (added_node == NULL)
        return (NULL);

    added_node->n = n;
    added_node->next = *head;
    *head = added_node;

    return (added_node);
}
