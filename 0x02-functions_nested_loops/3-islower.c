#include "main.h"

/**
 * _islower - checks if argument is lower case
 * @c: passed int value
 * Return: 1 if argument is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
