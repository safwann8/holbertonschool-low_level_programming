#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - recherche un entier dans un tableau selon une fonction
 * @array: le tableau d'entiers
 * @size: le nombre d'éléments dans le tableau
 * @cmp: pointeur vers une fonction qui prend un entier et retourne 0 ou autre
 *
 * Description: Parcourt le tableau et retourne l'indice du premier élément
 * pour lequel la fonction pointée par @cmp ne retourne pas 0.
 * Retourne -1 si aucun élément ne correspond ou si size <= 0.
 * Return: l'indice du premier élément pour lequel cmp ne renvoie pas 0,
 *         ou -1 si aucun élément ne correspond ou si size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
