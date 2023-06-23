#include "main.h"
#include<limits.h>
/**
 * print_number - prints an int using putchar
 * @n: passed int value
 * Return: 1 if n is upper, 0 if lowercase
 */

void print_number(int n)
{
int s, num, len, i;
len = 0;
num = n;
if (num < 0)
{
num = num * -1;
_putchar(45);
}
for (i = 1; i < INT_MAX; i = i * 10)
{
if (num >= i)
len++;
else
continue;
}
for (i = len; i >= 1; i--)
{
s = (num % power(i)) / power(i - 1);
_putchar(s + 48);
}
}
/**
 * power - calculate power of ten
 * @c: exponent
 * Return: 10, 100, 1000,1 multiple of 10 power x
 */
int power(int c)
{
int ans, i;
ans = 1;
if (c == 0)
{
return (1);
}
else
{
for (i = 0; i < c; i++)
{
ans = ans * 10;
}
return (ans);
}
}
