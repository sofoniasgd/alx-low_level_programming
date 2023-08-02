#include "main.h"

/**
 * is_prime_number - finds if a number is prime
 * @n: number to be checked
 * Return: 1 if number is prime, 0 if not
 */
int is_prime_number(int n)
{
int i;
if (n <= 1)
	return (0);
i = 2;
return (prime(i, n));
}

/**
 * prime - find prime factors
 * @i: prime factors
 * @n: checked number
 * Return: 0 if found, 1 if not
 */
int prime(int i, int n)
{
if (i == n)
	return (1);
if (i *i == n)
	return (0);
return (prime(i + 1, n));
}
