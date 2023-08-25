#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * free_list - free all nodes till the end of linked list
 * @head:head to linkde list
 * Return: none
 */
void free_list(list_t *head)
{
list_t *node;

if (head == NULL)
	{
	return;
	}
while (head != NULL)
	{
	free(head->str);
	node = head->next;
	free(head);
	head = node;
	}

}
