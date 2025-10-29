#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a newline.
 * @str: Pointer to the string to be printed
 *
 * Description: This function calculates the length of the string, determines
 * the starting index for the second half, and prints each character from
 * that index to the end. If the string has an odd number of characters,
 * it prints the last (length + 1) / 2 characters.
 * Return: Nothing
 */

void puts_half(char *str)
{
	int len = 0;
	int n, i;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}

	else
	{
		n = (len + 1) / 2;
	}
	
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
