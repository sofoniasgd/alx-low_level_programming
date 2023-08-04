#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints product of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
if (argc == 3)
	{
	int prod;

	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", prod);
	return (0);
	}
printf("Error\n");
return (1);
}
