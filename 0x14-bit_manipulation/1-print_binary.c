#include "main.h"

/**
 * print_binary - outputs binary equivalent of
 *                an integer
 * @n: integer to be converted
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}


