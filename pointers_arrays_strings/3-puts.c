#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: Pointer to the string to be printed
 *
 * Description: This function prints the characters of the string
 * pointed to by str, followed by a newline character '\n'.
 * Return: Nothing
 */

void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
    _putchar('\n');
}
