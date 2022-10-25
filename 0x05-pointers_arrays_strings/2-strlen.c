#include "main.h"

/**
 * _strlen - displays the length of a string
 *
 * @s: string in question
 * Return: i (length of string)
 */

int _strlen(char *s)
{
	int i;

	while (*s != 0)
	{
		s++;
		i++;
	}
	return (i);
}
