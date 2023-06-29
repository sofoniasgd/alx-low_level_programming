#include "main.h"
#include<stdio.h>
/**
 *_strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
int lend, lens, i, j;

lend = length(dest);
/* printf("length of dest - %d\n", lend); */
lens = length(src);
/* printf("length of src - %d\n", lens);*/
j = 0;

for (i = lend; i < (lend + lens); i++)
	{
	*(dest + i) = *(src + j);
	j++;
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
