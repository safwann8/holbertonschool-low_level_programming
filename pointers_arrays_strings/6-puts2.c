#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: Pointer to the string to be printed.
 *
 * Description: This function prints characters at even indices (0, 2, 4, ...)
 * of the string pointed to by str, followed by a new line.
 * Return: Nothing.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
