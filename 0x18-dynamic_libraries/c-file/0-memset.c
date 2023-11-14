#include "main.h"

/**
 * _memset - a test program that fills uniform bytes on a memory section
 * @s: starting location pointer
 * @b: fill character
 * @n: number of bytes to fill
 * Return: pointer to starting location
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
	{
	*(s + i) = b;
	}
return (s);
}
