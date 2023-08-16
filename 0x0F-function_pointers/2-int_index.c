#include<stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to searched function
 * Return: index of array or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
/* checking for NULL pointers */
if (cmp == NULL || array == NULL)
	{
	return (0);
	}
/* if size is less than 0 return -1 */
if (size <= 0)
	{
	return (-1);
	}
/* LOOP-> call cmp with array element till cmp returns 1 */
/* meaning array[i] is a match, return array[i] */
for (i = 0; i < size; i++)
	{
	/* matching element found in cmp */
	if (cmp(array[i]) == 1)
		{
		return (i);
		}
	/* end of array */
	if (i == (size - 1))
		{
		return (-1);
		}
	}
return (0);
}
