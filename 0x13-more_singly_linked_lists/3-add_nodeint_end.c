#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to a pointer to the head of the list
 * @n: value to be assigned to the new node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *added_node, *temporary_pointer;

    added_node = malloc(sizeof(listint_t));
    if (added_node == NULL)
        return (NULL);

    added_node->n = n;
    added_node->next = NULL;

    if (*head == NULL)
    {
        *head = added_node;
    }
    else
    {
        temporary_pointer = *head;
        while (temporary_pointer->next != NULL)
        {
            temporary_pointer = temporary_pointer->next;
        }
        temporary_pointer->next = added_node;
    }

    return (added_node);
}
