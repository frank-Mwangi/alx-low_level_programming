#include "main.h"

/**
 * _strchr - locates first occurrence of a
 *		character in a string
 *
 * @s: string in question
 * @c: character being located
 * Return: s
 */

char *_strchr(char *s, char c);
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			s = &c;
		else
			s = NULL;
	}
	return (s);
}


