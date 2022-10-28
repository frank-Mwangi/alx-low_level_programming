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

	for (i = 0; (dest + i) != '\0'; i++)
		_putchar(i);
	for (j = 0; (src + j) != '\0'; j++)
		_putchar(j);
	_putchar('\n');
}
