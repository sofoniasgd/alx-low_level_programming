#include "dog.h"
#include<stddef.h>
#include<stdlib.h>
#include<stdio.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to structure argument
 * @name: first type struct dog
 * @age: second type of struct dog
 * @owner: third type of struct dog
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{

}
else
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
