#include "main.h"

/**
 * _strcmp - Compare deux chaînes de caractères.
 * @s1: Première chaîne à comparer.
 * @s2: Deuxième chaîne à comparer.
 *
 * Description: Cette fonction compare les deux chaînes de caractères
 * pointées par s1 et s2, caractère par caractère. Elle renvoie :
 *   - un nombre négatif si s1 est inférieure à s2,
 *   - 0 si les deux chaînes sont identiques,
 *   - un nombre positif si s1 est supérieure à s2.
 * Le comportement est identique à celui de la fonction de
 * comparaison de chaine du
 * standard C.
 *
 * Return: Un entier négatif, nul ou positif selon le résultat
 * de la comparaison.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] > s2[i])
	{
		return (s1[i] - s2[i]);
	}
	else if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
