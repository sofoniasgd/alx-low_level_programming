#include <stdio.h>
#include "main.h"
#include<limits.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("\n%d\n", n);
    n = get_bit(98, 1);
    printf("\n%d\n", n);
    n = get_bit(1024, 0);
    printf("\n%d\n", n);
    n = get_bit(2048, 20);
    printf("\n%d\n", n);
    n = get_bit(ULONG_MAX, 19);
    printf("\n%d\n", n);
    n = get_bit(ULONG_MAX, 0);
    printf("\n%d\n", n);
    return (0);
}
