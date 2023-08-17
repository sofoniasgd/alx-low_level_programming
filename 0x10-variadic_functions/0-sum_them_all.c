#include<stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - variadic function to summ all azrguments
 * @n: argument count
 * Return: summ of all arguments
 */
int sum_them_all(const unsigned int n, ...)
	{
	int s;
	unsigned int i;
	va_list arguments;

	if (n == 0)
		{
		return (0);
		}

	s = 0;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
		{
		s += va_arg(arguments, int);
		}
	va_end(arguments);
	return (s);
	}
