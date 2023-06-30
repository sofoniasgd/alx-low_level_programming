#include "main.h"
#include<stdio.h>

/**
 * string_toupper - converts lowercase letters to uppercase
 * @s: pointer to string
 * Return: pointer to the string
 */
char *string_toupper(char *s)
{
int i, len;
/*char *let;*/
i = 0;
len = length(s);
/* printf("length is %d\n", len);*/
for (i = 0; i < len; i++)
{
if (*(s + i) >= 'a' && *(s + i) <= 'z')
{
/* printf("changed letter- %c\n", *let);*/
*(s + i) -= 32;
}
else
{
continue;
}
}
return (s);
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
