#include "lists.h"
#include<stddef.h>
#include<stdlib.h>
#include<stdio.h>
/**
 * free_listint2 - frees a listint_t linked list
 * @head: pointer to head of list
 * Return: none
 */

void free_listint2(listint_t **head)
{
listint_t *current, *tmp;
if (head == NULL)
	return;
current = *head;
while (current != NULL)
	{
	tmp = current->next;
	free(current);
	current = tmp;
	}
current = NULL;
}
