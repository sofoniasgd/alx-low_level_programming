#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

/**
 * findlenl - finds length of a linked list
 * @head: pointer to head of list
 * Return: length of the list
 */
unsigned int findlenl(listint_t *head)
{
if(head)
	return (1 + findlenl(head->next));
else
	return (0);
}

/**
 * delete_nodeint_at_index -  a linked list
 * @head: start of linked list
 * @index: nth node
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int count;
listint_t *tmp, *targetnode, *indexplustwo;
count = 0;
/* check if h is NULL */
if (head == NULL)
	return (-1);
if (index != 0)
	tmp = *head;
/*find length of list and ckeck if its less than index */
printf("len- %i\n", findlenl(*head));
/*if (findlen(tmp) < index)*/
/*	return (-1);*/
/* traverse the linked list */

while (*head != NULL)
	{
	/* if target(index) is 0 just delete first node */
	if (index == 0)
		{
		tmp = (*head)->next;
		free((void *)*head);
		*head = tmp;
		return (1);
		}
	if (count == (index - 1))
		{
		/* ELSE, stop at index - 1 and get target node at index */
		targetnode = (*head)->next;
		indexplustwo = targetnode->next;
		/* free target node and assign head->next to node after target*/
		free((void *)targetnode);
		(*head)->next = indexplustwo;
		*head = tmp;
		return (1);
		}
	*head = (*head)->next;
	count++;
	}
return (-1);
}
