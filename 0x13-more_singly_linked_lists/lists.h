#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


int _putchar(char c);
size_t print_listint(const listint_t *h);
listint_t *find_listint_loop(listint_t *head);
size_t free_listint_safe(listint_t **h);
size_t print_listint_safe(const listint_t *head);
listint_t *reverse_listint(listint_t **head);
size_t listint_len(const listint_t *h);

#endif

