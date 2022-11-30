#include "lists.h"

/**
 * listint_len - finds length of linked list
 * @h: head pointer
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		h = h->next;
		m++;
	}
	return (m);
}
