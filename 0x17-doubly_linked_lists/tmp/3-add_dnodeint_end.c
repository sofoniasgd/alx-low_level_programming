#include "lists.h"

/**
 * add_dnodeint_end - adds an element to the end of doubly linked list
 * @head: pointer to start(head) of a dlistint list
 * @n: data of new element
 * Return: pointer to new head of list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmphead;

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
	tmphead = *head;
	while (tmphead->next != NULL)
	{
		tmphead = tmphead->next;
	}
	tmphead->next = node;
	node->prev = tmphead;
	node->next = NULL;
	return (node);

}
