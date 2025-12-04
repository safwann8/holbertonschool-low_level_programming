#include "lists.h"

/**
 * add_dnodeint_end - Ajoute un nouveau nœud à la fin d’une liste dlistint_t
 * @head: Double pointeur vers la tête de la liste
 * @n: Valeur à stocker dans le nouveau nœud
 *
 * Description: Crée un nouveau nœud, le place à la fin de la liste
 * doublement chaînée et met à jour tous les pointeurs nécessaires.
 *
 * Return: L’adresse du nouveau nœud, ou NULL si l’ajout échoue.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nn;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	nn = malloc(sizeof(dlistint_t));

	if (nn == NULL)
		return (NULL);

	nn->n = n;
	nn->prev = NULL;
	nn->next = NULL;

	if (*head == NULL)
	{
		*head = nn;
		return (nn);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	
	temp->next = nn;
	nn->prev = temp;

	return (nn);
}
