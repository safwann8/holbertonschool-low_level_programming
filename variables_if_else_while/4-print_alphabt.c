#include <stdio.h>

/**
* main - Prints the alphabet in lowercase and not prints q,e
*
* Return: Always (0) (success)
*/
int main(void)
{
	char letter = 'a';
	
	while(letter <='z')
	{
		if (letter != 'e' && letter != 'q')
		putchar (letter);
		letter++;
	}

	putchar ('\n');
	return (0);
}
