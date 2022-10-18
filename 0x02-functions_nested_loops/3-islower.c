#include "main.h"
#include <ctype.h>
/*
 * _islower - checks whether a character islowercase
 *
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
