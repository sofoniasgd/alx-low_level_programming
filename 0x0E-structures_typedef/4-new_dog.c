#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "dog.h"

/**
 * new_dog - creates new data of type struct dog/dog_t
 * @name: pointer to structure argument name
 * @age: pointer to structure argument age
 * @owner: pointer to structure argument owner
 * Return: pointer to type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t neww_dog;
dog_t *retptr;
retptr = malloc(1 * sizeof(dog_t));
if (retptr == NULL)
	free(retptr);
	return (NULL);
/* allocate memory for name variable */
neww_dog.name = malloc(1 + sizeof(name));
if (neww_dog.name == NULL)
{
	return (NULL);
}
strcpy(neww_dog.name, name);
/* allocate memory for owner variable */
neww_dog.owner = malloc(1 + sizeof(owner));
if (neww_dog.owner == NULL)
{
	return (NULL);
}
strcpy(neww_dog.owner, owner);
neww_dog.age = age;
retptr = &neww_dog;
return (retptr);
}
