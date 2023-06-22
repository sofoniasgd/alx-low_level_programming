#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * positive_or_negative - checks if a number is positive or negative
 * @i: number
 * Return: none
 */
void positive_or_negative(int i)
{
/* your code goes there */
if (i > 0)
printf("%d is positive\n", i);
else if (i == 0)
printf("%d is zero\n", i);
else
printf("%i is negative\n", i);
}
