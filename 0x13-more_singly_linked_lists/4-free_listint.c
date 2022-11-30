#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the head
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
