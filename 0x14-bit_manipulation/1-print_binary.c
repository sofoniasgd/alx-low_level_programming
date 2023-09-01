#include "main.h"
#include<stdio.h>
#include<stddef.h>
#include<limits.h>
#include<stdlib.h>
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
	return (1);
if (n == 64)
	return (ULONG_MAX);
for (i = 1; i <= n; i++)
	{
	result *= 2;
	}
return (result);
}

/**
 * print_binary - prints binary representation of n
 * @n: number
 * Return: none
 */
void print_binary(unsigned long int n)
{
int i, j, istart;
unsigned long int powerr;
istart = 0;


for (i = 63; i >= 0; i--)
	{
	powerr = two_n(i);
	if (n >= powerr)
		{
		istart = i;
		break; }
	}
for (j = istart; j >= 0; j--)
	{
	powerr = two_n(j);
	if (n >= powerr)
		{
		n -= powerr;
		_putchar(49);
		}
	else
		_putchar(48);
	}
}
