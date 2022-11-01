#include "main.h"

/**
 * _strchr - locates first occurrence of a
 *		character in a string
 *
 * @s: string in question
 * @c: character being located
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s == c)
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
