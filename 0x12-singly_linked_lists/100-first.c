#include<stdio.h>
void beforemain(void) __attribute__((constructor));
/**
 * beforemain - prints a string before main function ececutes
 * Return: none
 */

void beforemain(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
