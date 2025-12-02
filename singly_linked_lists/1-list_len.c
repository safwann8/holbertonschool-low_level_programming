#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *h2 = h;

	while (h2 != NULL)
	{
		count++;
		h2 = h2->next;
	}
	return (count);
}
