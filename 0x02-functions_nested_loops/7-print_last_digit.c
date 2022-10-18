#include "main.h"
/**
 * print_last_digit - shows the last digit
 * of a number
 * @i: input in integer format
 * Return: value of last digit.
 */
int print_last_digit(int i)
{
	int m;

	if (i < 0)
	{
		m = (i % 10) * -1;
	}
	else
	{
		m = i % 10;
	}
	_putchar(m + '0');
	return (m);
}
