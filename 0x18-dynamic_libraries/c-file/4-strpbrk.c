#include "main.h"
#include<stdio.h>
/**
 * _strpbrk - searches string s with any of the chars in accept
 * @s: source location pointer
 * @accept: character list to be searched
 * Return: location of first occured chars or NULL
 */

char *_strpbrk(char *s, char *accept)
{
int j;
while (*s != '\0')
	{
	j = 0;
	while (*(accept + j) != '\0')
		{
		if (*(accept + j) == *s)
			{
			return (s);
			}
		j++;
		}
	s++;
	}
return (NULL);
}
