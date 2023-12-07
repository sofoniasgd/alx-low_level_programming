#include "lists.h"

/**
 * print_dlistint - prionts a doubly linked list
 * @h: pointer to start of a dlistint list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (node);
	while (h != NULL)
	{
		printf("%i\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}

