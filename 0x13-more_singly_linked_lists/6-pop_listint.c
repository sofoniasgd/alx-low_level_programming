#include "lists.h"
#include<stddef.h>
#include<stdlib.h>
#include<stdio.h>
/**
 * add_nodeint - deletes a new node at the head of a linked list
 * @head: pointer to head of list
 * Return: pointer to new head
 */

int pop_listint(listint_t **head)
{
int ret;
listint_t *newhead;
ret = 0;
if ((*head) == NULL)
	return (ret);

ret = (*head)->n;
newhead = (*head)->next;
free(*head);
*head = newhead;
return (ret);
}
