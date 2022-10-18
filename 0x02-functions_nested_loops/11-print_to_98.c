#include "main.h"
/**
 * print_to_98 - prints numbers to 98
 * @i: The input parameter
 * @n: The integer input
 *
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
			_putchar(i);
			if (i < 98)
			{
			_putchar(',');
			_putchar(' ');
			}
	}
	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
			_putchar(i);
			if (i > 98)
			{
			_putchar(',');
			_putchar(' ');
			}
	}
}
