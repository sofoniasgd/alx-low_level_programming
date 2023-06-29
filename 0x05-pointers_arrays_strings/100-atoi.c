#include<stdio.h>
#include "main.h"

/**
 * _atoi - returns/extracts an int from a string
 * @s: string pointer
 * Return: int number
 */

int _atoi(char *s)
{
int len, i, num, start, digit, p, flag, pow;
len = 0, digit = 0, p = 0, i = 0, flag = 0, num = 0;

/* finds the length of the string */
while (*(s + i) != '\0')
{
len++;
i++;
}
/* printf("length of string - %d\n", len);*/
i = 0;
/* traversing the string and finding numbers */
for (i = 0; i < len; i++)
{
if (((*(s + i) >= '0' && *(s + i) <= '9') && (*(s + (i - 1)) < 48 || *(s + (i - 1)) > 57) && i > 0) || ((*(s + i) >= '0' && *(s + i) <= '9') && i == 0))
	{
	start = i;
	flag = 1;
	digit++;
	}
else if (((*(s + i) >= '0' && *(s + i) <= '9') && *(s + (i + 1)) == '\0') || ((*(s + i) >= '0' && *(s + i) <= '9') && (*(s + i + 1) < '0' || *(s + i + 1) > '9')))
	{
	digit++;
	flag = 0;
	break;
	}
else if ((*(s + i) >= '0' && *(s + i) <= '9') && flag == 1)
	{
	digit++;
	}
}
/* printf("digits - %d\n", digit); */
i = 0;
for (i = start + (digit - 1); i >= start; i--)
{
	pow = *(s + i);
	pow = pow - 48;
	pow = power(p) * pow;
	num = num + pow;
	p++;
	/* printf("num is- %d\n", num); */
}
if (*(s + start - 1) == '-')
{
num = num * -1;
}
/* printf("start of number- %d\n", start); */
return (num);
}

/**
  * power - calculate power of ten
  * @c: exponent
  * Return: 10, 100, 1000,1 multiple of 10 power x
  */
int power(int c)
{
	int ans, i;
	ans = 1;
	if (c == 0)
	{
		return (1);
	}
	else
	{
		for (i = 0; i < c; i++)
		{
			ans = ans * 10;
		}
		return (ans);
	}
}
