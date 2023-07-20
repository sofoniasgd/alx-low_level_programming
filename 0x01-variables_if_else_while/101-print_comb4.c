#include<stdio.h>

/**
 * main - prints three digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 10; k++)
		{
			if (k > j && j > i)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
				if (i == 7 && j == 8 && k == 9)
				{
					break;
				}
				else
				{
				putchar(44);
				putchar(32);
				}
			}
		}
	}
}
putchar(10);
return (0);
}
