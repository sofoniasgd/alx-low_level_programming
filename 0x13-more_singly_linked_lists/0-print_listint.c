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
const listint_t *current;
count = 0;
/* check if h is NULL */
if (h == NULL)
	return (count);
current = malloc(sizeof(listint_t));
if (current == NULL)
	return (0);
current = h;
/* traverse the linked list */
while (current != NULL)
	{
	printf("%i\n", current->n);
	count++;
	current = current->next;
	}
free((void *)current);
return (count);
}
