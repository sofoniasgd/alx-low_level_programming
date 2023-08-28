#include "lists.h"
#include<stddef.h>
#include<stdlib.h>
#include<stdio.h>
/**
 * add_nodeint - adds a new node at the head of a linked list
 * @head: pointer to head of list
 * @n: new data(int)
 * Return: pointer to new head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newhead;
newhead = malloc(sizeof(listint_t));
if (newhead == NULL)
	return (NULL);
newhead->n = n;
if (head == NULL)
	newhead->next = NULL;
else
	newhead->next = *head;

*head = newhead;

return (newhead);
}
