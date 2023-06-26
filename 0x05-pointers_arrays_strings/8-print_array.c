#include<stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of array
 * @a: pointer variable
 * @n: number of elements to print
 * Return: none
 */

void print_array(int *a, int n)
{
	int i;
	if (n > 0 )
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", *(a + i));
			if (i == (n - 1))
				printf("\n");
			else
				printf(", ");
		}
	}
	else
	{
	printf("\n");
	}
}
