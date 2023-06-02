#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

/**
 * struct node - represents a node in a linked list
 * @str: string data stored in the node
*/
typedef struct node
{
    char *str;
    struct node *next;
} list_t;


int _putchar(char c);


#endif