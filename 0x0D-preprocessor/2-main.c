#include<stdio.h>

/**
 * main - printf name of this file specified at the commanline
 * Return: 0
 */

int main(void)
{
printf("%s\n", __BASE_FILE__);
return (0);
}
