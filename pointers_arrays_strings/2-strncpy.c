#include "main.h"

/**
 * _strncpy - Copies up to n characters from the string src to dest.
 * @dest: Pointer to the destination buffer where the content is copied.
 * @src: Pointer to the source string to copy.
 * @n: Maximum number of characters to copy from src.
 *
 * Description: This function copies at most n bytes from the string
 * pointed to by src to the buffer pointed to by dest. If the length of
 * src is less than n, the remainder of dest will be padded with '\0'
 * (null bytes). Unlike _strcat or _strncat, this function does not
 * append but replaces the content of dest up to n bytes.
 *
 * Return: A pointer to the destination string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i]; i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
