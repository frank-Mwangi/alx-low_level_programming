#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string in question
 *
 */

void _puts(char *str)
{
	char str[];
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		puts(str[i]);
	}
}
