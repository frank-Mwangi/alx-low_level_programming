#include "main.h"

/**
 * more_numbers - prints numbers 0 to 9
 * and repeats 10 times
 *
 */

void more_numbers(void)
{
	int a, b;

	for (b = 0; b <= 9; b++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
