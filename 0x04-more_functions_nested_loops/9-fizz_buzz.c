#include "main.h"
#include<stdio.h>
/**
 * main - prints 0-100 fizz buzz
 *
 * Return: always 0 
 */
int main(void)
{
int i;
for (i = 0; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
printf("FIZZ ");
else if (i % 3 != 0 && i % 5 == 0)
printf("BUZZ ");
else if (i % 3 == 0 && i % 5 == 0)
printf("FIZZBUZZ ");
else
printf("%i ", i);
}
printf("\n");
return (0);
}

