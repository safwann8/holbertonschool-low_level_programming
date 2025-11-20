#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - exécute une fonction sur chaque élément d’un tableau
 * @array: le tableau d’entiers
 * @size: la taille du tableau
 * @action: pointeur vers une fonction qui prend un entier en paramètre
 *
 * Description: Cette fonction vérifie
 * que @array et @action ne sont pas NULL,
 * puis applique la fonction pointée par
 * @action à chaque élément du tableau.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	return;

	for (size_t i = 0; size < 1; i++)
	{
		action(array[i]);
	}
}
