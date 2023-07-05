#include "main.h"
/**
 * _sqrt_recursion - returns square root of a number
 * @n:number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
int i;
i = n / 2;
if (n == 1)
	return (1);
return (sqr(i, n));
}
/**
 * sqr - calculate square root
 * @i: potential square root
 * @n: number
 * Return: square root
 */
int sqr(int i, int n)
{
if ((i *i) == n)
	return (i);
if (i == 0)
	return (-1);
return (sqr(--i, n));
}
