#include<stdlib.h>
#include<stddef.h>
#include<stdio.h>
#include "main.h"

/**
 * _strdup - allocates new memory location containing 'str'
 * @str: pointer to a string
 * Return: pointer to the new memory location
 */

char *_strdup(char *str)
{
char *newloc;
unsigned int i, j;
i = 0;
while (*(str + i) != '\0')
	{
	i++;
	}
newloc = malloc((i + 1) * sizeof(char));

if (newloc != NULL)
	{
	for (j = 0; j <= i; j++)
		{
		*(newloc + j) = *(str + j);
		}
	}
return (newloc);
}
