#include "search_algos.h"
#include <math.h>

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
	size_t L = 0, R = (size - 1), diff = 0, i;

	if (!array)
		return (-1);
	printf("Searching in array: ");
	for (i = L; i < R; i++)
		printf("%i,", array[i]);
	printf("%li\n", R);
	while (L <= R)
	{
		diff = (L + R) / 2;
		if (array[diff] < value)
			L += (diff + 1);
		else if (array[diff] > value)
			R -= (diff - 1);
		else
			return (diff + L);
		printf("Searching in array: ");
		for (i = L; i < R; i++)
			printf("%i,", array[i]);
		printf("%li\n", R);
	}
	return (-1);
}
