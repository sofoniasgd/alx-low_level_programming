#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at an index
 * @h: head of list
 * @idx: index to insert at
 * @n: data to insert
 * Return: pointer to new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *node, *place;
	unsigned int len = 0;

	if (*h == NULL)
		return (NULL);

	tmp = *h;
	/* traverse list till index */
	while (tmp->next != NULL)
	{
		if (len == idx)
			break;
		tmp = tmp->next;
		len++;
	}
	/*end of list, return*/
	if (tmp->next == NULL && len != idx)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	/*assign previous node from tmp(index)*/
	place = tmp->prev;
	place->next = node;
	node->prev = place;
	/*assign new node to tmp(index) previous pointer*/
	tmp->prev = node;
	/*assign tmp(index) node to new node next pointer*/
	node->next = tmp;
	return (node);
}
