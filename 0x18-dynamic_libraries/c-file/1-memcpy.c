#include "main.h"

/**
 * _memcpy - a test program that copies bytes from source to destination
 * @src: source location pointer
 * @dest: destination location pointer
 * @n: number of bytes to fill
 * Return: pointer to destination location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
	{
	*(dest + i) = *(src + i);
	}
return (dest);
}
