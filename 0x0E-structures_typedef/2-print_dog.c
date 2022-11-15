#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the struct dog
 *
 * @d: pointer to the struct
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = (nil);
		if (d->age == NULL)
			d->name = (nil);
		if (d->owner == NULL)
			d->owner = (nil);
		printf("Name: %c\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %c\n", d->owner);
	}
}
