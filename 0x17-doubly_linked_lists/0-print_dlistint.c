#include "lists.h"
/**
 * print_dlistint - prints all elements of a linked list
 * @h: list pointer
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
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
		printf("%i\n", node->n);
		node = node->next;
		nodenumber++;
	}
	return (nodenumber);
}
