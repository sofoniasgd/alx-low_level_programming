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
	size_t block, i = 0, j;

	if (array == NULL)
		return (-1);
	block = sqrt(size);
	/* begin jump */
	while (1)
	{
		if (i > size || array[i] >= value)
		{
			printf("Value found between indexes [%li] and [%li]\n", (i - block), i);
			break;
		}
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		i += block;
	}
	/* start liner search on the block */
	for (j = (i - block); j <= i; j++)
	{
		if (j >= size)
			break;
		printf("Value checked array[%li] = [%i]\n", j, array[j]);
		if (array[j] == value)
			return ((int)j);
	}
	return (-1);
}
