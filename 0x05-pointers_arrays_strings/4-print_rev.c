#include "main.h"

/**
 * print_rev - prints a string on stdout in reverse
 * @s: The string in question
 */

void print_rev(char *s)
{
	int i;

	for (*(s + i) == '\0'; i >= 0; --i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

