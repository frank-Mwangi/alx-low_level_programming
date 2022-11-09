#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: size of the array
 * @c: character to populate the array
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	int *i;
	int j;

	if (size == 0)
		return (NULL);
	i = malloc(size * sizeof(char));
	for (j = 0; j < size; j++)
	{
		i[j] = c;
	}
	if (i == NULL)
	{
		return (NULL);
	}
	return (i);
}

