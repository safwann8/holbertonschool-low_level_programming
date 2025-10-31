#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet) format.
 * @str: Pointer to the string to be encoded.
 *
 * Description: This function replaces specific letters in the string
 * pointed to by @str with corresponding 1337 characters:
 *   - 'a' and 'A' are replaced by '4'
 *   - 'e' and 'E' are replaced by '3'
 *   - 'o' and 'O' are replaced by '0'
 *   - 't' and 'T' are replaced by '7'
 *   - 'l' and 'L' are replaced by '1'
 * Only one if statement and a maximum of two loops are allowed.
 *
 * Return: A pointer to the encoded string @str.
 */

char *leet(char *str)
{
	int i = 0, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (str[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
