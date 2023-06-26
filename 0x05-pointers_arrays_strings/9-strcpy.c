#include "main.h"

/**
 * _strcpy - copies string from src to dest
 * @dest: destination pointer
 * @src: source pointer
 * Return: pointer for destination
 */

char *_strcpy(char *dest, char *src)
{
int i;
char *p;
i = 0;
p = dest;

while (*(src + i) != '\0')
{
	*(dest + i) = *(src + i);
	i++;
}
*(dest + i) = '\0';
return (p);
}
