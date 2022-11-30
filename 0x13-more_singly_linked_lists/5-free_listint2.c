#include "lists.h"

/**
 * free_listint2 - frees a linked list
 *
 * @head: pointer to head pointer
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;
	tmp = *head->next;
	free(*head);
	*head = tmp;
}

