#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
/**
 * print_list - prints elements of a linked list
 * @h: list_t pointer to head
 * Return: number od nodes
 */

size_t print_list(const list_t *h)
{
const list_t *printnode, *tmp;
unsigned int nodenum;
if (h == NULL)
	return (0);
printnode = h;
nodenum = 0;
while (printnode != NULL)
	{
	if (printnode->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", printnode->len, printnode->str);

	tmp = printnode->next;
	printnode = tmp;
	nodenum++;
	}
return (nodenum);
}
