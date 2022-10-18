#include "main.h"
/**
 * times_table - prints the multiplication table
 * of 9
 *
 */
void times_table(void)
{
	int r, c, p;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		for (c = 1; c <= 9; c++)
		{
			p = (r * c);
			_putchar(p);
			if (p < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
