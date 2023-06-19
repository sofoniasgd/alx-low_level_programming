#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
int last = 0;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
last = n%10;
printf("Last digit of %i is %i", n, last);
if (last > 5)
printf(" and is greater than 5\n");
else if (last == 0)
printf(" and is 0\n");
else if (last < 6 && last != 0)
printf(" and is less than 6 and not 0\n");
return (0);
}
