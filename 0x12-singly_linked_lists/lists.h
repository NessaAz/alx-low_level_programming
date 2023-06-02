#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

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


#endif

