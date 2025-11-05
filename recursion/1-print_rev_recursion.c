#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - affiche une chaîne en sens inverse
 * @s: pointeur vers la chaîne
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0')
        return;

    _print_rev_recursion(s + 1);
    _putchar(*s);
}
