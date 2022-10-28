#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: String 1
 * @s2: string 2
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int i, result;

	i = 0;
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if (s1[i] != s2[i])
			result = s1[i] - s2[i];
		else
			result = 0;
	}
	return (result);
}
