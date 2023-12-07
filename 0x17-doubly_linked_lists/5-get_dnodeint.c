#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a linked list
 * @head: pointer to head of list
 * @index: element at which to return address of
 * Return: pointer to element at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	node = head;
	while (node != NULL)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
