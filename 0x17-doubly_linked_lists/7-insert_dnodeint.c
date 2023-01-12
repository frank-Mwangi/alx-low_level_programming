#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: Head pointer to DLL
 * @idx: target index
 * @n: data of target node
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	temp = *h;
	for (i = 0; i < (idx - 1); i++)
	{
		temp = temp->next;
	}
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next = new;
	new->next->prev = new;

	return (new);
}
