#include "lists.h"

/**
 * free_listint2 - frees a linked list
 *
 * @head: pointer to head pointer
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	free_listint2(*head->next);
	head = NULL;
}

