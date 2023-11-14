#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string pointer
 *
 * Return: int length of the string
 */

int _strlen(char *s)
{
int len, i;
len = 0;
i = 0;
while (*(s + i) != '\0')
{
	len++;
	i++;
}
return (len);
}
