#include "main.h"

/**
 * string_toupper - Change toutes les lettres minuscules d’une chaîne en majuscules.
 * @str: Pointeur vers la chaîne de caractères à modifier.
 *
 * Description: Cette fonction parcourt la chaîne pointée par @str
 * et convertit chaque lettre minuscule ('a' à 'z') en sa lettre majuscule
 * correspondante ('A' à 'Z'). Les autres caractères ne sont pas modifiés.
 *
 * Return: Un pointeur vers la chaîne modifiée @str.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
