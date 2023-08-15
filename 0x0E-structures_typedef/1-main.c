#include <stdio.h>
#include<stddef.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    init_dog(NULL, "Poppy", 3.5, "Bob");
    printf("ok\n");
    return (0);
}
