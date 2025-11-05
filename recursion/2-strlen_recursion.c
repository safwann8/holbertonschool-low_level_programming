#include "main.h"

/**
 * _strlen_recursion - calcule la longueur d'une chaîne de caractères
 * @s: pointeur vers la chaîne dont on veut connaître la longueur
 *
 * Description:
 * Cette fonction détermine la longueur d'une chaîne en utilisant la récursion.
 * Elle compte un caractère à chaque appel, jusqu'à atteindre le caractère
 * nul '\0' qui marque la fin de la chaîne.
 *
 * Return: la longueur de la chaîne (nombre de caractères avant '\0')
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);

	return (1 + _strlen_recursion(s + 1));
}
