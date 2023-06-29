#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array pointer
 * @n: number of elements
 * Return: none
 */

void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0; i < (n / 2); i++)
	{
	temp = *(a + i);
	*(a + i) = *(a + (n - 1 - i));
	*(a + (n - 1 - i)) = temp;
	}
}
