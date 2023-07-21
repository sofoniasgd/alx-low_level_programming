#include<stdio.h>
/**
 * main - prints first 50 fibonacci numbes
 * Return: always 0
 */
int main(void)
{
long pr2, pr1, prn, i;
pr1 = 1;
pr2 = 2;
printf("%li %li", pr1, pr2);
for (i = 2; i < 50; i++)
{
	prn = pr2 + pr1;
	if (i == 49)
	{
		printf(" %li\n", prn);
	}
	else
	{
		printf(" %li", prn);
	}
	pr1 = pr2;
	pr2 = prn;
}
return (0);
}
