#include "main.h"
#include<stdio.h>
/**
 * _strchr - a function that locates a character in a string
 * @s: source location pointer
 * @c: character to be searched
 * Return: pointer to first occurence or NULL
 */

char *_strchr(char *s, char c)
{
unsigned int i;
char *ret = NULL;
i = 0;
while (*(s + i) != '\0')
	{
	if (*(s + i) == c)
		{
		ret = (s + i);
		break;
		}
	else
		{
		}
	i++;
	}
if (ret != NULL)
	return (ret);
else
	return (NULL);
}
