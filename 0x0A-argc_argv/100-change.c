#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/**
 * main - prints the minimum number of coins in change to input money
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success)
 */
int main(__attribute__((unused)) int argc, __attribute__((unused)) char *argv[])
{
int i, coins, amount, money;
int cointype[5];
money = atoi(argv[argc - 1]);
coins = 0;
/* storing the coin types*/
cointype[0] = 25;
cointype[1] = 10;
cointype[2] = 5;
cointype[3] = 2;
cointype[4] = 1;
/* if negavite money input, print zero */
if (money < 0)
	{
	printf("0\n");
	return (0);
	}
/* cycle through coin types */
for (i = 0; i < 5; i++)
	{
	/* if money is more than current coin tpe */
	/* then subtract multiples of coin from money */
	/* and add amount of coins to total */
	if ((money / cointype[i]) >= 1)
		{
		amount = money / cointype[i];
		money -= amount * cointype[i];
		coins += amount;
		}

	}
printf("%i\n", coins);
return (0);
}
