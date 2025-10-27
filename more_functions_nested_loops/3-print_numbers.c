#include "main.h"

/**
* print_numbers - Write a function that prints the numbers, from 0 to 9, followed by a new line.
*
*
* Return: Always 0 (success)
*/

void print_numbers(void)
{
	int number;

	for (number = 0; number <=9; number++)
	{
		_putchar(number + '0');
	}
	_putchar('\n');
}
