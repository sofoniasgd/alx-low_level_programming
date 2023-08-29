#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
/**
 * print_listint - prints elements of a linked list
 * @h: start of linked list
 * Return: number of list elements
 */
size_t print_listint(const listint_t *h)
{
int count;
count = 0;
/* check if h is NULL */
if (h == NULL)
	return (count);

/* traverse the linked list */
while (h != NULL)
	{
	printf("%i\n", h->n);
	count++;
	h = h->next;
	}
return (count);
}
