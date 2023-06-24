#include "main.h"

/**
 * print_number - prints an int using putchar
 * @n: passed int value
 * Return: 1 if n is upper, 0 if lowercase
 */

void print_number(int n)
{
int s, num, len, i, d;
len = 0;
num = n;
d = 1;
if (num < 0)
{
num = num * -1;
_putchar(45);
}
if (n == 0)
{
_putchar(48);
}
for (i = 0; i < 10; i++)
{

if (num >= d)
{
len++;
}
else
{
continue;
}
d = d * 10;
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
