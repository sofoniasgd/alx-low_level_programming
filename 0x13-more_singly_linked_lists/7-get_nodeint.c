#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
/**
 * get_nodeint_at_index -  a linked list
 * @head: start of linked list
 * @index: nth node
 * Return: nth node of list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count;
listint_t *node;
count = 0;
/* check if h is NULL */
if (head == NULL)
	return (NULL);

/* traverse the linked list */
while (head != NULL)
	{
	if (count == index)
		node = head;
	head = head->next;
	count++;
	}
if (count < index)
	return (NULL);


return (node);
}
