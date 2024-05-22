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
	size_t h, l, i;

	if (array == NULL || array[0] > value)
		return (-1);

	/* interpolate and check */

}

/**
 * interpolation - interpolation function to save space
 * @array: array pointer
 * @h:high index
 * @l: low index
 * @value: value we want the index of
 * Return: computed index
 */
size_t interpolation(int *array, size_t h, size_t l, int value)
{
	size_t index;

	index = l + (h - l) * ((value - array[l]) / (array[h] - array[l]));

	return (index);
}
