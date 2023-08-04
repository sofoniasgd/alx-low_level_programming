#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/**
 * main - prints product of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
int coins, amount;
double __attribute__((unused))money, sum;
/* runs only if there is an argument supplied(amount of coins) */
if (argc == 2)
	{
	coins = atoi(argv[1]);
	/* print zero if argument is negative*/
	if (coins < 0)
		{
		printf("%i\n", 0);
		}

	amount = (double)coins * 0.1;
	if (floor(amount) == amount)
		{

		}
	printf("num\n");
	}
/* else print error*/
else
	{
	printf("Error\n");
	return (1);
	}
return (0);
}
