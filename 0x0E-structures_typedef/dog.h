#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - defines dog qualities
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 *
 * Description: Let's find out more about this
 *		dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* main.h */
