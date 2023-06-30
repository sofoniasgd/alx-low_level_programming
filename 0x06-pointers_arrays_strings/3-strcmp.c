#include "main.h"
#include<stdio.h>

/**
 * _strcmp - compares one string to another
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
int lens1, lens2, ret, i, len;
ret = 0;
lens1 = length(s1);
/* printf("length of dest - %d\n", lend); */
lens2 = length(s2);
/* printf("length of src - %d\n", lens);*/
if (lens1 > lens2)
	len = lens1;
else if (lens1 < lens2)
	len = lens2;
for (i = 0; i < len; i++)
	{
	if (*(s1 + i) != *(s2 + i))
		{
		ret = *(s1 + i) - *(s2 + i);
		break;
		}
	}
/*
*if (lens1 > lens2)
*	{
*	if (ret < 0)
*		{
*		ret *= -1;
*		}
*	}
*else if (lens1 == lens2)
*	{
*	ret = 0;
*	}
*else
*	{
*	if (ret > 0)
*		{
*		ret *= -1;
*		}
*	}
*/
return (ret);
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
