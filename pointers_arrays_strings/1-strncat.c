#include "main.h"

/**
 * _strncat - Concatenates at most n bytes from src to the end of dest.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to append from src.
 *
 * Description: This function appends at most n characters from the string
 * pointed to by src to the string pointed to by dest. It overwrites the
 * terminating null byte at the end of dest and adds a new terminating null byte.
 * The src string does not need to be null-terminated if it contains n or more bytes.
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    i++;

    while (src[j] != '\0' && j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return (dest);
}
