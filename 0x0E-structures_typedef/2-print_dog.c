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
			printf("Name: (nil)\n");
		else
			printf("Name: %c\n", d->name);
		printf("Age: %d\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %c\n", d->owner);
	}
}
