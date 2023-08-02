#include "main.h"
#include<stdio.h>
/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
/*printf("/0 /0\n");*/
	return (1);
}
if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) == '\0')
{
/*printf("/0 *\n");*/
	return (1);
}
if (*s1 == *s2)
{
/*printf("s1 = s2\n");*/
	return (1 * wildcmp((s1 + 1), (s2 + 1)));
}
if (*s2 == '*' && *(s2 + 1) == '*')
{
/*printf("s2=* -  *s2 + 1=*\n");*/
	return (1 * wildcmp(s1, (s2 + 1)));
}
if (*s2 == '*' && *s1 == *(s2 + 1))
{
/*printf("s2=* - *s1 == *s2 + 1\n");*/
	return (1 * wildcmp(s1, (s2 + 1)));
}
if (*s2 == '*' && *s1 != '\0')
{
/*printf("s2=* - *s1 != 0\n");*/
	return (1 * wildcmp((s1 + 1), s2));
}
else
{
/*printf("ELSE\n");*/
	return (0);
}
}
