#include "main.h"
/**
 * _sqrt_recursion - returns square root of a number
 * @n:number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
int i;
i = 1;
if (n <= 0)
	return (-1);
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
if (i == n / 2)
	return (-1);
if ((i *i) == n)
	return (i);
return (sqr(i + 1, n));
}
