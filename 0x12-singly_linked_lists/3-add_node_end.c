#include "lists.h"

/**
 * add_node_end - adds node at end of linked list
 * @head: points to head pointer
 * @str: string to be added
 * Return: pointer to new string
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *nav;
	unsigned int length;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	new_node->len = length;
	nav = *head;
	while (nav->next != NULL)
	{
		nav = nav->next;
	}
	nav->next = new_node;
	return (new_node);
}

