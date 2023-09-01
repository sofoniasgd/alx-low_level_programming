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
 * set_bit - sets bit of n at given index
 * @n: number
 * @index: index
 * Return: 1 if it worked, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
int i;
unsigned long int newnum, num, powerr;
char *bin;
/* any addition to unsigned long int max will go off-limit */
if (*n == ULONG_MAX || index > 63)
	return (-1);
/*create bit array, handle NULL and initialize with zero*/
bin = malloc(64 * sizeof(char));
if (bin == NULL)
	return (-1);
for (i = 0; i < 64; i++)
	bin[i] = '0';
num = *n;
for (i = 63; i >= 0; i--)
	{
	powerr = two_n(i);
	if (num >= powerr)
		{
		bin[i] = '1';
		num -= powerr; }
	}
/* initialize new number to zero and set bit at index to 1*/
newnum = 0;
bin[index] = '1';
/* rebuild the number from the bit array */
for (i = 0; i <= 63; i++)
	{
	if (bin[i] == '1')
		newnum += two_n(i);
	}
/* assign newnumber to pointer n after freeing previous malloc */
*n = newnum;
return (1);
}
