#include "main.h"

/**
 * malloc_checked - allocates memory and returns a
 *			pointer
 *
 * @b: argument
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(sizeof(*b));
	if (i == NULL)
	{
		free(i);
		exit(98);
	}
	return (i);
}
