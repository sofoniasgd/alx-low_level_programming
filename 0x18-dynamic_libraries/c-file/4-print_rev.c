#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: string pointer
 *
 * Return: none
 */

void print_rev(char *s)
{
int len, i, j;
len = 0;
i = 0;
while (*(s + i) != '\0')
{
	len++;
	i++;
}
for (j = len - 1; j >= 0; j--)
{
	_putchar(*(s + j));
}
_putchar(10);
}
