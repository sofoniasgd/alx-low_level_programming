#include "main.h"
#include<stddef.h>
/**
 * _strspn - a function that returns a length of matching chars
 * @s: source location pointer
 * @accept: character list to be searched
 * Return: length of occured chars or NULL
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j, match, flag;
unsigned int len;
i = 0;
match = 0;
flag = 0;
len = 0;
while (*(s + i) != '\0')
	{
	j = 0;
	match = 0;
	while (*(accept + j) != '\0')
		{
		if (*(accept + j) == *(s + i))
			{
			match = 1;
			}
		j++;
		}
	if (match == 0 && flag == 0)
		{}
	else if (match == 1 && flag == 0)
		{
		flag = 1;
		len++;
		}
	else if (match == 1 && flag == 1)
		{
		len++;
		}
	else if (match == 0 && flag == 1)
		{
		break;
		}
	i++;
	}
return (len);
}
