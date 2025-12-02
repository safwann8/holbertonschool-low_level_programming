#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to duplicate and store in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t count = 0;
	list_t *new;

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

	new->next = *head;
	*head = new;

	return (new);
}
