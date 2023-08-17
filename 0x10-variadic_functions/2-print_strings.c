#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
/**
 * print_strings - prints strings and separator in between
 * @separator: string to print inbetween arguments
 * @n: number of arguments
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list arguments;

if (n == 0)
	{
	va_end(arguments);
	printf("\n");
	exit(0);
	}
va_start(arguments, n);
for (i = 0; i < n; i++)
	{
	str = va_arg(arguments, char *);
	if (str == NULL)
		{
		printf("(nil)");
		}
	else
		{
		printf("%s", str);
		}
	if (separator == NULL || i == (n - 1))
		{
		}
	else
		{
		printf("%s", separator);
		}
	}
va_end(arguments);
printf("\n");
}
