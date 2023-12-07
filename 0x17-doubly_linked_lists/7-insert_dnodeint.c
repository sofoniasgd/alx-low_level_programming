#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a node at index
 * @h: pointer to head of node
 * @idx: index number
 * @n: int value/data
 * Return: pointer to new head/node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *tmp;
	unsigned int count = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	/*aassign head to node if list is empty*/
	if (*h == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		*h = newnode;
		return (newnode);
	}
	/*find node at index then add*/
	tmp = *h;
	while (tmp != NULL)
	{
		if (count == idx)
		{
			/*node<=====>newnode<===>tmp*/
			newnode->prev = tmp->prev;
			(tmp->prev)->next = newnode;
			/*newnode<====>tmp*/
			newnode->next = tmp;
			tmp->prev = newnode;
			return (newnode);
		}
		tmp = tmp->next;
		count++;
	}
	/*id index is not reachable, dont add and return NULL*/
	free(newnode);
	return (NULL);
}
