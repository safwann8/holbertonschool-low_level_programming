#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed.
 *
 * Description: This function reverses the order of characters in the
 * string pointed to by s. The original string is modified.
 * Return: Nothing.
 */

void rev_string(char *s)
{
    char tmp;
    int len = 0, start = 0, end;

    while (s[len] != '\0')
    len++;

    end = len - 1;

    while (start > end)

    tmp = s[start];
    s[start] = s[end];
    s[end] = tmp;

    start++;
    end--;
}
