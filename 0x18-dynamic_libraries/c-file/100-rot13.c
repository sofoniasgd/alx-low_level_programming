#include "main.h"
/**
 * *rot13 - does the ROT13 cipher in an input string
 * @n: pointer to start of string
 * Return: *n pointer to start of string
 */
char *rot13(char *n)
{
char look[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char set[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;
j = 0;
i = 0;
while (*(n + j) != '\0')
{
	i = 0;
	while (look[i] != '\0')
	{
		if (*(n + j) == look[i])
		{
			*(n + j) = set[i];
			break;
		}
	i++;
	}
j++;
}
return (n);
}
