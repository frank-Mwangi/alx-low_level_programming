#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
/**
 * struct listint_s - singly linked list
 * @n: integer data it contains
 * @next: pointer to next node
 *
 * Desription: Singly linked list node structure
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _putchar(char);
size_t print_listint(const listint_t *h);









#endif /* lists.h */
