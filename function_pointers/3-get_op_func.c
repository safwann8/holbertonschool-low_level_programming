#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Sélectionne la fonction correspondant à l’opérateur donné
 * @s: symbole de l'opérateur (+, -, *, /, %)
 *
 * Return: un pointeur vers la fonction correspondante,
 *         ou NULL si l’opérateur n'est pas reconnu
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    while (ops[i].op)
    {
        if (*(ops[i].op) == *s && s[1] == '\0')
            return (ops[i].f);
        i++;
    }

    return (NULL);
}
