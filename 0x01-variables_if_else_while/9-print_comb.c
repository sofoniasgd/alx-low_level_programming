#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
if (c == '9')
continue;
else
putchar(44);
putchar(32);
}
putchar(10);
return (0);
}
