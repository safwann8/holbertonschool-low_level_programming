#include "main.h"

/**
 * reverse_array - Inverse le contenu d’un tableau d’entiers.
 * @a: Pointeur vers le tableau d’entiers à inverser.
 * @n: Nombre d’éléments dans le tableau.
 *
 * Description: Cette fonction inverse l’ordre des éléments du tableau
 * pointé par @a. Le premier élément devient le dernier, le deuxième
 * devient l’avant-dernier, et ainsi de suite. L’opération est effectuée
 * directement dans le tableau sans utiliser de tableau supplémentaire.
 *
 * Return: Rien (void).
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int start = 0, end;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}
