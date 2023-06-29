#include "main.h"
#include<stdio.h>

/**
 * _strncpy - copies one string into another
 * @dest: destination string
 * @src: source string
 * @n: max number of bytes to copy
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
int lend, lens, i, j;

lend = length(dest);
/* printf("length of dest - %d\n", lend); */
lens = length(src);
/* printf("length of src - %d\n", lens);*/
j = 0;
if (lend >= lens)
{
if (lens <= n)
{
for (i = 0; i < lens; i++)
	{
	*(dest + i) = *(src + i);
	j++;
	}
for (i = j; i < n; i++)
{
*(dest + j) = '\0';
}

}
else
{
for (i = 0; i < n; i++)
	{
	*(dest + i) = *(src + i);
	}

}
}
else
{

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
