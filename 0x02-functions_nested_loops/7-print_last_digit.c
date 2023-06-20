#include "main.h"

/**
 * print_last_digit - prints last digit of argument
 * @x: passed int value
 * Return: last digit of argument
 */
int print_last_digit(int x)
{
if (x < 0)
{
x = x * -1;
}
x = x % 10;
_putchar(x + 48);
return (x);
}
