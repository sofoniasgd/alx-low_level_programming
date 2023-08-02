#include "main.h"

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
/**
 * print_number - prints an int using putchar
 * @n: passed int value
 * Return: none
 */
void print_number(int n)
{
int s, num, len, i, d;
len = 0;
num = n;
d = 1;
/* if n is -ve, flip it and print - */
if (num < 0)
{
num = num * -1;
_putchar(45);
}
if (n == 0)
{
_putchar(48);
}
/* finds the length if the int n */
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
/* prints n */
for (i = len; i >= 1; i--)
{
s = 0;
if (len == 10)
{
s = num / power(i - 1);
_putchar(s + 48);
}
else
{
s = (num % power(i)) / power(i - 1);
_putchar(s + 48);
}
}
}
