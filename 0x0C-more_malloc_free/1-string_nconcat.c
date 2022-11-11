#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: length of s2 to append to s1
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, x, y;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 == "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n >= j)
		n = j;
	str = malloc(sizeof(char) * (i + n + 1));
	if (str == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		str[x] = s1[x];
	for (y = 0; y < n; y++)
	{
		str[x + y] = s2[y];
	}
	str[x + y] = '\0';
	return (str);
}
