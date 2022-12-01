#include "lists.h"

/**
 * sum_listint - sums all of the data in linked
 *               list
 * @head: the head pointer
 * Return: sum of all node data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
