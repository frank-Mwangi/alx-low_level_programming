#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string 1
 * @needle: substring
 *
 * Return: haystack if success, NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
	

		if (needle[i] == haystack[i])
			return (&haystack[i]);
		if (haystack[i] == '\0')
			return (0);
	}	return (0);
}

