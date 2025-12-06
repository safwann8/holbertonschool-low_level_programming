#include "lists.h"

/**
 * sum_dlistint - Calcule la somme de tous les n de la liste dlistint_t
 * @head: pointeur vers le premier élément de la liste
 *
 * Description: Parcourt la liste doublement chaînée et additionne
 * la valeur n de chaque nœud. Retourne 0 si la liste est vide.
 *
 * Return: la somme de tous les n, ou 0 si la liste est vide
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
