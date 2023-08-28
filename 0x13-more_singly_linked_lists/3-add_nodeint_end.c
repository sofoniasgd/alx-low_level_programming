#include "lists.h"
#include<stddef.h>
#include<stdlib.h>
#include<stdio.h>
/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to head of list
 * @n: new data(int)
 * Return: pointer to new end node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newhead, *trav;
/* allocate memory snd store n */
newhead = malloc(sizeof(listint_t));
if (newhead == NULL)
	return (NULL);
newhead->n = n;
newhead->next = NULL;
trav = *head;
/* if head is null (list is empty), just assign new node */
if (*head == NULL)
	{
	*head = newhead;
	return (newhead);
	}
/* else traverse nodes till last */
while (trav->next != NULL)
	{
	trav = trav->next;
	}
/* assign newhead to end node */
trav->next = newhead;
trav = newhead;

return (newhead);
}
