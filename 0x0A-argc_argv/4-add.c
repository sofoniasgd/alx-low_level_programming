#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * main - prints product of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
if (argc >= 2)
	{
	int sum, count, flag, i, tmp;
	char *st;

	flag = 1;
	for (count = 1; count < argc; count++)
		{
		i = 0;
		st = argv[count];
		while (*(st + i) != '\0')
			{
			if (*(st + i) > '9' || *(st + i) < '0')
				{
				flag = 0;
				}
			i++;
			}
		}
	if (flag == 0)
		{
		printf("Error\n");
		return (1);
		}
	else
		{
		for (count = 1; count < argc; count++)
			{
			tmp = atoi(argv[count]);
			sum = sum + tmp;
			}
		printf("%i\n", sum);
		}

	}
if (argc == 1)
	{
	printf("%i\n", 0);
	}
return (0);
}
