#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
/**
 * sum_listint - prints sum of elements of a linked list
 * @head: start of linked list
 * Return: sum of list elements
 */
int sum_listint(listint_t *head)
{
int count, sum;
const listint_t *current;
count = 0;
sum = 0;
/* check if h is NULL */
if (head == NULL)
	return (sum);
current = malloc(sizeof(listint_t));
if (current == NULL)
	return (0);
current = head;
/* traverse the linked list */
while (current != NULL)
	{
	count++;
	sum += current->n;
	current = current->next;
	}
/* free((void *)current); */
return (sum);
}
