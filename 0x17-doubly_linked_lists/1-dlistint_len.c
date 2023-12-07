#include "lists.h"
/**
 * dlistint_len - prints all elements of a linked list
 * @h: list pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodenumber = 0;
	const dlistint_t *node;

	if (h == NULL)
	{
		return (nodenumber);
	}
	node = h;
	while (node != NULL)
	{
		node = node->next;
		nodenumber++;
	}
	return (nodenumber);
}
