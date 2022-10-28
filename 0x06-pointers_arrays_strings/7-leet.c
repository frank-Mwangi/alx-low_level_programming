#include "main.h"

/**
 * leet - Mozart 1337
 * @c: Input string
 * Return: c
 */

char *leet(char *c)
{
	int i, j;
	int k[] = "AaEeOoTtLl";
	int m[] = "4433007711";

	for (i = 0; *(k + i) != '\0'; i++)
	{
		for (j = 0; *(m + j) != '\0'; j++)
		{
			if *(c + i) == *(k + i)
				c[i] = m[i];
		}
	}
	return (c);
}


