#include "search_algos.h"

/**
 * interpolation_search - searches for an index using interpolation algorithm
 * @array: array pointer
 * @size: size of array
 * @value: value of the wanted index
 * Return: index of value, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high, low, pos;

	if (array == NULL || array[0] > value)
		return (-1);

	low = 0;
	high = size - 1;
	/* interpolate and check */
	while ((high - low) > 1)
	{
		pos = low +
			(((double)(high - low) / (array[high] - array[low])) *
			 (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%li] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%li] = [%i]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
	}
	return (-1);
}
