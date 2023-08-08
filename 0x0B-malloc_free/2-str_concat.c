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
/* return 0 if string is NULL or empty */
if (s == NULL)
	{
	return (0);
	}
/* return length of string */
while (*(s + i) != '\0')
	{
	i++;
	}
return (i);
}

/**
 * storechar - stores a string to a memory location
 * @s: pointer to string to be stored
 * @l: poointer to destination location
 * Return: none
 */
void storechar(char *s, char *l)
{
int i;
i = 0;
/* store from s to l till '\0' */
while (*(s + i) != '\0')
	{
	*(l + i) = *(s + i);
	i++;
	}
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
char *temp;
unsigned int length, len1, len2;
length = 0;
len1 = 0;
len2 = 0;
if (s1 != NULL)
	{len1 = findlen(s1); }
if (s2 != NULL)
	{len2 = findlen(s2); }
if (len1 != 0 || len2 != 0)
	length = len1 + len2;
if (length == 0)
	{
	newstr = malloc(1 * sizeof(char));
	if (newstr == NULL)
		{
		return (NULL);
		}
	*newstr = '\0';
	return (newstr);
	}
newstr = malloc(sizeof(char) * (length + 1));
if (newstr == NULL)
	{return (NULL); }
/* s1 not empty but s2 is*/
if (len1 >= 1 && len2 == 0)
	{storechar(s1, newstr); }
/* s1 empty but s2 points to char/s */
else if (len1 == 0 && len2 >= 1)
	{storechar(s2, newstr); }
else
	{
	storechar(s1, newstr);
	temp = newstr + len1;
	storechar(s2, temp);
	}
return (newstr);
}
