#include<stdio.h>
#include<stdlib.h>
#include "dog.h"

/**
 * print_dog - print struct dog
 * @d: pointer to structure argument
 * Return: none
 */
void print_dog(struct dog *d)
{
if (d == NULL)
	{
	exit(0);
	}
/* check name type */
if (d->name == NULL)
	printf("Name: (nil)\n");
else
	printf("Name: %s\n", d->name);
/* check age type */
if ((d->age == d->age) == 0)
	printf("(nil)\n");
else
	printf("Age: %f\n", d->age);
/* check owner type */
if (d->owner == NULL)
	printf("Owner: (nil)\n");
else
	printf("Owner: %s\n", d->owner);
}
