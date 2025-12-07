#include "lists.h"

/**
 * delete_dnodeint_at_index - Supprime le nœud à
 * l’index donné dans une liste dlistint_t
 * @head: Pointeur vers le pointeur du premier nœud de la liste
 * @index: Index du nœud à supprimer (index commence à 0)
 *
 * Description: Cette fonction parcourt la liste
 * jusqu’au nœud situé à l’index
 * donné. Elle met ensuite à jour les
 * pointeurs prev et next des nœuds voisins,
 * libère la mémoire du nœud supprimé et
 * maintient l’intégrité de la liste.
 *
 * Return: 1 si la suppression a réussi, -1 si elle a échoué
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
