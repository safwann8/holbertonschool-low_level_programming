#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies a string from src to dest, including the null terminator.
 * @dest: Pointer to the destination buffer where the string will be copied.
 * @src: Pointer to the source string to be copied.
 *
 * Description: This function copies the string pointed to by src, including
 * the terminating null byte '\0', into the buffer pointed to by dest.
 * It returns a pointer to the destination string dest.
 *
 * Return: Pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
