#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int c;
for (c = 48; c <= 57; c++)
{
putchar(c);
if (c == 57)
continue;
else
putchar(44);
putchar(32);
}
putchar(10);
return (0);
}
