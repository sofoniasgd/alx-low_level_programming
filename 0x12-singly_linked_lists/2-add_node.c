#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * add_node - add a node to the begining of linked list
 * @head:head to linkde list
 * @str: string data for head
 * Return:...
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;

newnode = malloc(sizeof(list_t));
if (newnode == NULL)
	return (NULL);

newnode->str = strdup(str);
if (newnode->str == NULL)
	{
	free(newnode);
	return (NULL);
	}

newnode->len = strlen(str);
newnode->next = *head;
*head = newnode;

return (newnode);
}

