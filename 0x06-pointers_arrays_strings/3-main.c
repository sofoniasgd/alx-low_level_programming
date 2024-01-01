#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "eret";
    char s2[] = "PATH=NOWHEREimportant";

    printf("s1 = s2-> %d\n", strcmp(s1, s2));
    printf("s2 = s1-> %d\n", strcmp(s2, s1));
    printf("s1 = s1-> %d\n", strcmp(s1, s1));
    return (0);
}
