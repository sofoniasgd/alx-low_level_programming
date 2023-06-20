#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 Always(Success)
 */

int main(void)
{
int i;
char outp[8] = {'_','p','u','t','c','h','a','r'};
for (i = 0; i < 8; i++)
{
int j = outp[i];
_putchar(j);
}
_putchar(10);
return (0);
}
