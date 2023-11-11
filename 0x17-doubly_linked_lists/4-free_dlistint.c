#include "lists.h"
/**
 *  free_dlistint - frees a doubly likned list
 *  @head: pointer to head od list
 *  Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head->next != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
