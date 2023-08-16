#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to printable text
 * @f: function pointer
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
