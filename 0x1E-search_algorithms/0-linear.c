#include "search_algos.h"

/**
 * linear_search - linear search implementation
 * @array: pointer to array
 * @size: size of array
 * @value: value to be searched
 * Return: index of value if found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
