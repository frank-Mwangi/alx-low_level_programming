#include "lists.h"

/**
 * add_nodeint - adds node at beginning of
 *	         linked list
 * @head: head pointer
 * @n: integer to be contained in node
 * Return: pointer to new list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
