#include "main.h"

/**
 * _puts_recursion - affiche une chaîne de
 * caractères suivie d'un saut de ligne
 * @s: pointeur vers la chaîne à afficher
 *
 * Description :
 * Cette fonction affiche récursivement chaque
 * caractère de la chaîne.
 * Quand le caractère nul ('\0') est rencontré,
 * elle affiche un retour à la ligne.
 *
 * Return: Rien
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
