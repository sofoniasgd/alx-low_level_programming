#include "lists.h"

/**
 * add_dnodeint_end - adds a node at head
 * @head: pointer to head of node
 * @n: int value
 * Return: pointer to new head/node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;

	/* malloc the node */
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	/* traverse till end of list if it exist */
	if (*head)
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = node;
		node->prev = tmp;
	}
	else
	{
		*head = node;
		node->prev = NULL;
	}
	return (node);
}
