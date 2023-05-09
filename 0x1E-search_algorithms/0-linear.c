#include <stdio.h>
#include <search_algos.h>

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

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Found %d at index: %d", value, i);
			break;
		}
		else
		{
			printf("Value checked array[%d] = [%d]", i, array[i]);
		}
	}
	if (i == size)
	{
		printf("Found %d at index: -1", value);
		return (-1);
	}
	return (0);
}
