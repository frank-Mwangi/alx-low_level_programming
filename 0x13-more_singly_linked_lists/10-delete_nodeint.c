#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at specified index
 * @head: pointer to head pointer
 * @index: position of node to be deleted
 *
 * Return: 1 on success, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nav, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	nav = *head;
	if (index != 0)
	{
		for (i = 0; i < index && nav != NULL; i++)
			nav = nav->next;
		if (nav == NULL)
			return (-1);
		temp = nav->next;
		nav->next = temp->next;
		free(temp);
	}
	if (index == 0)
	{
		*head = nav->next;
		free(nav);
	}
	return (1);
}
