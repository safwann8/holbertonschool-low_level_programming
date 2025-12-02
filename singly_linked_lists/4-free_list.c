#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list
 *
 * Description: Frees all the nodes of a singly linked list,
 * including the duplicated strings inside each node.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
