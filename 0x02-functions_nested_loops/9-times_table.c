#include "main.h"

/**
 * times_table - prints times table
 *
 * Return: none
 */
void times_table(void)
{
int i, j, tmp1, tmp2, tmp3;
for (i = 0; i <= 9 ; i++)
{
for (j = 0; j <= 9; j++)
{
tmp1 = (i *j);
tmp2 = (tmp1 / 10) + 48;
tmp3 = (tmp1 % 10) + 48;
if (j != 9)
{
if (tmp1 >= 10)
{
_putchar(8);
_putchar(tmp2);
_putchar(tmp3);
_putchar(44);
_putchar(32);
_putchar(32);
}
else
{
_putchar(tmp1 + 48);
_putchar(44);
_putchar(32);
_putchar(32);
}
}
else
{
if (tmp1 >= 10)
{
_putchar(8);
_putchar(tmp2);
_putchar(tmp3);
_putchar(10);
}
else
{
_putchar(tmp1 + 48);
_putchar(10);
}
}
}
}
}
