#include <stdio.h>

/**
* main - Prints the alphabet in lowercase
*
* Return: Always 0 (success)
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	
	return (0);
}
