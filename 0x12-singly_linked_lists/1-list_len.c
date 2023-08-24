#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
/**
 * list_len - prints number of elements of a linked list
 * @h: list_t pointer to head
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
const list_t *printnode, *tmp;
unsigned int nodenum;
if (h == NULL)
	return (0);
printnode = h;
nodenum = 0;
while (printnode != NULL)
	{
	tmp = printnode->next;
	printnode = tmp;
	nodenum++;
	}
return (nodenum);
}
