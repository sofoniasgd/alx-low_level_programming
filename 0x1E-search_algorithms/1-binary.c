#include "search_algos.h"
#include <math.h>

/**
 * print_array - prints arrays using start and end pointer
 * @array: pointer to array
 * @start: start index
 * @end: end index
 * Return: none
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
 * binary_search - searches for a value using the Binary search algorithm
 * @array: pointer to sorted int array
 * @size: ssize of array
 * @value: value to be searched
 * Return: index at which value is found (-1) otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	/* set left and right markers */
	size_t L = 0, R = (size - 1), diff = 0;

	if (array == NULL)
		return (-1);
	if (sizeof(array) == 1 && array[0] == value)
		return (0);
	else if (sizeof(array) == 1 && array[0] != value)
		return (-1);
	printf("Searching in array: ");
	print_array(array, L, R);
	while (L < R)
	{
		diff = (L + R) / 2;
		if (array[diff] < value)
			L = (diff + 1);
		else if (array[diff] > value)
			R = (diff - 1);
		else
			return (diff);
		printf("Searching in array: ");
		print_array(array, L, R);
		if ((L == R) && (array[R] == value))
			return (L);
	}
	return (-1);
}
