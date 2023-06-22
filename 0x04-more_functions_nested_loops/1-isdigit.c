#include "main.h"

/**
 * _isdigit - checks if input is a digit
 * @c: passed int value
 * Return: 1 if c is a digit, 0 if lowercase
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
