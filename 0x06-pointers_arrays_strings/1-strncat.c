#include "main.h"
#include<stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: max number of bytes to concatenate
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
int lend, lens, i, j;

lend = length(dest);
/* printf("length of dest - %d\n", lend); */
lens = length(src);
/* printf("length of src - %d\n", lens);*/
j = 0;
if (lens >= n)
{
for (i = lend; i < (lend + n); i++)
	{
	*(dest + i) = *(src + j);
	j++;
	}
}
else
{
for (i = lend; i < (lend + lens); i++)
	{
	*(dest + i) = *(src + j);
	j++;
	}
}
return (dest);
}

/**
 * length - finds length of a string
 * @s: pointer to string
 * Return: number of length
 */

int length(char *s)
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
