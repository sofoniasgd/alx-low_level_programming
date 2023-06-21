#include "main.h"

/**
 * jack_bauer - prints every minute  of day
 *
 * Return: none
 */
void jack_bauer(void)
{
int i, j, tmp1, tmp2, tmp3, tmp4;
for (i = 0; i < 60; i++)
{
for (j = 0; j < 60; j++)
{
tmp1 = (i / 10) + 48;
tmp2 = (i % 10) + 48;
_putchar(tmp1);
_putchar(tmp2);
_putchar(58);
tmp3 = (j / 10) + 48;
tmp4 = (j % 10) + 48;
_putchar(tmp3);
_putchar(tmp4);
_putchar(10);
}
}
}
