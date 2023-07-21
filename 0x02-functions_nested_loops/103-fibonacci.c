#include<stdio.h>
/**
 * main - prints sum of even nos within fibonacci numbers less than 4 million
 * Return: always 0
 */
int main(void)
{
long pr2, pr1, prn, i, sum;
pr1 = 1;
pr2 = 2;
sum = 2;
for (i = 2; i < 50; i++)
{
	prn = pr2 + pr1;
	if (prn > 4000000)
	{
	break;
	}
	if (prn % 2 == 0)
	{
		sum += prn;
	}
	pr1 = pr2;
	pr2 = prn;
}
printf("%li\n", sum);
return (0);
}
