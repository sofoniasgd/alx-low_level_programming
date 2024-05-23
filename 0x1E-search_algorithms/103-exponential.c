#include "search_algos.h"

/**
 * print_array - prints arrays using start and end pointer
 * @array: pointer to array
 * @start: start index
 * @end: end index
 * Rturn: none
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	i = start;
	while (i < end)
	{
		printf("%i, ", array[i]);
		i++;
	}
	printf("%i\n", array[end]);
}

/**
 * exponential_search - uses exponential search algorithm
 * @array: array pointer(sorted)
 * @size: size of array
 * @value: value to find
 * Return: index of value if found, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t exp = 1, start, end, diff;

	if (array == NULL || array[0] > value)
		return (-1);

	/* begin exponential jump */
	while (exp < size)
	{
		if (array[exp] > value)
			break;
		printf("Value checked array[%li] = [%i]\n", exp, array[exp]);
		exp *= 2;
	}
	start = exp / 2;
	end = (exp >= size) ? (size - 1) : exp;
	printf("Value found between indexes [%li] and [%li]\n", (exp / 2), end);

	/* do binary search on the range */
	printf("Searching in array: ");
	print_array(array, start, end);
	while (start < end)
	{
		diff = (start + end) / 2;
		if (array[diff] < value)
			start = (diff + 1);
		else if (array[diff] > value)
			end = (diff - 1);
		else
			return (diff);
		printf("Searching in array: ");
		print_array(array, start, end);
	}
	return (-1);
}
