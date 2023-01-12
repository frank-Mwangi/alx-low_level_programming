#include "lists.h"

/**
 * sum_dlistint - sums all values in DLL
 * @head: pointer to beginning of linked
 *        list
 * Return: sum 
 */

int sum_dlistint(dlistint_t *head)
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
