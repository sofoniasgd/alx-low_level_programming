#include "lists.h"

/**
 * add_dnodeint - adds an element to a doubly linked list
 * @head: pointer to start(head) of a dlistint list
 * @n: data of new element
 * Return: pointer to new head of list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	/* if head is null, assign it to the new node */
	if (*head == NULL)
	{
		*head = node;
		node->next = NULL;
		node->prev = NULL;
		return (node);
	}

	(*head)->prev = node;
	node->next = *head;
	*head = node;
	return (node);

}
