#include "lists.h"

/**
 * pop_listint - deletes head node of a
 *               linked list
 * @head: head pointer
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	temp = *head;
	if (temp == NULL)
		return (0);
	*head = temp->next;
	i = temp->n;
	free(temp);
	return (i);
}


