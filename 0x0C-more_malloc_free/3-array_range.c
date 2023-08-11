#include "main.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

/**
 * array_range - allocates memory for an array of integers
 * @min: maximum value
 * @max: minimum value
 * Return: pointer to allocated mempry
 */

int *array_range(int min, int max)
{
int *ptr;
int i, length;
/* checking for inconsistent arguments */
if (min > max)
	{
	return (NULL);
	}
/* allocating memory and ckecking for failure */
length = (max - min) + 1;
ptr = malloc(sizeof(int) * length);
if (ptr == NULL)
	{
	return (NULL);
	}
/* writing the array in ascending order */
for (i = 0; i < length; i++)
	{
	*(ptr + i) = min + i;
	}
return (ptr);
}
