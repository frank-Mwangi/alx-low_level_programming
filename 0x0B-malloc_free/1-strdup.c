#include "main.h"

/**
 * _strdup - copies given string to a newly
 *		allocated space in memory
 *
 * @str: provided string
 *
 * Return: pointer to duplicate string
 */

char *_strdup(char *str)
{
	char *i;
	int x, y;

	for (x = 0; str[x] != '\0'; x++)
	{
	}
	i = malloc(sizeof(char) * x);
	if (i == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
	{
		i[y] = str[y];
		y++;
	}
	return (i);
}
