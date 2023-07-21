#include<stdio.h>
/**
 * main - prints first 98 fibonacci numbes
 * Return: always 0
 */
int main(void)
{
double pr2, pr1, prn, i;
pr1 = 1;
pr2 = 2;
printf("%.0f, %.0f,", pr1, pr2);
for (i = 2; i < 98; i++)
{
	prn = pr2 + pr1;
	if (i == 97)
	{
		printf(" %.0f\n", prn);
	}
	else
	{
		printf(" %.0f,", prn);
	}
	pr1 = pr2;
	pr2 = prn;
}
return (0);
}
