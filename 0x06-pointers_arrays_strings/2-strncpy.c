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
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
	}
	for (j = 0; j < n && *(src + j) != '\0'; j++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
