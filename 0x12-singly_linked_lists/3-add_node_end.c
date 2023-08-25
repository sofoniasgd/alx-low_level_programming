#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * add_node_end - add a node to the end of linked list
 * @head:head to linkde list
 * @str: string data for head
 * Return:...
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode, *trav;

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
newnode->next = NULL;
trav = *head;
if (*head == NULL)
	{
	*head = newnode;
	return (newnode);
	}
while (trav->next != NULL)
	trav = trav->next;

trav->next = newnode;
return (newnode);
}

