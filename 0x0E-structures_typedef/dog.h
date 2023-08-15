#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define a new structure dog
 * @name: name pointer
 * @age: float for age
 * @owner: pointer to string
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
