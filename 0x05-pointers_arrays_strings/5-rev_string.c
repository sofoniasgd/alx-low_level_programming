#include "main.h"

/**
 * rev_string - reverses a string inplace
 * @s: string pointer
 *
 * Return: none
 */

void rev_string(char *s)
{
int len, i, j, tmp, index;
len = 0;
i = 0;
while (*(s + i) != '\0')
{
	len++;
	i++;
}
index = len - 1;
for (j = 0; j < (len / 2); j++)
{
	tmp = *(s + j);
	*(s + j) = *(s + (index - j));
	*(s + (index - j)) = tmp;
}
}
