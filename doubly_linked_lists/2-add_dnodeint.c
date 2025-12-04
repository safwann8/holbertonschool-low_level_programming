#include "lists.h"


/**
 * add_dnodeint - Ajoute un nouveau nœud au début d’une liste dlistint_t
 * @head: Double pointeur vers la tête de la liste
 * @n: Valeur à stocker dans le nouveau nœud
 *
 * Description: Crée un nouveau nœud, le place en tête de la liste
 * doublement chaînée et met à jour tous les pointeurs nécessaires.
 *
 * Return: L’adresse du nouveau nœud, ou NULL si l’ajout échoue.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n;

	if (head == NULL)
		return (NULL);

	new_n = malloc(sizeof(dlistint_t));

	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->prev = NULL;
	new_n->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_n;
	}
	*head = new_n;

	return (new_n);
}
