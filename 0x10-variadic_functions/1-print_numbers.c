#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
/**
 * print_numbers - prints numbers and separator in between
 * @separator: string to print inbetween arguments
 * @n: number og arguments
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list arguments;

va_start(arguments, n);
if (n == 0)
	{
	va_end(arguments);
	exit(0);
	}
for (i = 0; i < n; i++)
	{
	printf("%i", va_arg(arguments, int));
	if (separator == NULL)
		{}
	else
		{
		printf("%s", separator);
		}
	}
va_end(arguments);
printf("\n");
}
