#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - performs linear serch on an array
 * 
 * @array: pointer to the array
 * @size: length of array
 * @value: value to search
 * Return: 0 on success, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
