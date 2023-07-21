#include<stdio.h>
/**
 * main - prints sum of multiples of 3 or 5
 * Return: always 0
 */
int main(void)
{
int sum, i;
sum = 0;
for (i = 0; i < 1024; i++)
{
	if (i % 3 == 0 || i % 5 == 0)
	{
		sum += i;
	}
}
printf("%i\n", sum);
return (0);
}
