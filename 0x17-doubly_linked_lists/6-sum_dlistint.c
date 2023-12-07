#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in a  linked list
 * @head: pointer to head of list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	if (head == NULL)
		return (sum);
	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
