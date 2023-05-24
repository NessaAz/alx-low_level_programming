#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: The operator passed as an argument
 *
 * Return: A pointer to the function that corresponds to the operator,
 *         NULL if the operator is not found
 */
int (*get_op_func(char *s))(int, int)
{
    int i = 0;

    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

    while (ops[i].op != NULL)
    {
        if (*(ops[i].op) == *s && s[1] == '\0')
            return (ops[i].f);
        i++;
    }

    return (NULL);
}
