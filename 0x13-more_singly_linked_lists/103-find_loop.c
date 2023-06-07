#include "lists.h"

/**
 * find_listint_loop - finds first loop in a linked list
 * @head: pointer to head of the linked list
 * Return: node address of node start, otherwise NULL if there is none
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tort, *hare;

	if (head == NULL)
		return (NULL);

	tort = head;
	hare = head;
	/* Move the hare two steps at a time and the tortoise one step at a time */
	while (hare && hare->next)
	{
		tort = tort->next;
		hare = hare->next->next;

		/* If the hare and tortoise meet, there is a loop */
		if (tort == hare)
		{
			/**
			 * Move the tortoise back to the head
			 * and advance both pointers at the same speed
			 */
			tort = head;
			while (tort != hare)
			{
				tort = tort->next;
				hare = hare->next;
			}
			return (tort); /* Return the node where the loop starts */
		}
	}

	return (NULL);
}
