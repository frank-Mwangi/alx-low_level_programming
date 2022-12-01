#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node in linked list
 * @index: position of node
 *
 * Return: pointer to node n
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nav;
	unsigned int i = 0;

	nav = head;
	while (nav != NULL)
	{
		nav = nav->next;
		i++;
		if (i == index)
			return (nav);
	}
	return (NULL);
}
