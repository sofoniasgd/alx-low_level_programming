#include<stdlib.h>
#include<stddef.h>
#include<stdio.h>
#include "main.h"
/**
 * findlen - finds length of a string
 * @s: pointer to string
 * Return: length of the string
 */
unsigned int findlen(char *s)
{
unsigned int i;
i = 0;
if (*s == '\0')
	{
	return (1);
	}
while (*(s + i) != '\0')
	{
	i++;
	}
return (i);
}

/**
 * str_concat - allocates new memory location containing 's1','s2'
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: pointer to the new memory location with s1+s2
 */

char *str_concat(char *s1, char *s2)
{
char *newstr;
unsigned int i, j, length;
length = 0;
if (s1 == NULL)
	length += 1;
if (s2 == NULL)
	length += 1;
if (length == 2)
	{
	newstr = malloc(1 * sizeof(char));
	if (newstr == NULL)
		{
		return (NULL);
		}
	else
		{
		*newstr = '\0';
		return (newstr);
		}
	}
length = 0;
length += findlen(s1);
length += findlen(s2);
/* printf("%i\n", length); */
newstr = malloc(sizeof(char) * length);
if (newstr == NULL)
	{return (NULL); }
i = 0;
while (*(s1 + i) != '\0')
	{
	*(newstr + i) = *(s1 + i);
	i++;
	}
j = 0;
/* printf("i- %i\n", i); */
while (*(s2 + j) != '\0')
	{
	*(newstr + j + i) = *(s2 + j);
	j++;
	}
return (newstr);
}
