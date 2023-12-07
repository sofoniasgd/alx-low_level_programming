#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: pointer to head of list
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!(head))
		return;
	while (head->next != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
