#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Retourne le nombre d’éléments d’une liste dlistint_t
 * @h: Pointeur constant vers le premier nœud de la liste
 *
 * Description: Parcourt la liste doublement chaînée à partir du nœud h
 * et compte le nombre total de nœuds jusqu’à atteindre NULL.
 *
 * Return: Le nombre d’éléments dans la liste
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
