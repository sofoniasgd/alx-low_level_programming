#include "lists.h"

/**
 * ispalindrome - checks if a number is a palindrome
 * @number: number to be ckecked
 * Return: 1 if True, 0 if else
 */
int ispalindrome(int number)
{
	int check, mul, ret = 0, i;

	check = (number > 99999) ? 6 : 5;
	
	int a[check];
	mul = 10;
	for (i = 0; i < check; i++)
	{
		a[i] = (number % mul) / (mul / 10);
		mul *= 10;
	}
	/*check for palindrome*/
	if (check == 5)
	{
		if ((a[0] == a[4]) && (a[1] == a[3]))
			ret = 1;
	}
	else if (check == 6)
	{
		if ((a[0] == a[5]) && (a[1] == a[4]) && (a[2] == a[3]))
			ret = 1;
	}
	/* print digits */
	if (ret == 1)
	{
		printf("palindrome digits-\n");
		for (i = 0; i < check; i++)
			printf("%i", a[i]);
		printf("\n");

		return (ret);
	}
	return (0);
}

/**
 * main - multiplies two three digit numbers
 * Return: 0
 */
int main(void)
{
	int i, j, product, palindrome = 0, x, y;

	for (i = 100; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			product = i * j;
			if((ispalindrome(product) == 1) && product > palindrome)
			{
				palindrome = product;
				x = i;
				y = j;
			}

		}
	}
	if (palindrome)
		printf("finally the largest palindrome of a %i * %i product is= <<%i>>\n", x, y, palindrome);
	return (0);
}
