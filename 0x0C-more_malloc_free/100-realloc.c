#include "main.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

/**
 * _realloc - allocates memory block
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to allocated mempry
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *str;
int i, j;
i = old_size;
j = new_size;
i += j;
if (new_size == 0 && ptr != NULL)
{
return (NULL);
}
return (str);
}
