#include "main.h"

/**
 * array_range - creates an array and allocates
 *		memory for it
 * @min: first element of array
 * @max: last element of array
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *array, i, j;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
	{
	}
	array = malloc(sizeof(int) * (i + 1));
	if (array == NULL)
		return (NULL);
	j = 0;
	while (j <= i)
	{
		array[j] = min;
		j++;
		min++;
	}
	return (array);
}
