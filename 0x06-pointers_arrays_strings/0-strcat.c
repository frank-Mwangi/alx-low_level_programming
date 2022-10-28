#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
	}
	for (j = 0; *(src + i) != '\0'; j++)
		*(dest + (j + i)) = *(src + j);
	return (dest);
}
