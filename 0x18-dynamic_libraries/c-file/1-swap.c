#include "main.h"

/**
 * swap_int - swaps two integers using pointers
 * @a:first pointer
 * @b:second pointer
 * Return: none
 */

void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
