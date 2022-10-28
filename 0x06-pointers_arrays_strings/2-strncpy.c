#include "main.h"

/**
 * _strncpy - copies a string onto another
 * @dest: string 1
 * @src: string 2
 * @n: integer length limit of S2
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(dest + i) != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}

