#include "main.h"
/**
 * _atoi - Convert a string to an integer.
 * @str: The string to be converted.
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
	int result = 0, sign = 1;

	while (*s == ' ' || *s == '\t')
	{
		s++;
	}
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (sign * result);
}
