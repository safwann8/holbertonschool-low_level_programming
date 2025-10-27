#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting from 0
 *
 * Description: This function prints the multiplication table of 9,
 * from 0 × 0 up to 9 × 9. Each number is separated by a comma and
 * a space. Single-digit numbers are aligned properly with a space
 * to maintain column alignment. The output ends with a newline.
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (j == 0)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
					_putchar('0' + result);
				}
				else
				{
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				}
			}
		}
		_putchar('\n');
	}
}
