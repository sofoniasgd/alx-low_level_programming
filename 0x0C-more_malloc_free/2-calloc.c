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
unsigned int i, j;
i = nmemb;
j = size;
i += j;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
return (str);
}
