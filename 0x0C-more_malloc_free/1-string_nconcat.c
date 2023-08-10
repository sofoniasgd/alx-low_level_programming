#include "main.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

/**
 * length - finds length of a string
 * @s: pointer to string
 * Return: number of length
 */

int length(char *s)
{
int i;
i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2:pointer to second string
 * @n: bytes of second string to concatenate
 * Return: pointer to new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int lens1, lens2, totallength, i, secondlen;
secondlen = 0;
totallength = 0;
/* finding length of s1 and s2 strings */
if (s1 == NULL)
	lens1 = 0;
else
	lens1 = length(s1);
if (s2 == NULL)
	lens2 = 0;
else
	lens2 = length(s2);
totallength += lens1;
if (n >= lens2)
	secondlen = lens2;
else
	secondlen = n;

totallength += secondlen + 1;
if (totallength == 0)
	{return (NULL); }
str = malloc(sizeof(char) * (totallength));
if (str == NULL)
{return (NULL); }

if (s1 == NULL)
	lens1 = 0;
else
	lens1 = length(s1);
for (i = 0; i < lens1; i++)
	{
	*(str + i) = *(s1 + i);
	}
for (i = lens1; i < (lens1 + secondlen); i++)
	{
	*(str + i) = *(s2 + (i - lens1));
	}
*(str + (totallength - 1)) = '\0';
return (str);
}
