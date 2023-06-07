#include "lists.h"

/**
 * sum_listint - returns sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of the list
 * Return: sum of all the data (n) in the list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum_data = 0;/** returns 0 if sum is empty*/
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		sum_data += current_node->n;
		current_node = current_node->next;
	}

	return (sum_data);
}
