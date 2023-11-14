#include "main.h"

/**
 * print_most_numbers - prints integers 0-9 except 2 & 4
 *
 * Return: none
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i == 2 || i == 4)
continue;
else
_putchar(i + 48);
}
_putchar(10);
}

