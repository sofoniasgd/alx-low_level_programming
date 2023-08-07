#include<stdlib.h>
#include<stddef.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes with 'c'
 * @size: size of allocated memory
 * @c: char to populate allocated memory with
 * Return: pointer to start of allocated memory, NULL if failure
 */

char *create_array(unsigned int size, char c)
{
char *ar = malloc(size * sizeof(char));
unsigned int i;
if (size == 0 || ar == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
	{
	*(ar + i) = c;
	}
return (ar);
}
