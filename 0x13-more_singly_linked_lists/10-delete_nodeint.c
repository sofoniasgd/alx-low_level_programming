#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
/**
 * delete_nodeint_at_index -  a linked list
 * @head: start of linked list
 * @index: nth node
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int count;
listint_t *node, *tmp;
count = 0;
/* check if h is NULL */
if (head == NULL)
	return (-1);
tmp = *head;
/* traverse the linked list */
while (tmp != NULL)
	{
	if (count == index)
		{
		node = tmp->next;
		free(tmp);
		tmp = node;
		return (1);
		}
	tmp = tmp->next;
	count++;
	}
if (count < index)
	return (-1);

return (-1);
}
