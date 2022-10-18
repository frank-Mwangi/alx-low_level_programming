#include "main.h"
/**
 * print_sign - checks whether a number n is
 * greater than, less than or equal to zero
 *
 * @n: the input as an integer
 * Return: 1 if greater than 0. 0 if n = 0. -1
 * if n < 0
 */
int print_sign(int n)
{
	if  (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
