#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to duplicate and store in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t count = 0;
	list_t *new;
	list_t *temp = *head;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[count] != '\0')
		count++;

	new->len = count;

	if (*head == NULL)
{
	*head = new;
	new->next = NULL;
	return (new);
}


	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->next = NULL;

	return (new);
}
