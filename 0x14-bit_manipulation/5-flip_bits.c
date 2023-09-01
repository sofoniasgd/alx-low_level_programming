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
 * flip_bits - return number of bits to flip to get from n to m
 * @n: number1
 * @m: number 2
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i;
unsigned int counter;
unsigned long int powerr;
char *bin1, *bin2;
counter = 0;
/*create bit arrays bin1 & bin2, handle NULL and initialize with zero*/
bin1 = malloc(64 * sizeof(char));
if (bin1 == NULL)
	return (-1);
for (i = 0; i < 64; i++)
	bin1[i] = '0';
bin2 = malloc(64 * sizeof(char));
if (bin2 == NULL)
	return (-1);
for (i = 0; i < 64; i++)
	bin2[i] = '0';
/* populate the arrays with the binary representation of n and m */
for (i = 63; i >= 0; i--)
	{
	powerr = two_n(i);
	if (n >= powerr)
		{
		bin1[i] = '1';
		n -= powerr; }
	}
for (i = 63; i >= 0; i--)
	{
	powerr = two_n(i);
	if (m >= powerr)
		{
		bin2[i] = '1';
		m -= powerr; }
	}
for (i = 63; i >= 0; i--)
	{
	if ((bin1[i] ^ bin2[i]) == 1)
		counter++;
	}
return (counter);
}
