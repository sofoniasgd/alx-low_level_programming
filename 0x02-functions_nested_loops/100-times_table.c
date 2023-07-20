#include "main.h"
void times_tablee(int n);
/**
 * print_times_table - prints times table
 * @n: size of the table
 * Return: none
 */
void print_times_table(int n)
{
if (n > 15 || n < 0)
{}
else
{
times_tablee(n);
}
}
/**
 * times_tablee - function to print the times table
 * @n: size of the table
 * return: none
 */
void times_tablee(int n)
{
int i, j, prod, nextprod;
for (i = 0; i <= n ; i++)
{
	for (j = 0; j <= n; j++)
	{
		if (j != n)/* not end of line */
		{
			prod = i * j;
			nextprod = i * (j + 1);
			/* X,__xx */
			if (prod < 10 && nextprod >= 10 && nextprod < 100)
			{
				_putchar((i * j) + 48);
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			/* XX,__xx */
			else if (prod >= 10 && prod < 100 && nextprod >= 10 && nextprod < 100)
			{
				_putchar(((i * j) / 10) + 48);
				_putchar(((i * j) % 10) + 48);
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			else if (prod >= 10 && prod < 100 && nextprod >= 100)/* XX,_xxx */
			{
				_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
				_putchar(44);
				_putchar(32);
			}
			else if (prod >= 100 && nextprod >= 100)
			{
				_putchar((prod / 100) + 48);
				_putchar((prod / 10) + 38);
				_putchar((prod % 10) + 48);
				_putchar(44);
				_putchar(32);
			}
			/* X,___x */
			else if (prod < 10 && nextprod < 10)
			{
				_putchar(prod + 48);
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(32);
			}
		}
		else/* end of line */
		{
			prod = i * j;
			/* XX */
			if (prod >= 10 && prod < 100)
			{
				_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			else if (prod >= 100)/* XXX */
			{
				_putchar(prod / 100 + 48);
				_putchar(prod / 10 + 38);
				_putchar(prod % 10 + 48);
			}
			/* X */
			else
			{
				_putchar(prod + 48);
			}
		}
	}
_putchar(10);
}
}
