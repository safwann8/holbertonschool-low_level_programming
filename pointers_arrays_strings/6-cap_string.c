#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: Pointer to the string to be modified.
 *
 * Description: This function traverses the string pointed to by @str
 * and converts the first character of each word to uppercase if it is
 * a lowercase letter. Words are considered to be separated by the
 * following characters: space, tabulation, new line, ',', ';', '.',
 * '!', '?', '"', '(', ')', '{', and '}'.
 *
 * Return: A pointer to the modified string @str.
 */

char *cap_string(char *str)
{
	int i = 0;
	char tab[] = " \t\n,;.!?/(){}";
	int j;

	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] - 32;
		}

		for (j = 0; tab[j] != '\0'; j++)
		{
			if (str[i] == tab[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}
