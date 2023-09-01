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
if (n == 64)
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
int i, j, ret, bit;
unsigned long int twon, powerr;
for (i = 64; i >= 0; i--)
	{
	twon = two_n(i);
	if (n >= twon || n == ULONG_MAX)
		break;
	}
ret = 0;
bit = 0;
j = i;
if (index > (unsigned int)i)
	return (0);
for (j = i; j >= 0; j--)
	{
	powerr = two_n(j);
	if (n == ULONG_MAX)
		{
		bit = 1;
		n = 0; }
	else if (n >= powerr)
		{
		bit = 1;
		n -= powerr; }
	else
		bit = 0;
	if (index == (unsigned int)j)
		ret = bit;
	}
return (ret);
}
