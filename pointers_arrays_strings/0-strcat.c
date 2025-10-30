#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string (the result will be stored here).
 * @src: Pointer to the source string to append to dest.
 *
 * Description: This function appends the string pointed to by src
 * to the end of the string pointed to by dest, overwriting the null
 * terminator at the end of dest, and then adds a new null terminator.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
