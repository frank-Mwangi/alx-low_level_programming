#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array in question
 * @size: size of array
 * @cmp: function pointer
 * Return: 0 success, -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
