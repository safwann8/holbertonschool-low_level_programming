#include "lists.h"

/**
 * get_dnodeint_at_index - Retourne le nœud situé à un index donné
 * @head: Pointeur vers le premier nœud de la liste
 * @index: Position du nœud recherché (commence à 0)
 *
 * Description: Parcourt la liste doublement chaînée jusqu’à atteindre
 * le nœud correspondant à l’index demandé. Si l’index est hors limites,
 * la fonction retourne NULL.
 *
 * Return: L’adresse du nœud à la position index,
 * ou NULL si ce nœud n’existe pas.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (tmp != NULL)
	{
		if (count == index)
		{
			return (tmp);
		}
		else
		{
			tmp = tmp->next;
			count++;
		}
	}
	return (NULL);
}
