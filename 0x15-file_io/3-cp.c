#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * main - custom cp implementation
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
/* wrong argument count */
if (ac != 2)
	{
	fprintf(stderr, "Usage: cp file_from file_to\n");
	exit (97); }

return (0);
}
