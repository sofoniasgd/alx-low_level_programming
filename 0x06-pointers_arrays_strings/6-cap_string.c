#include "main.h"
#include<stdio.h>

/**
 * cap_string - capitalize each word
 * @s: pointer to string
 * Return: pointer to the string
 */
char *cap_string(char *s)
{
int i, len;
i = 0;
len = length(s);
for (i = 0; i < len; i++)
{
if (*(s + i) >= 97 && *(s + i) <= 122)
	{
	if (separators(*(s + (i - 1))) == 1 && i != 0)
		{
		*(s + i) -= 32;
		}
	else if (i == 0)
		{
		*(s + i) -= 32;
		}
	}
}
return (s);
}

/**
 * separators - checks for separator characters
 * @c: character to be checked
 *
 * Return: 0 if not found, 1 if found
 */
int separators(char c)
{
int ret;
if (c == ' ' || c == '	' || c == '\0' || c == ',' || c == ';')
{
	ret = 1;
}
else if (c == '.' || c == '!' || c == '?' || c == '"' || c == '(')
{
	ret = 1;
}
else if (c == ')' || c == '{' || c == '}' || c == 10)
{
	ret = 1;
}
else
{
	ret = 0;
}
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
