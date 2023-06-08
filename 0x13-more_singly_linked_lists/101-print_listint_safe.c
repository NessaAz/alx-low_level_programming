#include "lists.h"

/**
 * print_listint_safe - prints linked list, even if it contains a loop
 * @head: pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tort, *hare;
	size_t count = 0;


	if (head == NULL)
		return (0);

	tort = hare = head;

	while (hare && hare->next)
	{
		tort = tort->next;
		hare = hare->next->next;

		if (tort == hare)
		{
			printf("[%p] %d\n", (void *)tort, tort->n);
			printf("[%p] %d\n", (void *)hare->next, hare->next->n);
			exit(98);
		}
	}

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;

		if (head == hare)/* in case a node indicates presence of a loop*/
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}

	return (count);
}
