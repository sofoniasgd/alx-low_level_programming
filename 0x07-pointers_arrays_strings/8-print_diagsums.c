#include "main.h"
#include<stdio.h>
/**
 * print_diagsums - prints sums of diagonal values of 2d array
 * @a: pointer to first array location
 * @size: size of array nxn
 * Return: none
 */
void print_diagsums(int *a, int size)
{
int sum1, sum2, tmp, i, sizeup, sizedown;
sum1 = 0;
sum2 = 0;
sizeup = size + 1;
sizedown = size - 1;

for (i = 0; i < size; i++)
	{
	tmp = sizeup *i;
	sum1 += *(a + tmp);
	}
for (i = 1; i <= size; i++)
	{
	tmp = sizedown *i;
	sum2 += *(a + tmp);
	}
printf("%i, %i\n", sum1, sum2);
}
