#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string to be printed in reverse
 *
 * Description: This function prints the characters of the string
 * pointed to by s in reverse order, followed by a newline character '\n'.
 * Return: Nothing
 */

void print_rev(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    i++;

    while (i--)
        _putchar(s[i]);

    _putchar('\n');
}
