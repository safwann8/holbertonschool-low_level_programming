#include "lists.h"

/**
 * free_dlistint - Libère tous les nœuds d’une liste dlistint_t
 * @head: Pointeur vers le premier nœud de la liste
 *
 * Description: Parcourt la liste depuis head et libère chaque nœud
 * pour éviter les fuites mémoire.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
