#include "search_algos.h"
#include<math.h>

/**
 * jump_search - uses jump search to search for a value
 * @array: array pointer
 * @size: size of array
 * @value: valuse to be searched
 * Return: index of value(if found), -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t block, i = 0, j, start, end;

	if (array == NULL || value == NULL || array[0] > value)
		return (-1);
	block = sqrt(size);
	/* begin jump */
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		i += block;
	}
	start = i - block;
	end = (i > size) ? (size - 1) : i;
	printf("Value found between indexes [%li] and [%li]\n", start, i);
	/* start liner search on the block */
	for (j = start; j <= end; j++)
	{
		printf("Value checked array[%li] = [%i]\n", j, array[j]);
		if (array[j] == value)
			return ((int)j);
	}
	return (-1);
}
