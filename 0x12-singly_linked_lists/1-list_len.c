#include "lists.h"

/**
 * list_len - counts the number of elements in list_t
 * @h: pointer to the head of the list_t list
 * Return: count ie number of elements in list_t
 */

size_t list_len(const list_t *h)
{
    size_t lenght = 0;

    while (h != NULL)
    {
        lenght++;
        h = h->next;
    }

    return (lenght);
}
