#include "lists.h"

/**
 * insert_dnodeint_at_index - Insère un nouveau nœud à une position donnée
 * @h: Double pointeur vers la tête de la liste
 * @idx: Index où insérer le nouveau nœud (commence à 0)
 * @n: Valeur à stocker dans le nouveau nœud
 *
 * Description: Insère un nœud contenant n à la position idx dans la
 * liste doublement chaînée pointée par *h. Si l'insertion échoue ou si
 * idx est hors limites, la fonction ne modifie pas la liste et retourne NULL.
 *
 * Return: Adresse du nouveau nœud, ou NULL si échec.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;
	for (i = 0; tmp != NULL && i < idx - 1; i++)
		tmp = tmp->next;

	if (tmp == NULL)
		return (NULL);

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;

	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
