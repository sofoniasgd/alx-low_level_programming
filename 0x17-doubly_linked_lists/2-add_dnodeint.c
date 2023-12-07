#include "lists.h"

/**
 * add_dnodeint - adds a node at head
 * @head: pointer to head of node
 * @n: int value
 * Return: pointer to new head/node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;

	if (*head == NULL)
		node->next = NULL;
	else
	{
		(*head)->prev = node;
		node->next = *head;
	}
	*head = node;
	return (node);
}
