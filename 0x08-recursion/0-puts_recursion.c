#include "main.h"

/**
 * _puts_recursion - prints a string to stdout
 *
 * @s: String in question
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

