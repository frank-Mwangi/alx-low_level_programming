#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes struct dog
 * struct dog - the struct in question
 * @d: pointer to the struct
 * @name: doggo's name
 * @age: doggo's age
 * @owner: dog's human
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (my_dog);
}
