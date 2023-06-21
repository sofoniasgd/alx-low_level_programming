#include "main.h"
/**
 * times_table - prints times table
 * Return: none
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9 ; i++)
{
for (j = 0; j <= 9; j++)
{
if (j != 9)
{
if (i * (j + 1) >= 10 && (i * j) < 10)
{
_putchar((i * j) + 48);
_putchar(44);
_putchar(32);
}
else if (i * (j + 1) >= 10 && (i * j) >= 10)
{
_putchar(((i * j) / 10) + 48);
_putchar(((i * j) % 10) + 48);
_putchar(44);
_putchar(32);
}
else
{
_putchar((i * j) + 48);
_putchar(44);
_putchar(32);
_putchar(32);
}}
else
{
if ((i * j) >= 10)
{
_putchar(((i * j) / 10) + 48);
_putchar(((i * j) % 10) + 48);
}
else
{
_putchar((i * j) + 48);
}}}
_putchar(10);
}}
