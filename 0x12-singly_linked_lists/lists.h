#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct node - represents a node in a linked list
 * @str: string data stored in the node
 * @len: length of the node
 * @next: pointer to next node of list_t
*/
typedef struct node
{
	char *str;
	int len;
	struct node *next;
} list_t;


int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);


#endif

