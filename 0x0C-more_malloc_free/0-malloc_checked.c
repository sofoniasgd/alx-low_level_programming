#include "main.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *mall;
mall = malloc(b);
if (mall == NULL)
	{
	exit(98);
	}
return (mall);
}
