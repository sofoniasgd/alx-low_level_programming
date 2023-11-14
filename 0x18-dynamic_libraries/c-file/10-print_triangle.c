#include "main.h"

/**
 * print_triangle - prints a # triangle
 * @size: size of triangle
 * Return: none
 */
void print_triangle(int size)
{
int i, k, l;
if (size <= 0)
{
_putchar(10);
}
else
{
for (i = 1; i <= size; i++)
{
for (k = 0; k < (size - i); k++)
{
_putchar(32);
}
for (l = 1; l <= i ; l++)
{
_putchar(35);
}
_putchar(10);
}
}
}
