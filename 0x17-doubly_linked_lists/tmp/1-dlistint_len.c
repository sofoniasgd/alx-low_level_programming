#include "lists.h"

/**
 * dlistint_len - prionts a doubly linked list
 * @h: pointer to start of a dlistint list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (node);
	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}

