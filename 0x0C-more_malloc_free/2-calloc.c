#include "main.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of the elements
 * Return: pointer to allocated mempry
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *str;
char *ptr;
unsigned int i, totallength;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
totallength = size * nmemb;
str = malloc(totallength);
if (str == NULL)
{return (NULL); }
ptr = (char*)str;
for (i = 0; i < totallength; i++)
	{
	*(ptr + i) = 0;
	}
return (str);
}
