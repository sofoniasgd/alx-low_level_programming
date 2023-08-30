#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
/**
 * insert_nodeint_at_index - inserts a node in linked list
 * @head: start of linked list
 * @idx: nth node
 * @n: node data
 * Return: nth node of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int count;
listint_t *node, *tmp, *tmp2;
count = 0;
/* check if h is NULL */
if (*head == NULL)
	return (NULL);
tmp = *head;
/* traverse the linked list */
while (*head != NULL)
	{
	if (count == (idx - 1))
		{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);
		node->n = n;
		tmp2 = (*head)->next;
		(*head)->next = node;
		node->next = tmp2;
		
		/* restoring pointer to head before exit */
		*head = tmp;
		break;
		}
	*head = (*head)->next;
	count++;
	}
if (count < idx)
	return (NULL);


return (node);
}
