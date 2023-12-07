#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: pointer to head of node
 * @index: index number
 * Return: pointer to new head/node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count = 0;

	/*return -1 if list is empty*/
	if (*head == NULL)
		return (-1);
	tmp = *head;
	/*if deleting the last node*/
	if ((*head)->next == NULL)
	{
		
		free(*head);
		*head = NULL;
		return (1);
	}
	/*find node at index then add*/
	while (tmp != NULL)
	{
		if (count == index)
		{
			/*assign tmp-next to head if index is 0(delete head)*/
			if (index == 0)
			{
				*head = tmp->next;
				(tmp->next)->prev = NULL;
			}
			else
			{
			/*connect previous and next nodes of tmp to eachother*/
				(tmp->prev)->next = tmp->next;
				(tmp->next)->prev = tmp->prev;
			}
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		count++;
	}
	/*if index is not reachable, dont delete and return -1*/
	return (-1);
}
