# include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints digits 0 to 9
 * omits 2 and 4
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		else
			_putchar (i);
	}
	_putchar ('\n');
}

