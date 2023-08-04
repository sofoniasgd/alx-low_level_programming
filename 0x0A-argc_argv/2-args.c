#include<stdio.h>
/**
 * main - prints all arguments it recieves
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
printf("%s\n", argv[0]);
if (argc > 1)
{
int i;

for (i = 1; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
}
return (0);
}
