#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character '_' should be printed
 *
 * Description: Prints a straight line made of '_' characters.
 * If n is 0 or less, only a newline character is printed.
 *
 * Return: Nothing
 */

void print_line(int n)
{
    int i;

    if (n <= 0)

    for (i = 0; i < n; i++)
    {
        _putchar('_');
    }
    _putchar('\n');
}
