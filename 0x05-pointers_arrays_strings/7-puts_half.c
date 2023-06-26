#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string pointer
 *
 * Return: none
 */

void puts_half(char *str)
{
int len, i, j, index;
len = 0;
i = 0;
while (*(str + i) != '\0')
{
	len++;
	i++;
}
index = len - (len / 2);
for (j = index; j < len; j++)
{
	_putchar(*(str + j));
}
_putchar(10);
}
