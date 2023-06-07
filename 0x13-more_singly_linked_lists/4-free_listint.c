#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 */

void free_listint(listint_t *head)
{
    listint_t *temporary_pointer;

    while (head != NULL)
    {
        temporary_pointer = head;
        head = head->next;
        free(temporary_pointer);
    }
}
