#include<stdio.h>

/**
 * main - prints two two digit numbers
 *
 * Return: always 0
 */
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
	for (j = 0; j < 100; j++)
	{
		if (j > i)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(32);
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			if (i == 98 && j == 99)
			{
				continue;
			}
			else
			{
				putchar(44);
				putchar(32);
			}
		}
	}
}

putchar(10);
return (0);
}
