#include <stdio.h>
 /**
 * main - Write a function that checks for uppercase character.
 *
 * Return: (1) if uppercase (0) othercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);

	else
	return (0);
}
