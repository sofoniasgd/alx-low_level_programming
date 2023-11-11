#include "lists.h"

/**
 * sum_dlistint - summs data in list
 * @head: pointer to head of list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp->next != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	sum += tmp->n;
	return (sum);
}
