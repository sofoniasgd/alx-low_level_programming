#include "function_pointers.h"
#include<stddef.h>

/**
 * array_iterator - executes a function from parameter
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 * Return: none
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;

if (action == NULL || array == NULL || size == 0)
	{
	return;
	}
for (i = 0; i < (int)size; i++)
	{
	action(array[i]);
	}
}
