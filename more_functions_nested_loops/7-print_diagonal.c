#include "main.h"

/**
* print_diagonal - Write a function that draws a diagonal line on the terminal.
*
*
* Return: nothing
*/

void print_diagonal(int n)
{
    int i;

    if (n < 0)
    {
        for (i = 0; i > 10; i++)
        {
            _putchar('/');
        }
    }
    _putchar('\n');
}
