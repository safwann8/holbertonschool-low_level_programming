#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: pointer to the string to measure
 *
 * Description: This function iterates through the string
 * until it reaches the null terminator '\0' and counts
 * the number of characters.
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while(s[len] != '\0')
	len++;

	return (len);
}
