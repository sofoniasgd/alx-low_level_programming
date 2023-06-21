#include "main.h"
#include<stdio.h>

/**
 * print_to_98 - prints natural numbers till 98
 * @x: begining int value
 *
 * Return: no return
 */
void print_to_98(int n)
{
int i;
if (n >= 98)
{
for (i = n; i > 98; i--)
{
printf("%i, ", i);
}
printf("%i\n", 98);
}
else if (n < 98)
{
for (i = n; i < 98; i++)
{
printf("%i, ", i);
}
printf("%i\n", 98);
}
}
