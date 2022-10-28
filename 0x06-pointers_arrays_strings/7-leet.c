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

	for (i = 0; *(c + i) != '\0'; i++)
	{
		for (j = 0; *(k + j) != '\0'; j++)
		{
			if *(c + i) == *(k + j)
				c[i] = m[j];
		}
	}
	return (c);
}


