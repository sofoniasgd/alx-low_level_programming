#include "variadic_functions.h"
#include<stdio.h>
#include<stddef.h>
#include<stdarg.h>

/**
 * print_all - prints anything
 * @format: format specifier string
 * Return: none
 */

void print_all(const char * const format, ...)
{
int i, intp, charp;
double floatp;
char *str;
va_list arguments;
i = 0;
va_start(arguments, format);
while (*(format + i) != '\0')
	{
	switch (*(format + i))
	{
		case 'c':
		charp = va_arg(arguments, int);
		printf("%c", charp);
		flag = 1;
		break;
		/* char promoted to int when passing*/
		case 'i':
		intp = va_arg(arguments, int);
		printf("%i", intp);
		flag = 1;
		break;
		/* float promoted to double */
		case 'f':
		floatp = va_arg(arguments, double);
		printf("%f", floatp);
		flag = 1;
		break;
		/* if string is NULL print (nil) */
		case 's':
		str = va_arg(arguments, char *);
		flag = 1;
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		break;
		default:
		flag = 0;
	}
	if (flag == 1 && *(format + i + 1) != '\0')
		printf(", ");
	i++; }
va_end(arguments); }
