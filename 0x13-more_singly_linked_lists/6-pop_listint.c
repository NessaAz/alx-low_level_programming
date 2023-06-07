#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t linked list
 * @head: pointer to a pointer to the head of the list
 * Return: the head node's data (n), 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temporary_pointer;
	int data = 0;

	if (head == NULL || *head == NULL)
		return (0);

	temporary_pointer = *head;
	*head = (*head)->next;
	data = temporary_pointer->n;
	free(temporary_pointer);

	return (data);
}
