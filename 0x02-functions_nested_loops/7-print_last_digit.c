#include "main.h"
/**
 * print_last_digit - shows the last digit
 * of a number
 * @i: input in integer format
 * Return: value of last digit.
 */
int print_last_digit(int i)
{
	int m = (i % 10);

	if (m < 0)
	{
		_putchar(-m + 48);
		return (-1);
	}
	else
	{
		_putchar(-m + 48);
		return (1);
	}
}
