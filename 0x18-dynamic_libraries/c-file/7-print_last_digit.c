#include "main.h"

/**
 * print_last_digit - prints last digit of argument
 * @x: passed int value
 * Return: last digit of argument
 */
int print_last_digit(int x)
{
x = x % 10;
if (x < 0)
{
x = x * -1;
}
_putchar(x + 48);
return (x);
}
