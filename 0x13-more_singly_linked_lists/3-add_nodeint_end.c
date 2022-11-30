#include "lists.h"

/**
 * add_nodeint_end - adds new node to end of linked list
 *
 * @head: head pointer
 * @n: integer to be stored in node
 * Return: pointer to new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nav, *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	else
	{
		nav = *head;
		while (nav->next != NULL)
		{
			nav = nav->next;
		}
		nav->next = newNode;
		newNode->n = n;
	}
	return (newNode);
}
