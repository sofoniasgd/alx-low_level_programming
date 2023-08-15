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
dog_t *new_dog;

new_dog = malloc(1 * sizeof(dog_t));
if (new_dog == NULL)
{
	printf("NULL malloc\n");
	free(new_dog);
	return (NULL);
}
new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;

return (new_dog);
}
