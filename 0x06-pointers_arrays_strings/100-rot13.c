#include "main.h"
/**
 * *rot13 - does the ROT13 cipher in an input string
 * @n: pointer to start of string
 * Return: *n pointer to start of string
 */
char *rot13(char *n)
{
char look[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char set[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklM";
int i, j;
j = 0;
while (*(n + j) != '\0')
{
	for (i = 0; i < 51; i++)
	{
		if (*(n + j) == look[i])
		{
			*(n + j) = set[i];
		}
	}
j += 1;
}
return (n);
}
