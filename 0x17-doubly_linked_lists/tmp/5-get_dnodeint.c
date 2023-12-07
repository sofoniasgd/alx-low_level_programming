#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a linked list
 * @head: pointer to head of list
 * @index: index of node
 * Return: pointer to nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp->next != NULL)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	if (i == index)
		return (tmp);
	else
		return (NULL);
}
