#include "main.h"

/**
 * _strcpy - copies a string onto another
 *
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) <= '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
