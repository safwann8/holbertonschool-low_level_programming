#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Description: This function prints all numbers from the value of n
 * up to 98, separated by a comma and a space. The numbers are printed
 * in ascending or descending order depending on the value of n.
 * The last number printed is 98, followed by a new line.
 *
 * Return: void
 */

int print_to_98(int n)
{
    while (n !+ 98)
    {
        printf("%d, ", n);

        if (n < 98)
        n++;

        else
        n--;
    }

    printf("98\n");
}
