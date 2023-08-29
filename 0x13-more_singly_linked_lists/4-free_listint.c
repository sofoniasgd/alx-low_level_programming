#include "lists.h"
#include<stddef.h>
#include<stdlib.h>
#include<stdio.h>
/**
 * free_listint - frees a listint_t linked list
 * @head: pointer to head of list
 * Return: none
 */

void free_listint(listint_t *head)
{
listint_t *current;
if (head == NULL)
	return;

while (head != NULL)
	{
	current = head->next;
	free(head);
	head = current;
	}
}
