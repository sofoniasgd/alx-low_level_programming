#include "main.h"
#include<stdio.h>
#include<stddef.h>
/**
 * two_n - calculates 2 raised to n
 * @n: exponent of 2
 * Return: result of 2^n
 */
unsigned int two_n(unsigned int n)
{
unsigned int result, i;
result = 1;
/* return 1 when n=0 -> 2^0=1 */
if (n == 0)
	return (result);
for (i = 1; i <= n; i++)
	{
	result *= 2;
	}
return (result);
}

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string of 0 & 1 chars
 * Return: the resulting unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int num, len;
num = 0;
len = 0;
/*check for empty string*/
if (b == NULL || *b == '\0')
	return (num);
/*find string length*/
while (*(b + len) != '\0')
	len++;
len -= 1;
/*traverse the string starting from rightmost char*/
for (i = len; i >= 0; i--)
	{
	if (*(b + i) == '0')
		{}
	/* if char is 1 then add 2^n to result */
	else if (*(b + i) == '1')
		num += two_n(len - i);
	/*return 0 when encountering chars other than 1 or 0*/
	else
		return (0);
	}
return (num);
}
