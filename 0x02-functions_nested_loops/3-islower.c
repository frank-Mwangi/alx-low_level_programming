#include "main.h"
/*
 * _islower - checks whether input character is lowercase.
 * @c: The character's ASCII code
 * Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
