#include "main.h"

/**
 * print_triangle - Prints a triangle using the character #
 * @size: The size of the triangle
 *
 * Description: If size is 0 or less, the function prints only a new line.
 * The triangle is aligned to the right.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}

			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
