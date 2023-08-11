#include "main.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include<string.h>

/**
 * _realloc - reallocates memory block from src to dest
 * @ptr: pointer to source memory block
 * @old_size: size of source memory block in bytes
 * @new_size: size of destination memory block in bytes
 * Return: pointer to reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *newptr;
int lengthcpy;

if (new_size == old_size)
	{
	return (ptr);
	}
if (ptr == NULL)
	{
	newptr = malloc(new_size);
	if (newptr == NULL)
		{
		return (NULL);
		}
	return (newptr);
	}
/* in this case the call is equivalent to free(ptr) */
if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}
/* copy length => greater of source or destination*/
if (new_size > old_size)
	lengthcpy = old_size;
else if (new_size < old_size)
	lengthcpy = new_size;
newptr = malloc(new_size);
if (newptr == NULL)
	{
	return (NULL);
	}
/* hope i can use memcpy for the reallocation */
memcpy(newptr, ptr, lengthcpy);
free(ptr);
return (newptr);
}
