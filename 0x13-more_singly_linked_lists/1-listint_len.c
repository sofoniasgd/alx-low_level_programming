#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
/**
 * listint_len - returns number of elements of a linked list
 * @h: start of linked list
 * Return: number of list elements
 */
size_t listint_len(const listint_t *h)
{
int count;
const listint_t *current;
count = 0;
/* check if h is NULL */
if (h == NULL)
	return (count);
current = malloc(sizeof(listint_t));
current = h;
/* traverse the linked list */
while (current != NULL)
	{
	count++;
	current = current->next;
	}
return (count);
}
