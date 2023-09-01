#include "main.h"
#include<stdio.h>
#include<stddef.h>
#include<limits.h>

/**
 * two_n - calculates 2 raised to n
 * @n: exponent of 2
 * Return: result of 2^n
 */
unsigned long int two_n(int n)
{
int i;
unsigned long int result;
result = 1;
/* return 1 when n=0 -> 2^0=1 */
if (n == 0)
	return (result);
if (n == 63)
	return (ULONG_MAX);
for (i = 1; i <= n; i++)
	{
	result *= 2;
	}
return (result);
}

/**
 * get_bit - retrieves bit of n at given index
 * @n: number
 * @index: index
 * Return: bit at index of n
 */
int get_bit(unsigned long int n, unsigned int index)
{
int i, j, ret;
unsigned long int twon, powerr;
for (i = 63; i >= 0; i--)
	{
	twon = two_n(i);
	if (n >= twon)
		break;
	}
i++;
ret = 0;
j = i;
if (index > (unsigned int)i)
	return (-1);
for (j = i; j >= 0; j--)
	{
	powerr = two_n(j);
	if (n >= powerr)
		{
		ret = 1;
		n -= powerr; }
	else
		ret = 0;
	if (index == (unsigned int)j)
		return (ret);
	}
return (-1);
}
