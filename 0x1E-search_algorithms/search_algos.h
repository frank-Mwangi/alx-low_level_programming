#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - struct to singly linked list
 * @n: integer value
 * @size: list length
 * @index: list's node index
 * @next: pointer to next node
 */
typedef struct listint_s
{
	int n;
	size_t size;
	size_t index;
	struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);



#endif
